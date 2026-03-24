/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1407AD658
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1403FCFC0 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
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
