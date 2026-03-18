/*
 * XREFs of ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C010DEDC
 * Callers:
 *     ?s_GetRestoreRect@CRecalcState@@CA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C010DE70 (-s_GetRestoreRect@CRecalcState@@CA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600 (--0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall AdvancedWindowPos::GetWindowState(const struct tagWND *a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v1 & 0x20) != 0 )
    return 2LL;
  result = 1LL;
  if ( (v1 & 1) == 0 )
    return IsSemiMaximized(a1) ? 3 : 0;
  return result;
}
