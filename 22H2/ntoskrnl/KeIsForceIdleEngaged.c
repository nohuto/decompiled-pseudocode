/*
 * XREFs of KeIsForceIdleEngaged @ 0x1402F0E94
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1402F0BB0 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
