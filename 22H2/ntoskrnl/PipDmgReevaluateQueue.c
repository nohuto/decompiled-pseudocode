/*
 * XREFs of PipDmgReevaluateQueue @ 0x14096B4EC
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x1408144B4 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x14086A254 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B324 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x14096B40C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x14096C61C (PiCslIsConsoleLocked.c)
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
