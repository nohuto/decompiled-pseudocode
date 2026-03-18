/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140366D64
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x14023CCE0 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14023D6AC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x14023D9B0 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14023DD4C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpEnvAllocVA @ 0x140352090 (RtlpHpEnvAllocVA.c)
 *     RtlpHpFreeVA @ 0x140363E50 (RtlpHpFreeVA.c)
 *     RtlCSparseBitmapCleanup @ 0x1403724D8 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
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
