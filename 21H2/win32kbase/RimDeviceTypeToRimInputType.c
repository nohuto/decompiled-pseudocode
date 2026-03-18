/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C00A2040
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0044DC0 (rimIssueReads.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00483F8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     RIMOpenDevWorker @ 0x1C004B0E0 (RIMOpenDevWorker.c)
 *     rimDoRimDevChangeCallback @ 0x1C00A1FD8 (rimDoRimDevChangeCallback.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B713C (RIMRemoveDevOfInputType.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00C33C0 (RIMRegisterForDeviceChangeNotifications.c)
 *     rimProcessInput @ 0x1C00CA6AC (rimProcessInput.c)
 *     RIMIsWakeCapableDevice @ 0x1C00D2D98 (RIMIsWakeCapableDevice.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0182ED0 (RIMFillDeviceHealthInfo.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01AA314 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B7F9C (RIMHandleTTMDeviceArrival.c)
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
  }
  else if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
    if ( v5 == 7 )
      return 8LL;
    if ( (unsigned int)(v5 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v5 - 1) <= 3 )
      return 16LL;
  }
  return 0LL;
}
