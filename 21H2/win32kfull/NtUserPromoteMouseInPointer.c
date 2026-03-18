/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01FB410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00AD354 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  _DWORD *v3; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( IsMiPEnabledForThread(gptiCurrent) && (v3 = *(_DWORD **)(v1 + 1312)) != 0LL )
  {
    *v3 |= 2u;
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v0);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
