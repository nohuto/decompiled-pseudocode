/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C01330D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagWINDOWSTATION *v9; // rdx
  __int64 v10; // r8
  char *v11; // rsi
  __int64 v13; // rcx
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v3 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3 + 424) != CurrentProcessWin32Process )
  {
    v4 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 232LL) & 1) != 0 )
  {
    v13 = 87LL;
LABEL_13:
    UserSetLastError(v13, v7, v8);
    goto LABEL_9;
  }
  v9 = CheckClipboardAccess();
  if ( !v9 )
    goto LABEL_9;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 664LL) != v9 )
  {
    UserSetLastError(87LL, (__int64)v9, v10);
    v13 = 0LL;
    goto LABEL_13;
  }
  v11 = (char *)v9 + 152;
  if ( *((_QWORD *)v9 + 19) )
  {
    v15 = *((_QWORD *)v9 + 19);
    v14 = (char *)(v5 + 240);
    HMAssignmentLock(&v14);
  }
  v14 = v11;
  v15 = v5;
  HMAssignmentLock(&v14);
  v4 = 1LL;
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 232LL) |= 1u;
LABEL_9:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
