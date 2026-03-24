/*
 * XREFs of ?CitpDPGetDurationBucket@@YAIII@Z @ 0x1C01FDD14
 * Callers:
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01FDDD8 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CitpDPGetDurationBucket(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // eax
  unsigned int v4; // r9d

  v2 = 0;
  v3 = a1 / (a2 / 0x18);
  if ( v3 )
  {
    if ( v3 >= 0x18 )
      v3 = 23;
    return v3 + 7;
  }
  else
  {
    v4 = a2 / 0xB40;
    do
    {
      if ( a1 < v4 )
        break;
      ++v2;
      v4 *= 2;
    }
    while ( v2 < 8 );
  }
  return v2;
}
