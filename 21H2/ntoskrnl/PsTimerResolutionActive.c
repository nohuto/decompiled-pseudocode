/*
 * XREFs of PsTimerResolutionActive @ 0x140260174
 * Callers:
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KeSetTimerEx @ 0x14025FF30 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
