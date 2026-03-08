/*
 * XREFs of PsTimerResolutionActive @ 0x140250500
 * Callers:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
