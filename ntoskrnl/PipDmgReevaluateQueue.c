/*
 * XREFs of PipDmgReevaluateQueue @ 0x1409684CC
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x14081CB84 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x140867254 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140968304 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1409683EC (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x1409695FC (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices();
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
