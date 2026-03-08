/*
 * XREFs of ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00FEFB0
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC600 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0228E58 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00FF0A0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::AddPendingRecalcWork(CRecalcProp *this, struct CRecalcState *a2)
{
  struct CRecalcState *v2; // rdi

  v2 = a2;
  if ( *((_DWORD *)this + 6) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1693LL);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1694LL);
  if ( *((_QWORD *)v2 + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1695LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      23,
      57,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_DWORD *)(*((_QWORD *)v2 + 2) + 4LL),
      **((_QWORD **)this + 2));
  *((_QWORD *)this + 4) = v2;
  *((_DWORD *)this + 6) = 1;
}
