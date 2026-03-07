__int64 __fastcall Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_PrepareConnection_35(
        __int64 a1,
        int **a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = **a2;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = a2[4];
  result = 0LL;
  CoreMessagingK::RegistrarClient::s_Reply_Result = v2;
  return result;
}
