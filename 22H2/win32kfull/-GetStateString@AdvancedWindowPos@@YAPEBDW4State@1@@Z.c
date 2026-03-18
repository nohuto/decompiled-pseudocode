/*
 * XREFs of ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00C1C88 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C2DDC (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C02262DC (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0226E7C (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdvancedWindowPos::GetStateString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Maximized";
  v2 = v1 - 1;
  if ( !v2 )
    return "Minimized";
  if ( v2 == 1 )
    return "Arranged";
  return "Restored";
}
