/*
 * XREFs of HvlDisablePasid @ 0x140540980
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDisablePasid(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+54h] [rbp-24h]

  v6 = 0;
  v4[0] = -1LL;
  v4[1] = a1;
  v5 = a2;
  v2 = HvcallFastExtended(65701LL, (__int64)v4, 0x18u, 0LL, 0);
  return HvlpHvToNtStatus(v2);
}
