/*
 * XREFs of NtUserSetWindowLong @ 0x1C00C9C10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLong @ 0x1C00C9D14 (xxxSetWindowLong.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DesktopVerifyHeapRange @ 0x1C01BE8D8 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct tagWND *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v10 + 3), *((_QWORD *)v10 + 5), 328LL);
    }
    v9 = xxxSetWindowLong(v10, 1);
LABEL_4:
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
