/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x1409377EC
 * Callers:
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1404150F0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  RegHandle = 0LL;
  v1 = 0;
  ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL);
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) )
      v1 = EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
