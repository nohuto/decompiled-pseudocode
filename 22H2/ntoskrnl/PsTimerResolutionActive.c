/*
 * XREFs of PsTimerResolutionActive @ 0x14025F9D4
 * Callers:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KeSetTimerEx @ 0x14025F790 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x14035A7DC (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
