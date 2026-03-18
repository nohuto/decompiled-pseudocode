/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C0159280
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     ApiSetEditionAreAllAccessGranted @ 0x1C00DCFC4 (ApiSetEditionAreAllAccessGranted.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rcx
  PVOID *CurrentProcessWin32Process; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx

  EnterSharedCrit();
  CurrentProcessWin32Process = (PVOID *)PsGetCurrentProcessWin32Process(v0);
  v5 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v6 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v9 = 0,
        (unsigned int)ApiSetEditionAreAllAccessGranted(*(_DWORD *)(v6 + 680), v7, v8)) )
  {
    v9 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit((__int64)v5, v2, v3, v4);
  return v9;
}
