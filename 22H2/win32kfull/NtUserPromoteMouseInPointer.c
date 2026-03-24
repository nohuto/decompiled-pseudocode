/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C0200110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00C1220 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  _DWORD *v4; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( IsMiPEnabledForThread(gptiCurrent) && (v4 = *(_DWORD **)(v1 + 1280)) != 0LL )
  {
    *v4 |= 2u;
    v3 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v0, v2);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v3;
}
