/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C003B230
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C0009CE0 (NtUserGetCursorInfo.c)
 *     NtUserLockWorkStation @ 0x1C0016DB0 (NtUserLockWorkStation.c)
 *     CheckCursorClipAccess @ 0x1C0022250 (CheckCursorClipAccess.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003A6CC (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _SetDoubleClickTime @ 0x1C00F9C04 (_SetDoubleClickTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     _SetCaretBlinkTime @ 0x1C010C2C0 (_SetCaretBlinkTime.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A9CBC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01AA0E4 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01DFDC0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(v3 + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(v3 + 672), v1) )
      return 1LL;
    v5 = 5LL;
  }
  else
  {
    v5 = 1459LL;
  }
  UserSetLastError(v5);
  return 0LL;
}
