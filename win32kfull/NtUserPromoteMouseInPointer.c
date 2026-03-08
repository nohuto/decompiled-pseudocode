/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01D9B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00D7F08 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  _DWORD *v2; // rax

  EnterCrit(0LL, 0LL);
  v1 = 0LL;
  if ( IsMiPEnabledForThread(gptiCurrent) && (v2 = *(_DWORD **)(v0 + 1352)) != 0LL )
  {
    *v2 |= 2u;
    v1 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
