/*
 * XREFs of ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B1C4
 * Callers:
 *     ?OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z @ 0x1C0082214 (-OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01DBF00 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 */

void __fastcall CRecalcProp::s_PostRecalcForWindow(struct tagWND *a1)
{
  char v2; // bl
  bool v3; // dl
  bool v4; // r8
  int v5; // r8d
  int v6; // r9d
  int v7; // edx

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      50,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      *((_QWORD *)a1 + 2),
      *(_QWORD *)a1);
  if ( !PostEventMessageWindow((struct tagTHREADINFO **)a1, 0x16u, 0LL, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 51;
      LOBYTE(v7) = v2;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v5,
        v6,
        2,
        23,
        51,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        *(_QWORD *)a1);
    }
  }
}
