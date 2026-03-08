/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C00BD690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  struct tagWINDOWSTATION *v8; // rdx
  char *v9; // rsi
  int v11; // ecx
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( !v2 )
    goto LABEL_11;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) != v7 )
  {
    v4 = 5LL;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v5 + 320) & 0x800000) != 0 )
  {
    v11 = 87;
LABEL_15:
    UserSetLastError(v11);
    goto LABEL_11;
  }
  v8 = CheckClipboardAccess();
  if ( !v8 )
    goto LABEL_11;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 656LL) != v8 )
  {
    UserSetLastError(87);
    v11 = 0;
    goto LABEL_15;
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
LABEL_11:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
