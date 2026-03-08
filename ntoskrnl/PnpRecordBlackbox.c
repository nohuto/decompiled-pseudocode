/*
 * XREFs of PnpRecordBlackbox @ 0x14068A980
 * Callers:
 *     PnpDisableWatchdog @ 0x140688BC4 (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14068A900 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 *     PnpWatchdogFirstChanceCallback @ 0x140954B70 (PnpWatchdogFirstChanceCallback.c)
 * Callees:
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140688C14 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14068AB00 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096BD7C (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

void __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 1) >= 2 )
          __fastfail(5u);
      }
      else
      {
        PnpRecordBlackboxDelayedRemoveWorkerInformation();
      }
    }
    else
    {
      PnpRecordBlackboxDeviceCompletionQueueInformation(a1);
    }
  }
  else
  {
    PnpRecordBlackboxPnpEventWorkerInformation();
  }
}
