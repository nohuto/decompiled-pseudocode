/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C0103CB0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C0103D34 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)PsGetCurrentProcessWin32Process(v0) == gpepCSRSS
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v3 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 680), 2LL)) )
  {
    v2 = gpsi;
    v3 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
