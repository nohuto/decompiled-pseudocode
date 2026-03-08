/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x140610D50
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheaFlushETWEventsAddWorkRtn @ 0x140610BC4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
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
