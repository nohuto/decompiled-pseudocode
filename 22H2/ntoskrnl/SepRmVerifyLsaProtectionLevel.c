/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1407ADA98
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1403FC640 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

void SepRmVerifyLsaProtectionLevel()
{
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v1[4]; // [rsp+50h] [rbp-20h] BYREF

  v1[0] = 2012912317;
  v1[1] = 1295123289;
  DestinationString = 0LL;
  v1[2] = -198680387;
  v1[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v1);
}
