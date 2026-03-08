/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EA0A0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_BoostOnDragSize__private_ReportDeviceUsage @ 0x1C012EB98 (Feature_BoostOnDragSize__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x1C01EBA3C (-ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct MOVESIZEDATA *a1)
{
  const struct tagWND *v1; // rdi
  int v2; // edx
  __int64 v4; // rsi
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // edx
  int v11; // r8d

  v1 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 50) & 0x10000000;
  v4 = *((_QWORD *)v1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x80000) != 0 )
  {
    if ( v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6043);
    if ( ShouldAdjustModernAppFramePriority(v1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          86,
          4,
          1,
          86,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      ForegroundBoost::SetForegroundPriority(v4, 1LL);
      *((_DWORD *)a1 + 50) |= 0x10000000u;
    }
    else if ( v4 == gptiForeground )
    {
      Feature_BoostOnDragSize__private_ReportDeviceUsage();
    }
  }
  else
  {
    if ( !v2 )
      return;
    if ( ShouldAdjustModernAppFramePriority(v1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          88,
          4,
          1,
          88,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      v9 = 0LL;
    }
    else
    {
      if ( v4 != gptiForeground )
        return;
      Feature_BoostOnDragSize__private_ReportDeviceUsage();
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6082);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          89,
          4,
          1,
          89,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      v9 = 1LL;
    }
    ForegroundBoost::SetForegroundPriority(v4, v9);
  }
}
