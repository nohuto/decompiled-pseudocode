/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01DB770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v6;
    HMLockObject(v6);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v16 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v16 = v15 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) == v16 )
    {
      v17 = *(_QWORD *)(v12 + 40);
      v11 = 1LL;
      *(_WORD *)(v17 + 304) = a3 & a2 & 3 | *(_WORD *)(v17 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v17, v15, v16);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
