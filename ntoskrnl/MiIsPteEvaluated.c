/*
 * XREFs of MiIsPteEvaluated @ 0x14029EA24
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14029E7B4 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsPteEvaluated(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned int v5; // r9d

  v2 = a2;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( result )
  {
    if ( (result & 1) == 0 && (result & 0x400) != 0 && (unsigned int)MiIsPrototypePteVadLookup(result) )
    {
      LOBYTE(v5) = ((v4 >> 5) & 0x1F) != v2;
      return v5;
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
