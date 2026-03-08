/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C00BC2F4
 * Callers:
 *     rimProcessInput @ 0x1C00045B0 (rimProcessInput.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C0039B74 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0039C14 (rimIssueReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0039E14 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0088F68 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDevWorker @ 0x1C0089188 (RIMOpenDevWorker.c)
 *     RIMIsWakeCapableDevice @ 0x1C00BBEF0 (RIMIsWakeCapableDevice.c)
 *     rimDoRimDevChangeCallback @ 0x1C00BC28C (rimDoRimDevChangeCallback.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveDevOfInputType @ 0x1C00C986C (RIMRemoveDevOfInputType.c)
 *     RIMFillDeviceHealthInfo @ 0x1C01A4C50 (RIMFillDeviceHealthInfo.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01CFE1C (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01D0004 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01D2AB4 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01E273C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x1000) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
    if ( v5 == 7 )
      return 8LL;
    if ( (unsigned int)(v5 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v5 - 1) <= 3 )
      return 16LL;
    return 0LL;
  }
  return *(_BYTE *)(a1 + 48) != 3 ? 0x20 : 0;
}
