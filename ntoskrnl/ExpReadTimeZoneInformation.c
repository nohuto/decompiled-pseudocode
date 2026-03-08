/*
 * XREFs of ExpReadTimeZoneInformation @ 0x1409F51A8
 * Callers:
 *     ExpReadSiloTimeZoneMarker @ 0x1409F5178 (ExpReadSiloTimeZoneMarker.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExpReadTimeZoneInformation(__int64 a1, int a2, __int64 a3)
{
  _QWORD v6[15]; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+B8h] [rbp+10h] BYREF

  v7 = a2;
  memset(v6, 0, 0x70uLL);
  LODWORD(v6[1]) = 288;
  v6[2] = a1;
  v6[3] = a3;
  LODWORD(v6[4]) = 67108868;
  v6[5] = &v7;
  LODWORD(v6[6]) = 4;
  return RtlpQueryRegistryValues(2LL, L"TimeZoneInformation", v6, 0LL);
}
