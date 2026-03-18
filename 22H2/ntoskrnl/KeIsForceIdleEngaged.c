/*
 * XREFs of KeIsForceIdleEngaged @ 0x14025010C
 * Callers:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x140346E44 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14057D1DC (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
