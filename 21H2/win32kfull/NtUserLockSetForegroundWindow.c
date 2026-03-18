/*
 * XREFs of NtUserLockSetForegroundWindow @ 0x1C01F8D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01CE668 (-_LockSetForegroundWindow@@YAHI@Z.c)
 */

__int64 __fastcall NtUserLockSetForegroundWindow(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)_LockSetForegroundWindow(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
