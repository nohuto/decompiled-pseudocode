/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0025580 (NtUserSetWindowPos.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00F4C7C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020AA90 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C021D188 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C006A184 (_anonymous_namespace_--EligibleWindow.c)
 */

bool __fastcall ShellWindowManagement::WindowSubjectToBehavior(
        ShellWindowManagement **this,
        const struct tagWND *a2,
        unsigned int a3)
{
  struct tagWND *v3; // r9

  if ( ShellWindowManagement::BehaviorEnabled(this[3], a2, a3) )
    return anonymous_namespace_::EligibleWindow(v3);
  else
    return 0;
}
