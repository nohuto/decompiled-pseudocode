/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0055804
 * Callers:
 *     rimDoRimDevChangeCallback @ 0x1C00524C8 (rimDoRimDevChangeCallback.c)
 *     RIMDeviceClassNotify @ 0x1C0052EC0 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C0053548 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0053E80 (RIMDirectStartStopDeviceRead.c)
 *     rimIssueReads @ 0x1C0054368 (rimIssueReads.c)
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0055C40 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMRemoveDevOfInputType @ 0x1C00A644C (RIMRemoveDevOfInputType.c)
 *     RIMSetDeviceInputMode @ 0x1C00ACD80 (RIMSetDeviceInputMode.c)
 *     RIMOpenDev @ 0x1C00AD020 (RIMOpenDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00B4438 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0155C30 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     RIMIsInputSuppressed @ 0x1C01664D0 (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C016C3E0 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174D2C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0175A18 (rimProcessInput.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01820FC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0182288 (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x1000) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
    return 0LL;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
  if ( v5 == 7 )
    return 8LL;
  if ( (unsigned int)(v5 - 5) <= 1 )
    return 4LL;
  if ( (unsigned int)(v5 - 1) > 3 )
    return 0LL;
  return 16LL;
}
