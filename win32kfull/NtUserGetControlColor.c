__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, HWND a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 ControlColor; // rbx
  struct tagWND *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int128 v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v11 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v8;
    HMLockObject(v8);
    v14 = (__int64 *)ValidateHwnd(a2);
    if ( v14 && a3 && a4 - 306 <= 6 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v14;
      HMLockObject(v14);
      ControlColor = xxxGetControlColor(v11, v14, a3, a4);
      ThreadUnlock1(v17, v16, v18);
    }
    ThreadUnlock1(v13, v12, v15);
  }
  UserSessionSwitchLeaveCrit(v9);
  return ControlColor;
}
