/*
 * XREFs of HvlpCondenseMicrocode @ 0x14088E988
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x14088E960 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     HvcallInitInputControl @ 0x1403656C0 (HvcallInitInputControl.c)
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 HvlpCondenseMicrocode()
{
  unsigned __int16 v0; // ax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+50h] [rbp-28h]

  v2 = 0LL;
  v4 = 1;
  HvcallInitInputControl(7, &v2);
  LODWORD(v2) = v2 | 0x10000;
  v0 = HvcallFastExtended(v2, (__int64)v3, 0x18u, 0, 0);
  return HvlpHvToNtStatus(v0);
}
