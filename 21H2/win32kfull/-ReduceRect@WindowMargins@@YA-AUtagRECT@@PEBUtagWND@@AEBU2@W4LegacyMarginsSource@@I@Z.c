/*
 * XREFs of ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C016DF68 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     EditionTransformIvTouchInput @ 0x1C01EFEC0 (EditionTransformIvTouchInput.c)
 *     EditionTransformPointForIvSpatialInput @ 0x1C01EFFA0 (EditionTransformPointForIvSpatialInput.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C020B480 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C024AA70 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

_DWORD *__fastcall WindowMargins::ReduceRect(_DWORD *a1, struct tagWND *a2, _DWORD *a3)
{
  __int64 WindowMargins; // rax
  int v6; // edx
  _DWORD *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(a2);
  *a1 = *a3 + (__int16)WindowMargins;
  v6 = a3[2] - SWORD1(WindowMargins);
  a1[1] = a3[1] + SWORD2(WindowMargins);
  a1[3] = a3[3] - SHIWORD(WindowMargins);
  result = a1;
  a1[2] = v6;
  return result;
}
