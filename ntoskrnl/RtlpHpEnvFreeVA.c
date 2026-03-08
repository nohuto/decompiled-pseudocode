/*
 * XREFs of RtlpHpEnvFreeVA @ 0x14020DD14
 * Callers:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1402F97BC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x14030C074 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpEnvAllocVA @ 0x140330480 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( a3 != 0x8000 )
    return MmFreePoolMemory();
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory();
  else
    return 0LL;
}
