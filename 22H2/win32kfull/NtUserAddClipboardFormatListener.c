/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C0018630
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( !v2 )
    goto LABEL_11;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = v3 & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) != v5 )
  {
    v7 = 5LL;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v8 + 320) & 0x800000) != 0 )
  {
    v12 = 87LL;
LABEL_15:
    UserSetLastError(v12);
    goto LABEL_11;
  }
  v3 = (__int64)CheckClipboardAccess();
  if ( !v3 )
    goto LABEL_11;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) + 656LL) != v3 )
  {
    UserSetLastError(87LL);
    v12 = 0LL;
    goto LABEL_15;
  }
  v10 = v3 + 152;
  if ( *(_QWORD *)(v3 + 152) )
  {
    v14 = *(_QWORD *)(v3 + 152);
    v13 = v8 + 240;
    HMAssignmentLock(&v13, 0LL);
  }
  v13 = v10;
  v14 = v8;
  HMAssignmentLock(&v13, 0LL);
  *(_DWORD *)(v8 + 320) |= 0x800000u;
  v7 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
