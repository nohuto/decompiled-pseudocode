void __fastcall CoreMessagingK::RegistrarClient::InitializeMessageAttributes(struct _ALPC_MESSAGE_ATTRIBUTES *a1)
{
  int v2; // eax
  __int64 MessageAttribute; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 32LL;
  v2 = AlpcInitializeMessageAttribute(0x80000000LL, a1, 32LL, v4);
  if ( v2 < 0 )
    CoreMessagingK::Runtime::BugCheck(1031LL, v2, 0LL);
  MessageAttribute = AlpcGetMessageAttribute(a1, 0x80000000LL);
  *(_DWORD *)MessageAttribute = 0;
  *(_QWORD *)(MessageAttribute + 8) = 0LL;
  *(_QWORD *)(MessageAttribute + 16) = -2LL;
  *((_DWORD *)a1 + 1) = 0x80000000;
}
