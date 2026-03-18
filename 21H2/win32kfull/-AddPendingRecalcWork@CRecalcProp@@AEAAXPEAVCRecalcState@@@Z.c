/*
 * XREFs of ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C011083C
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x1C023AF98 (-ReattachRecalcState@CRecalcProp@@AEAAXPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

void __fastcall CRecalcProp::AddPendingRecalcWork(CRecalcProp *this, struct CRecalcState *a2)
{
  struct CRecalcState *v2; // r9
  char v3; // r8

  v2 = a2;
  *((_QWORD *)this + 3) = a2;
  v3 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( (_BYTE)a2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      42,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      *(_DWORD *)(*((_QWORD *)v2 + 4) + 4LL));
}
