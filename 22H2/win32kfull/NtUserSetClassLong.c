/*
 * XREFs of NtUserSetClassLong @ 0x1C01DAAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C01BE4C0 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  struct tagWND *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  v14 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v8;
    HMLockObject(v8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13);
    else
      v13 = (unsigned int)xxxSetClassLong(v14, a2, a3, a4);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
