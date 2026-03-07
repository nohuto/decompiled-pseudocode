void __fastcall __noreturn Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_OnProtocolException_0(
        __int64 a1,
        int **a2)
{
  CoreMessagingK::Runtime::BugCheck(1028, **a2, 0LL);
}
