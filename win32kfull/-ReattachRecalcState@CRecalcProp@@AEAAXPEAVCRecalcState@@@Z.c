/*
 * XREFs of ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0228E58
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00FBF50 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00FEFB0 (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::ReattachRecalcState(CRecalcProp *this, struct CRecalcState *a2)
{
  char v4; // dl

  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2622);
  if ( *((_DWORD *)this + 6) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2623);
  if ( a2 != *((struct CRecalcState **)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2624);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2625);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x17u,
      0x51u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      **((_QWORD **)this + 2),
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL));
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_BYTE *)a2 + 60) = 1;
  CRecalcProp::AddPendingRecalcWork(this, a2);
}
