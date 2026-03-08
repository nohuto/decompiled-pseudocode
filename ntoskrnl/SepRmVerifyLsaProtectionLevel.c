/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x140825764
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x140415070 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 SepRmVerifyLsaProtectionLevel()
{
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v2[4]; // [rsp+50h] [rbp-20h] BYREF

  v2[0] = 2012912317;
  v2[1] = 1295123289;
  DestinationString = 0LL;
  v2[2] = -198680387;
  v2[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  return ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v2);
}
