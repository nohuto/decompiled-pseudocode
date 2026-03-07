__int64 __fastcall NtUserThreadMessageQueueAttached(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v7; // rax

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( gptiCurrent )
  {
    *(_DWORD *)(gptiCurrent + 1272LL) &= ~0x200u;
    if ( a1 )
    {
      v7 = PtiFromThreadId(a1);
      if ( v7 )
      {
        v2 = *(_QWORD *)(v7 + 432);
        LOBYTE(v3) = *(_QWORD *)(gptiCurrent + 432LL) == v2;
      }
      else
      {
        UserSetLastError(87);
      }
    }
    else
    {
      v4 = *(_QWORD *)(gptiCurrent + 432LL);
      v5 = 0;
      v2 = *(_QWORD *)(v4 + 480);
      if ( v2 && (v5 = 1, *(_QWORD *)(v2 + 1528))
        || (v2 = *(_QWORD *)(v4 + 488)) != 0 && ((unsigned int)(v5 + 1) > 1 || *(_QWORD *)(v2 + 1536)) )
      {
        v3 = 1LL;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
