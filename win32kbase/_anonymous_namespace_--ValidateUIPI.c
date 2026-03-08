/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0217680 (CheckIntegrityAccessToCapture.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0231734 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     CheckAccessEx @ 0x1C0016FB0 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C003A560 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2)
{
  __int64 PtiFromInputDest; // rax
  struct tagTHREADINFO *v4; // rdi
  bool v6; // si
  char v7; // bl
  int v8; // r8d
  int v9; // edx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h]

  v10 = a1;
  if ( !*a2 )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 202);
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2);
  v4 = (struct tagTHREADINFO *)PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v6 = CheckAccessEx((int *)&v10, (unsigned int *)(*(_QWORD *)(PtiFromInputDest + 424) + 864LL), 0LL);
  if ( !v6 )
  {
    v7 = 1;
    EtwTraceUIPIInputError(gptiCurrent, v4, *((_QWORD *)v4 + 54), *(_QWORD *)(*((_QWORD *)v4 + 54) + 432LL), 1);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 10;
      LOBYTE(v9) = v7;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        10,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
  }
  return v6;
}
