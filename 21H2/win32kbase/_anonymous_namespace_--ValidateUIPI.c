/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0041C6C (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01E7820 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 PtiFromInputDest; // rax
  struct tagTHREADINFO *v5; // rdi
  char v6; // si
  char v8; // bl
  int v9; // r8d
  int v10; // edx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  v5 = (struct tagTHREADINFO *)PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v6 = CheckAccessEx(&v11, *(_QWORD *)(PtiFromInputDest + 424) + 880LL, 0LL);
  if ( !v6 )
  {
    v8 = 1;
    EtwTraceUIPIInputError(gptiCurrent, v5, 1);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 10;
      LOBYTE(v10) = v8;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        10,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
  }
  return v6;
}
