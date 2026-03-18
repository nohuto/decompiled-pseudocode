/*
 * XREFs of RestoreMonitorsAndWindowsRects @ 0x1C01D2C24
 * Callers:
 *     RestoreDesktopsMonitorsAndWindowsRects @ 0x1C0153530 (RestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C007F814 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     ?RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z @ 0x1C01D24AC (-RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 */

__int64 __fastcall RestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  char v6; // al
  int v7; // edx
  int v8; // r8d
  char v9; // bl
  char v10; // r10
  __int64 i; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // r9d
  struct tagWND *v15; // r10
  int v16; // edx
  bool v18; // bl
  bool v19; // bl
  __int64 v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+90h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 || !*(_QWORD *)(a1 + 24) )
  {
    v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v19;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        a4,
        2,
        23,
        22,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
    return 3221225473LL;
  }
  v6 = CMonitorTopology::CompareToCurrent(v5, a2, a3);
  if ( (v6 & 7) != 0 )
  {
    v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = v18;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        23,
        23,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
        v6);
    }
    return 3221225473LL;
  }
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dqd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      0x17u,
      0x18u,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
  v21 = 0;
  for ( i = *(_QWORD *)(a1 + 24); v21 < *(_DWORD *)(a1 + 32); ++v21 )
  {
    v12 = HMValidateHandleNoSecure(*(_QWORD *)(i + 40), 1);
    LOBYTE(v15) = v12;
    if ( v12
      && *(char *)(*(_QWORD *)(v12 + 40) + 24LL) >= 0
      && IsNonImmersiveBand(v12)
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) + 820LL) & 0x30) != 0x10 )
    {
      CRecalcProp::CreateFromRDPSnapshot(
        v15,
        *(struct CMonitorTopology **)(a1 + 16),
        (const struct tagRECT *)i,
        (const struct tagRECT *)((i + 16) & -(__int64)((*(_DWORD *)(i + 32) & 1) != 0)));
    }
    else
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v8,
          v14,
          4,
          23,
          25,
          (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
          (char)v15);
      }
    }
    i += 48LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 26;
    LOBYTE(v16) = v9;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v8,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      26,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL));
  }
  InputTraceLogging::DesktopRecalc::RestoreMonitorAndWindowSnapshot(
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL),
    *(struct tagDESKTOP **)(a1 + 40));
  return 0LL;
}
