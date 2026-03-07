__int64 __fastcall SafeLockWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 40);
    if ( *(char *)(v2 + 19) < 0 || *(char *)(v2 + 20) < 0 )
      a2 = 0LL;
  }
  v4[0] = a1;
  v4[1] = a2;
  return HMAssignmentLock(v4, 0LL);
}
