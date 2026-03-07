__int64 __fastcall SetProgmanWindow(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // r8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(__int64 **)(gptiCurrent + 464LL);
  if ( a1 && v1[25] )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    v3 = *v1;
    if ( a1 )
      *(_QWORD *)(v3 + 40) = *(_QWORD *)(a1 + 48);
    else
      *(_QWORD *)(v3 + 40) = 0LL;
    v4[0] = v1 + 25;
    v4[1] = a1;
    HMAssignmentLock(v4, 0LL);
    return 1LL;
  }
}
