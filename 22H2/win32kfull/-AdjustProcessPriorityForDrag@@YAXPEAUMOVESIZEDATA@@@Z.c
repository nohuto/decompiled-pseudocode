/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E8FB0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x1C01EA88C (-ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct MOVESIZEDATA *a1)
{
  const struct tagWND *v1; // rdi
  int v2; // edx
  __int64 v4; // rbp
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d

  v1 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 50) & 0x10000000;
  v4 = *((_QWORD *)v1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x80000) != 0 )
  {
    if ( v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6036);
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
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
      }
      ForegroundBoost::SetForegroundPriority(v4, 1LL);
      *((_DWORD *)a1 + 50) |= 0x10000000u;
    }
  }
  else if ( v2 && ShouldAdjustModernAppFramePriority(v1) )
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
        87,
        4,
        1,
        87,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
    ForegroundBoost::SetForegroundPriority(v4, 0LL);
  }
}
