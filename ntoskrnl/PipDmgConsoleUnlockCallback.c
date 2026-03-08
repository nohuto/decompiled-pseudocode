/*
 * XREFs of PipDmgConsoleUnlockCallback @ 0x1409682D0
 * Callers:
 *     <none>
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1409683EC (PipDmgFlushQueueAndRestartDevices.c)
 */

__int64 PipDmgConsoleUnlockCallback()
{
  __int64 result; // rax

  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      return PipDmgFlushQueueAndRestartDevices();
    }
    else if ( PipDmaGuardPolicy != 3 )
    {
      __fastfail(5u);
    }
  }
  return result;
}
