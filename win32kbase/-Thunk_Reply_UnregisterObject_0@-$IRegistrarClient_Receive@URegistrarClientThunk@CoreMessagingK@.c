__int64 __fastcall Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_UnregisterObject_0(
        __int64 a1,
        _DWORD **a2)
{
  __int64 result; // rax

  result = 0LL;
  CoreMessagingK::RegistrarClient::s_Reply_Result = **a2;
  return result;
}
