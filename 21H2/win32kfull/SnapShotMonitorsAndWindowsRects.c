/*
 * XREFs of SnapShotMonitorsAndWindowsRects @ 0x1C01D3060
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D2FA8 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z @ 0x1C01D2638 (-SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z.c)
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D2B30 (CleanMonitorsAndWindowsSnapshot.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqdd @ 0x1C01D366C (WPP_RECORDER_AND_TRACE_SF_dqdd.c)
 */

__int64 __fastcall SnapShotMonitorsAndWindowsRects(struct tagDESKTOP *a1, __int64 a2)
{
  __int64 Current; // rax
  int v5; // edx
  int v6; // r8d
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d

  if ( *(_OWORD *)(a2 + 16) != 0LL )
    CleanMonitorsAndWindowsSnapshot(a2);
  Current = CTopologyManager::GetCurrent();
  *(_QWORD *)(a2 + 16) = Current;
  if ( !Current )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        27,
        2,
        23,
        27,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
    return 3221225495LL;
  }
  v8 = SnapshotWindowRects(a1, a2 + 32);
  *(_QWORD *)(a2 + 24) = v8;
  if ( !v8 )
  {
    CleanMonitorsAndWindowsSnapshot(a2);
    return 3221225495LL;
  }
  *(_QWORD *)(a2 + 40) = a1;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dqdd(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_MAIN_CB.Queue.ListEntry.Flink);
    a1 = *(struct tagDESKTOP **)(a2 + 40);
  }
  InputTraceLogging::DesktopRecalc::SaveMonitorAndWindowSnapshot(*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL), a1);
  return 0LL;
}
