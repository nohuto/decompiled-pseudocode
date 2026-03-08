/*
 * XREFs of KeIsForceIdleEngaged @ 0x14024EAFC
 * Callers:
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
