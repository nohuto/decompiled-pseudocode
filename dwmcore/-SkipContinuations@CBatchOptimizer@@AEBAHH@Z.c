/*
 * XREFs of ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180013454
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E300 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBatchOptimizer::SkipContinuations(CBatchOptimizer *this, unsigned int a2)
{
  int *i; // r9

  for ( i = (int *)((char *)this + 4 * (int)a2 + 48); *((_DWORD *)this + 130 * *i + 26); ++a2 )
    ++i;
  return a2;
}
