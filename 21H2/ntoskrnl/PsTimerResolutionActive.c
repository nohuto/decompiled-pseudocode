/*
 * XREFs of PsTimerResolutionActive @ 0x1402818E4
 * Callers:
 *     KeSetTimerEx @ 0x1402816A0 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x14029A5CC (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
