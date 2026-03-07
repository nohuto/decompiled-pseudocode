__int64 __fastcall ThreadLockExchangeWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObjectWorker(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
