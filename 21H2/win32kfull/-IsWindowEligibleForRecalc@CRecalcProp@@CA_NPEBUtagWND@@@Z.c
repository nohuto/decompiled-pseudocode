/*
 * XREFs of ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

char __fastcall CRecalcProp::IsWindowEligibleForRecalc(const struct tagWND *a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  __int64 v3; // r9
  PDEVICE_OBJECT v4; // rcx
  int v5; // r9d

  if ( !IsTopLevelWindow((__int64)a1) )
  {
    v4 = WPP_GLOBAL_Control;
    LOBYTE(v2) = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v1) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v2) = 0;
    if ( !(_BYTE)v1 && !(_BYTE)v2 )
      return 0;
    v5 = 52;
    goto LABEL_36;
  }
  if ( *(char *)(*(_QWORD *)(v3 + 40) + 24LL) < 0 )
  {
    v4 = WPP_GLOBAL_Control;
    LOBYTE(v2) = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v1) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v2) = 0;
    if ( !(_BYTE)v1 && !(_BYTE)v2 )
      return 0;
    v5 = 53;
    goto LABEL_36;
  }
  LOBYTE(v2) = 1;
  v1 = *(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
  if ( *(_WORD *)v1 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v1 + 10) & 1) == 0 )
    return 1;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v1) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v2) = 0;
  if ( (_BYTE)v1 || (_BYTE)v2 )
  {
    v5 = 54;
LABEL_36:
    WPP_RECORDER_AND_TRACE_SF_(
      v4->AttachedDevice,
      v1,
      v2,
      v5,
      5,
      23,
      v5,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  return 0;
}
