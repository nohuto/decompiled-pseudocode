void __fastcall __noreturn Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_OnProtocolExceptionWithDiagnostics_3(
        __int64 a1,
        int **a2)
{
  CoreMessagingK::Runtime::BugCheck(1032, **a2, 0LL);
}
