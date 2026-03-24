/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C0033350
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0008C90 (NtUserLockWorkStation.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     NtUserGetCursorInfo @ 0x1C00325F0 (NtUserGetCursorInfo.c)
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C0033190 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0033220 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     CheckCursorClipAccess @ 0x1C003DC40 (CheckCursorClipAccess.c)
 *     _SetDoubleClickTime @ 0x1C00DB2A0 (_SetDoubleClickTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D3BEC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C02031E0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
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
