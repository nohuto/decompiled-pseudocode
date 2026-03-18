/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140212200
 * Callers:
 *     RtlpHpVaMgrRangeFree @ 0x140210990 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140210A8C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpFreeVA @ 0x140212178 (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x140286500 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrAlloc @ 0x14030FCEC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403649D8 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140212244 (MmFreePoolMemory.c)
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
