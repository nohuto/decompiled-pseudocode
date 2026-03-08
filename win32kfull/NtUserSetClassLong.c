/*
 * XREFs of NtUserSetClassLong @ 0x1C01DBAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C01BF660 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13);
    else
      v10 = (unsigned int)xxxSetClassLong(v11, a2, a3, a4);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
