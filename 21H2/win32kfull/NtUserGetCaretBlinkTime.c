/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C00F5C10
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00F5C8C (CheckGrantedAccess.c)
 */

__int64 __fastcall NtUserGetCaretBlinkTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterSharedCrit(a1, a2, a3);
  if ( *(_QWORD *)PsGetCurrentProcessWin32Process(v3) == gpepCSRSS
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v6 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 680), 2LL)) )
  {
    v5 = gpsi;
    v6 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
