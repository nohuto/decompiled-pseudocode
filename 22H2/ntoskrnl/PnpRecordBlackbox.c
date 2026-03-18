/*
 * XREFs of PnpRecordBlackbox @ 0x140785ADC
 * Callers:
 *     PnpDisableWatchdog @ 0x140782B7C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140785A5C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallAddDevice @ 0x140792B3C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E2148 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881B60 (PnpDelayedRemoveWorker.c)
 *     PnpWatchdogFirstChanceCallback @ 0x140957B90 (PnpWatchdogFirstChanceCallback.c)
 * Callees:
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140782BCC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140784394 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096ED9C (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
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
    PnpRecordBlackboxPnpEventWorkerInformation(a1);
  }
}
