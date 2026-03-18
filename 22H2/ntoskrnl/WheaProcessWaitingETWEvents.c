/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x140613170
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612FE4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapProcessWaitingETWEvents @ 0x140861010 (WheapProcessWaitingETWEvents.c)
 */

void WheaProcessWaitingETWEvents()
{
  if ( KeGetCurrentIrql() )
  {
    if ( WheaFlushETWEventsInitialized )
      WheaFlushETWEventsAddWorkRtn();
  }
  else
  {
    WheapProcessWaitingETWEvents();
  }
}
