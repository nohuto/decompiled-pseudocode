/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140305554
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x140220834 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140220A28 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140220E60 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrAlloc @ 0x1402213C4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x140315C7C (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapCleanup @ 0x14038CDF0 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( (_DWORD)a3 != 0x8000 )
    return MmFreePoolMemory(a1, a2, a3);
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory(a1, a2, a3);
  else
    return 0LL;
}
