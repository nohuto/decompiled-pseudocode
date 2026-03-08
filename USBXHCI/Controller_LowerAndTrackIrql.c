/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x1C00074BC
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
 *     Interrupter_AcquireEventRingLock @ 0x1C000F4FC (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000F750 (Interrupter_WdfEvtInterruptDisable.c)
 *     Bulk_EP_StartMapping @ 0x1C0011CB0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0011E20 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Control_EP_StartMapping @ 0x1C0013470 (Control_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0013980 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
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
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C0034770 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Controller_LowerAndTrackIrql(_QWORD *a1)
{
  __int64 CurrentProcessorNumber; // rsi
  int v3; // edx
  __int64 v4; // rax
  int v5; // edx
  KIRQL v6; // cl
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  KIRQL CurrentIrql; // al
  int v10; // edx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int BugCheckParameter4; // [rsp+20h] [rbp-28h]

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( (unsigned int)CurrentProcessorNumber >= *((_DWORD *)a1 + 218) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v3,
          4,
          318,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[108];
    v5 = 0;
    v6 = *(_BYTE *)(v4 + 2 * CurrentProcessorNumber + 1);
    if ( !*(_BYTE *)(v4 + 2 * CurrentProcessorNumber) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v5,
          4,
          319,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v4 + 2 * CurrentProcessorNumber) = 0;
    *(_BYTE *)(a1[108] + 2 * CurrentProcessorNumber + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1[9], v10, 4, 320, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, CurrentIrql);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          v12,
          v13,
          BugCheckParameter4,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          237,
          (__int64)"Expected to be called at DISPATCH_LEVEL.");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError((_DWORD)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
