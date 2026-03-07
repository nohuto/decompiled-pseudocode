__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int Caret; // ebx
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v11, a2, a3, a4);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit(v9);
  return Caret;
}
