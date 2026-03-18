/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0005120 (rimSignalReadComplete.c)
 *     HandleDeferredInput @ 0x1C00074D0 (HandleDeferredInput.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0058BF4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     rimDereferenceDev @ 0x1C0072404 (rimDereferenceDev.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     EtwTraceUIPIInputError @ 0x1C0074560 (EtwTraceUIPIInputError.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0075170 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00E21C0 (rimInputApc.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01498B0 (NtUserMapPointsByVisualIdentifier.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0199D68 (RIMGetPnpActionBitsFromGuid.c)
 *     rimObsAddInputObserver @ 0x1C01ACCEC (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C01ADB14 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 8LL, va1);
  }
  return result;
}
