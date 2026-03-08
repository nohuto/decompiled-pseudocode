/*
 * XREFs of CarCreateViolationHashString @ 0x1405D313C
 * Callers:
 *     CarInitializeTelemetryData @ 0x1405D1970 (CarInitializeTelemetryData.c)
 * Callees:
 *     AppendUlongAsHexadecimalW @ 0x1405D3078 (AppendUlongAsHexadecimalW.c)
 *     CarEtwCopyDriverName @ 0x1405D31BC (CarEtwCopyDriverName.c)
 */

__int64 __fastcall CarCreateViolationHashString(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx

  if ( !a1 )
    return 3221225485LL;
  v5 = a1 + 88;
  if ( a1 == -88 )
    return 3221225485LL;
  AppendUlongAsHexadecimalW(a1 + 88, a2);
  *(_WORD *)(v5 + 16) = 95;
  AppendUlongAsHexadecimalW(v5 + 18, a3);
  *(_WORD *)(v5 + 34) = 95;
  return CarEtwCopyDriverName(v5 + 36, a1 + 4, 494LL);
}
