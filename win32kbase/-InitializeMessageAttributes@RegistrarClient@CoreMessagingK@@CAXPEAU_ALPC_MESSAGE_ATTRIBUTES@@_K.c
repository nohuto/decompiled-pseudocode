/*
 * XREFs of ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C00C0E80
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C00C09E4 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

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
