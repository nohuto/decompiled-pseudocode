/*
 * XREFs of HvlSetRootFaultReportingReady @ 0x140543920
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 HvlSetRootFaultReportingReady()
{
  unsigned __int16 v0; // ax
  _OWORD v2[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v3; // [rsp+60h] [rbp-28h]

  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  LODWORD(v2[0]) = 32;
  v0 = HvcallFastExtended(65647LL, (__int64)v2, 0x28u, 0LL, 0);
  return HvlpHvToNtStatus(v0);
}
