/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00694C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C007EA40 (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C01200F0 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020AA90 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020BEC4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C021D188 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, const struct tagDESKTOP *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 40) )
    return ((unsigned int)a2 & *((_DWORD *)this + 82) & 0x1FF) != 0;
  return v2;
}
