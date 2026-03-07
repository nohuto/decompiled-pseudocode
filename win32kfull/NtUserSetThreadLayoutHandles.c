__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( !v8 || *(_QWORD *)(v8 + 40) == a2 )
  {
    v9 = HKLtoPKL(gptiCurrent, a1, v5, v6);
    if ( v9 )
    {
      LOBYTE(v7) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v7 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *(_QWORD *)(gptiCurrent + 800LL) = a2;
      v11[1] = v9;
      v11[0] = gptiCurrent + 440LL;
      HMAssignmentLock(v11, 0LL);
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
