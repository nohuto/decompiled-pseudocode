/*
 * XREFs of ?CitpDPBucketToHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C01FD694
 * Callers:
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01FD2E4 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 * Callees:
 *     ?CitpDPSampleBitWithProbability@@YAEN@Z @ 0x1C01FDF6C (-CitpDPSampleBitWithProbability@@YAEN@Z.c)
 */

__int64 __fastcall CitpDPBucketToHistogram(const struct _CIT_DP_CALC_CONTEXT *a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  int v4; // edx

  v1 = 0;
  for ( i = 0; i < 0x1F; ++i )
  {
    v4 = CitpDPSampleBitWithProbability((double)(i == 31) * 0.5 * *((double *)a1 + 5) + *((double *)a1 + 4)) << i;
    v1 |= v4;
  }
  return v1;
}
