/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01FCF30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    HMLockObject(v6);
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v10) )
    {
      v13 = *(_QWORD *)(v9 + 40);
      v8 = 1LL;
      *(_WORD *)(v13 + 304) = a2 & 3 & a3 | *(_WORD *)(v13 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL, v11);
    }
    ThreadUnlock1(v13, v11, v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
