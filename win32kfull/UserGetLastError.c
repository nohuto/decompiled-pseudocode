/*
 * XREFs of UserGetLastError @ 0x1C0015748
 * Callers:
 *     NtUserCloseClipboard @ 0x1C0010170 (NtUserCloseClipboard.c)
 *     NtUserOpenClipboard @ 0x1C0010250 (NtUserOpenClipboard.c)
 *     NtUserSendInput @ 0x1C0016F20 (NtUserSendInput.c)
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserGetClipboardData @ 0x1C01D13A0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x1C01D65E0 (NtUserInjectTouchInput.c)
 *     NtUserSetClipboardData @ 0x1C01DBC50 (NtUserSetClipboardData.c)
 *     NtUserSetCursorPos @ 0x1C01DC530 (NtUserSetCursorPos.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
