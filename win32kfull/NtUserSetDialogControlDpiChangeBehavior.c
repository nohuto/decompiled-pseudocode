/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01DC7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v13 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v12 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) == v13 )
    {
      v14 = *(_QWORD *)(v9 + 40);
      v8 = 1LL;
      *(_WORD *)(v14 + 304) = a3 & a2 & 3 | *(_WORD *)(v14 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v14, v12, v13);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
