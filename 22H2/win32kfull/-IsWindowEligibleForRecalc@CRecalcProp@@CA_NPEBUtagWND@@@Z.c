/*
 * XREFs of ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00C259C
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00C2890 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

char __fastcall CRecalcProp::IsWindowEligibleForRecalc(const struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD *v4; // r10
  PDEVICE_OBJECT v6; // r9
  __int16 v7; // cx

  if ( !(unsigned int)IsTopLevelWindow(a1) )
  {
    v6 = WPP_GLOBAL_Control;
    LOBYTE(v3) = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v1) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v3) = 0;
    if ( !(_BYTE)v1 && !(_BYTE)v3 )
      return 0;
    v7 = 63;
    goto LABEL_34;
  }
  if ( *(char *)(*(_QWORD *)(v2 + 40) + 24LL) < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    LOBYTE(v3) = 1;
    v7 = 64;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v1) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v3) = 0;
    if ( !(_BYTE)v1 && !(_BYTE)v3 )
      return 0;
    goto LABEL_34;
  }
  LOBYTE(v3) = 1;
  v1 = *(_QWORD *)(*(_QWORD *)(v2 + 136) + 8LL);
  if ( *(_WORD *)v1 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v1 + 10) & 1) == 0 )
    return 1;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v1) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v3) = 0;
  if ( (_BYTE)v1 || (_BYTE)v3 )
  {
    v7 = 65;
LABEL_34:
    WPP_RECORDER_AND_TRACE_SF_q(
      v6->AttachedDevice,
      v1,
      v3,
      (_DWORD)v6,
      5,
      7,
      v7,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *v4);
  }
  return 0;
}
