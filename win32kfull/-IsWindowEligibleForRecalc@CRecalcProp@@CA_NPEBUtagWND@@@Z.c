/*
 * XREFs of ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00FC7DC
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00FBF50 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC600 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

char __fastcall CRecalcProp::IsWindowEligibleForRecalc(const struct tagWND *a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r9
  char v3; // r8
  __int64 v4; // rdx
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  unsigned __int16 v8; // r10

  if ( !IsTopLevelWindow((__int64)a1) )
  {
    v6 = WPP_GLOBAL_Control;
    v3 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v7 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v3 = 0;
    if ( !v7 && !v3 )
      return 0;
    v8 = 63;
    goto LABEL_35;
  }
  if ( *(char *)(*(_QWORD *)(v1 + 40) + 24LL) < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    v3 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v7 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v3 = 0;
    if ( !v7 && !v3 )
      return 0;
    v8 = 64;
    goto LABEL_35;
  }
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL);
  if ( *(_WORD *)v4 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v4 + 10) & 1) == 0 )
    return 1;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v7 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v7 || v3 )
  {
    v8 = 65;
LABEL_35:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v6->AttachedDevice,
      v7,
      v3,
      (__int64)v2,
      5u,
      0x17u,
      v8,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *v2);
  }
  return 0;
}
