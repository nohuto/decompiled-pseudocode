__int64 __fastcall CHolographicExclusiveMode::SetProperty(__int64 a1, int a2, int a3, int *a4)
{
  int v5; // xmm6_4
  RTL_SRWLOCK *v6; // rbx

  if ( a3 == 18 )
  {
    v5 = *a4;
    if ( a2 == 1 )
    {
      v6 = (RTL_SRWLOCK *)(a1 + 80);
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
      *(_DWORD *)(a1 + 100) = v5;
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
  }
  return 0LL;
}
