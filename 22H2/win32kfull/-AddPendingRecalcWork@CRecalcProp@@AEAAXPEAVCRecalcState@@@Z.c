/*
 * XREFs of ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00C34F4
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0226160 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00C35E0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::AddPendingRecalcWork(CRecalcProp *this, struct CRecalcState *a2)
{
  struct CRecalcState *v2; // rdi

  v2 = a2;
  if ( *((_DWORD *)this + 6) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1689LL);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1690LL);
  if ( *((_QWORD *)v2 + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1691LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      7,
      57,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_DWORD *)(*((_QWORD *)v2 + 2) + 4LL),
      **((_QWORD **)this + 2));
  *((_QWORD *)this + 4) = v2;
  *((_DWORD *)this + 6) = 1;
}
