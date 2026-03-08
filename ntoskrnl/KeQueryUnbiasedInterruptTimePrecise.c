/*
 * XREFs of KeQueryUnbiasedInterruptTimePrecise @ 0x1402947D0
 * Callers:
 *     IoDiskIoAttributionQuery @ 0x1402946F0 (IoDiskIoAttributionQuery.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

ULONG64 __stdcall KeQueryUnbiasedInterruptTimePrecise(PULONG64 QpcTimeStamp)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]

  do
  {
    v2 = 0LL;
    v9 = MEMORY[0xFFFFF780000003B0];
    while ( 1 )
    {
      v3 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v4 = MEMORY[0xFFFFF78000000350];
        v5 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v3 )
          break;
      }
      _mm_pause();
    }
    *QpcTimeStamp = PerformanceCounter.QuadPart;
    if ( PerformanceCounter.QuadPart > v4 )
    {
      v7 = PerformanceCounter.QuadPart - v4 - 1;
      if ( MEMORY[0xFFFFF78000000369] )
        v7 <<= MEMORY[0xFFFFF78000000369];
      v2 = ((unsigned __int64)v7 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    }
  }
  while ( v9 != MEMORY[0xFFFFF780000003B0] );
  return v2 + v5 - v9;
}
