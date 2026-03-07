// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetFallbackForeground(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 24) + 288LL;
    v5[1] = a1;
    v5[0] = v3;
    HMAssignmentLock(v5, 0LL);
  }
  else
  {
    HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 456LL) + 288LL);
  }
  result = 1LL;
  if ( a2 != 1 )
    gpqForegroundPrev = 0LL;
  return result;
}
