/*
 * XREFs of MiIsPteEvaluated @ 0x14033A25C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140339F98 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1405558B0 (MiGetClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r8

  v2 = a2;
  v3 = MI_READ_PTE_LOCK_FREE(a1);
  return v3 && ((v3 & 1) != 0 || (v3 & 0x400) == 0 || !MiIsPrototypePteVadLookup(v3) || ((v5 >> 5) & 0x1F) != v2);
}
