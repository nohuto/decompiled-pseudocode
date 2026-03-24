/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C00333F0
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0008C90 (NtUserLockWorkStation.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     NtUserGetCursorInfo @ 0x1C0032690 (NtUserGetCursorInfo.c)
 *     _RegisterHotKey @ 0x1C0032C74 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C0033230 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C00332C0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     CheckCursorClipAccess @ 0x1C003DCE0 (CheckCursorClipAccess.c)
 *     _SetDoubleClickTime @ 0x1C00DB5F0 (_SetDoubleClickTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D41AC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C02037A0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v4; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v1) )
      return 1LL;
    v4 = 5LL;
  }
  else
  {
    v4 = 1459LL;
  }
  UserSetLastError(v4);
  return 0LL;
}
