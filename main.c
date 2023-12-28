int main() {
    FCGX_Init();
    FCGX_Request request;

    FCGX_InitRequest(&request, 0, 0);

    Controller myController;
    init_controller(&myController, "/my/path", doGet, NULL, NULL, NULL);

    Controller *controllers[] = {&myController, NULL};

    while (FCGX_Accept_r(&request) == 0) {
        dispatch(FCGX_GetParam("QUERY_STRING", request.envp), NULL, request.envp, controllers);
    }

    return 0;
}