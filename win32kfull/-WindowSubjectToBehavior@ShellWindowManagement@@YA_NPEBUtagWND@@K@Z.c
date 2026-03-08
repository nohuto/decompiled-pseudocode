/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C0220C70
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01EB434 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0203380 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0097B28 (_anonymous_namespace_--EligibleWindow.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

bool __fastcall ShellWindowManagement::WindowSubjectToBehavior(ShellWindowManagement **this, const struct tagWND *a2)
{
  bool result; // al
  __int64 v3; // rcx
  char v4; // r9
  struct tagWND *v5; // r10

  result = ShellWindowManagement::BehaviorEnabled(this[3], a2);
  if ( result )
    return anonymous_namespace_::EligibleWindow(v5, (v4 & 0xC) == 0 || (*(_DWORD *)(v3 + 328) & 0x10000000) == 0);
  return result;
}
