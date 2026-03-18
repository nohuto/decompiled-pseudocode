/*
 * XREFs of UserGetLastError @ 0x1C0113B5C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     NtUserSetCursorPos @ 0x1C009BCC0 (NtUserSetCursorPos.c)
 *     NtUserOpenClipboard @ 0x1C00CCB80 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C00CCF00 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C0145ED0 (NtUserSetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C014AAF0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
