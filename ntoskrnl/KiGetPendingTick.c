/*
 * XREFs of KiGetPendingTick @ 0x1403CED40
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

char KiGetPendingTick()
{
  struct _KPRCB *CurrentPrcb; // rax

  if ( KiClockTimerPerCpu )
    CurrentPrcb = KeGetCurrentPrcb();
  else
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  return CurrentPrcb->PendingTickFlags & 1;
}
