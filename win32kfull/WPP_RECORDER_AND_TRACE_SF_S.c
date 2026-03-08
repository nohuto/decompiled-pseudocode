/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00113B0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00DB6BC (MasterInputThreadPrepareForRitTakeover.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00F7F74 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     ?ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ @ 0x1C00F916C (-ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C00F9240 (-ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C0220198 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C0220F00 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0229B90 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023D974 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_s(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]

  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v17,
      v16,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = v10 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(a4, a5, a6, a8, v18, v9, v14, 0LL);
  }
}
