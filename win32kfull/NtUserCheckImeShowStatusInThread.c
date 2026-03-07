__int64 __fastcall NtUserCheckImeShowStatusInThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v4;
    HMLockObject(v4);
    v7 = gpsi;
    if ( (*gpsi & 4) != 0 && *(char *)(*(_QWORD *)(v4 + 40) + 20LL) >= 0 )
      xxxCheckImeShowStatus((struct tagWND *)v4, *(struct tagTHREADINFO **)(v4 + 16));
    ThreadUnlock1(v7, v5, v6);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
