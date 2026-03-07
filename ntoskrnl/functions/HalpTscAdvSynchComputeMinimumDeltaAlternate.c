__int64 __fastcall HalpTscAdvSynchComputeMinimumDeltaAlternate(unsigned __int64 *a1, __int64 *a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r10
  unsigned int i; // r9d
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v2 = HalpTscRequestedIterations;
  v3 = 0LL;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  for ( i = 0; i < v2; ++i )
  {
    v6 = v3;
    do
    {
      _mm_pause();
      v3 = *a2;
    }
    while ( *a2 == v6 );
    v7 = __readcr2();
    __writecr2(v7);
    v8 = __rdtsc();
    *a1 = v8;
    if ( i >= 2 )
    {
      v9 = v8 - v3;
      if ( v9 < v4 )
        v4 = v9;
    }
  }
  return v4;
}
