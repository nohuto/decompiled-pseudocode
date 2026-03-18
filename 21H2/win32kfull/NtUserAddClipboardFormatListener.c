/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C00C9D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  struct tagWINDOWSTATION *v8; // rdx
  char *v9; // rsi
  __int64 v11; // rcx
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
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
  if ( (*(_DWORD *)(v5 + 320) & 0x800000) != 0 )
  {
    v11 = 87LL;
LABEL_13:
    UserSetLastError(v11, v7);
    goto LABEL_9;
  }
  v8 = CheckClipboardAccess();
  if ( !v8 )
    goto LABEL_9;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 664LL) != v8 )
  {
    UserSetLastError(87LL, (__int64)v8);
    v11 = 0LL;
    goto LABEL_13;
  }
  v9 = (char *)v8 + 152;
  if ( *((_QWORD *)v8 + 19) )
  {
    v13 = *((_QWORD *)v8 + 19);
    v12 = (char *)(v5 + 240);
    HMAssignmentLock(&v12, 0LL);
  }
  v12 = v9;
  v13 = v5;
  HMAssignmentLock(&v12, 0LL);
  *(_DWORD *)(v5 + 320) |= 0x800000u;
  v4 = 1LL;
LABEL_9:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
