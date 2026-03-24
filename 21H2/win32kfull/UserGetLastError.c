/*
 * XREFs of UserGetLastError @ 0x1C012D0A8
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00131C0 (NtUserSetCursorPos.c)
 *     xxxLoadHmodIndex @ 0x1C002067C (xxxLoadHmodIndex.c)
 *     NtUserGetClipboardData @ 0x1C002CB70 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x1C002ED50 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C002FA90 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C002FD90 (NtUserCloseClipboard.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00C0450 (NtUserSendInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FDDA0 (NtUserInjectTouchInput.c)
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
