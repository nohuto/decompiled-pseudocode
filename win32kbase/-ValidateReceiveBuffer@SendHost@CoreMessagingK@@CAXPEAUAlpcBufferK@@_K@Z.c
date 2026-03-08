/*
 * XREFs of ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C00822A0
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0082070 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::SendHost::ValidateReceiveBuffer(struct AlpcBufferK *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 v3; // r9

  if ( (unsigned __int8)*((_WORD *)a1 + 2) != 2 )
    CoreMessagingK::Runtime::BugCheck(1284LL, (unsigned __int8)*((_WORD *)a1 + 2), 0LL);
  if ( a2 < 0x50 )
    CoreMessagingK::Runtime::BugCheck(1285LL, a2, 0LL);
  v2 = *((unsigned int *)a1 + 18) + 80LL;
  if ( a2 != v2 )
    CoreMessagingK::Runtime::BugCheck(1286LL, a2, v2);
  v3 = 512;
  if ( (unsigned __int64)CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80 >= 0x200 )
    v3 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80;
  if ( a2 > v3 )
    CoreMessagingK::Runtime::BugCheck(1287LL, a2, v3);
  if ( *((_DWORD *)a1 + 16) != 0x10000 )
    CoreMessagingK::Runtime::BugCheck(1288LL, *((unsigned __int16 *)a1 + 32), *((unsigned __int16 *)a1 + 33));
}
