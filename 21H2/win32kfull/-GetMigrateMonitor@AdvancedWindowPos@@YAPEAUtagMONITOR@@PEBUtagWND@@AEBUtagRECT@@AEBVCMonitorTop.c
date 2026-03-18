/*
 * XREFs of ?GetMigrateMonitor@AdvancedWindowPos@@YAPEAUtagMONITOR@@PEBUtagWND@@AEBUtagRECT@@AEBVCMonitorTopology@@PEA_N@Z @ 0x1C00B0174
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14 (-xxxMigrate@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 */

struct tagMONITOR *__fastcall AdvancedWindowPos::GetMigrateMonitor(
        AdvancedWindowPos *this,
        const struct tagWND *a2,
        const struct tagRECT *a3,
        const struct CMonitorTopology *a4)
{
  unsigned int PreviousMonitorIndex; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  struct tagMONITOR *MonitorFromId; // rdi
  int v11; // r8d
  bool v13; // bl
  int v14; // edx
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF

  v15 = *(_OWORD *)a2;
  PreviousMonitorIndex = anonymous_namespace_::FindPreviousMonitorIndex(this, &v15);
  if ( PreviousMonitorIndex == -1 )
  {
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 49;
      LOBYTE(v14) = v13;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v7,
        v8,
        4,
        25,
        49,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    return 0LL;
  }
  else
  {
    MonitorFromId = CMonitorTopology::GetMonitorFromId((const struct CMonitorTopology::MonitorId *)(&a3[3].bottom
                                                                                                  + 18 * PreviousMonitorIndex));
    if ( !MonitorFromId )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v11,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          25,
          50,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      }
      *(_BYTE *)a4 = 1;
    }
    return MonitorFromId;
  }
}
