/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C00ADF68
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0040034 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C004CDB0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C009F078 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01AE3D0 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C16DC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1C0007E30 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C0044418 (CheckAccessEx.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00457FC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2)
{
  __int64 PtiFromInputDest; // rax
  __int64 v4; // rbx
  bool v5; // di
  int v7; // edx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h]

  v8 = a1;
  if ( !*a2 )
  {
    v9 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 201LL);
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2);
  v4 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v5 = CheckAccessEx((int *)&v8, (int *)(*(_QWORD *)(PtiFromInputDest + 424) + 880LL), 0);
  if ( !v5 )
  {
    EtwTraceUIPIInputError(
      gptiCurrent,
      (struct tagTHREADINFO *)v4,
      *(_QWORD *)(v4 + 432),
      *(_QWORD *)(*(_QWORD *)(v4 + 432) + 428LL),
      1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        10,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
  }
  return v5;
}
