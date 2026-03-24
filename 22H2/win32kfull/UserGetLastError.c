/*
 * XREFs of UserGetLastError @ 0x1C012CCF8
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00131C0 (NtUserSetCursorPos.c)
 *     xxxLoadHmodIndex @ 0x1C00205DC (xxxLoadHmodIndex.c)
 *     NtUserGetClipboardData @ 0x1C002CAD0 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x1C002ECB0 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C002F9F0 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C002FCF0 (NtUserCloseClipboard.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00C00F0 (NtUserSendInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FD7E0 (NtUserInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetLastError(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
