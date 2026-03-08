/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x1C0007558
 * Callers:
 *     Isoch_EP_StartMapping @ 0x1C0001C10 (Isoch_EP_StartMapping.c)
 *     Isoch_MapStage @ 0x1C0004810 (Isoch_MapStage.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Control_WdfEvtIoDefault @ 0x1C0005C60 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x1C0007318 (Control_Transfer_Map.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0007760 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C000F4C4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000F750 (Interrupter_WdfEvtInterruptDisable.c)
 *     Bulk_EP_StartMapping @ 0x1C0011CB0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0011E20 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Control_EP_StartMapping @ 0x1C0013470 (Control_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0013980 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FD74 (Command_HandleCommandRingStoppedEvent.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003E340 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0043460 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0045F40 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x1C00474C0 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x1C00513B0 (ESM_SmWorker.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0051FD8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0052050 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C00521B0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  char v2; // si
  int v3; // edx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  KIRQL v7; // bp
  ULONG CurrentProcessorNumber; // eax
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 316, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          v5,
          v6,
          v14,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          119,
          (__int64)"Not expected to be called at DISPATCH_LEVEL.");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalErrorEx(a1, 0, 4134, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v2 = 1;
    v7 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber < *(_DWORD *)(a1 + 872) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 2LL * CurrentProcessorNumber) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 2LL * CurrentProcessorNumber + 1) = v7;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v9,
          4,
          317,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            v15,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            147,
            (__int64)"Processor index out of range.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalErrorEx(a1, 0, 4135, 0, 0LL, 0LL, 0LL, 0LL);
      KeLowerIrql(v7);
      return 0;
    }
  }
  return v2;
}
