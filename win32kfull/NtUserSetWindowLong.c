__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v4;
    HMLockObject(v4);
    if ( (unsigned int)PsGetWin32KFilterSet(v8) == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v7 + 3), *((_QWORD *)v7 + 5), 328LL);
    }
    v6 = xxxSetWindowLong(v7, 1);
LABEL_4:
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
