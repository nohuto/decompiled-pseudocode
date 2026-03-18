/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01EA284 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021DDD8 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AE74C (_anonymous_namespace_--EligibleWindow.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

char __fastcall ShellWindowManagement::WindowSubjectToBehavior(ShellWindowManagement **this, const struct tagWND *a2)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r9
  struct tagWND *v5; // r10

  result = ShellWindowManagement::BehaviorEnabled(this[3], a2);
  if ( result )
    return anonymous_namespace_::EligibleWindow(v5, (v4 & 0xC) == 0 || (*(_DWORD *)(v3 + 336) & 0x10000000) == 0);
  return result;
}
