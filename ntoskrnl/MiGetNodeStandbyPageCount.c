/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1404648CA
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x14027DFA0 (MiCheckZeroFreeRebalance.c)
 *     MiFreeZeroPagesNeeded @ 0x140464858 (MiFreeZeroPagesNeeded.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x14065B810 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = (__int64 *)(704LL * a3 + 25408LL * a2 + *(_QWORD *)(a1 + 16) + 3256LL);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    v4 += 11;
    v3 += v6;
    --v5;
  }
  while ( v5 );
  return v3;
}
