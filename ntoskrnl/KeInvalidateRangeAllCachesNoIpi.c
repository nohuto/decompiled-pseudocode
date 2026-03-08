/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x1402149F0
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140214754 (MiFlushCacheForAttributeChange.c)
 *     HalpIommuMapLogicalRange @ 0x14037A478 (HalpIommuMapLogicalRange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037AC5C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x14037C398 (HalpIommuInitializeDmarPageTable.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 *     HalpIommuMapLogical @ 0x140524B74 (HalpIommuMapLogical.c)
 *     HalpIommuUnmapLogicalRange @ 0x140524F80 (HalpIommuUnmapLogicalRange.c)
 *     IvtInitializeIdentityMappings @ 0x14052ABF4 (IvtInitializeIdentityMappings.c)
 *     MiFlushGraphicsPtes @ 0x140623FF8 (MiFlushGraphicsPtes.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     KiFlushCacheLines @ 0x14041BC40 (KiFlushCacheLines.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v3; // rdx
  __int64 CFlushSize; // r8
  char *v5; // rcx

  if ( a2 >= KiLargestCacheSize )
  {
    LOBYTE(CurrentPrcb) = KeInvalidateAllCaches();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = a1 + a2;
    CFlushSize = CurrentPrcb->CFlushSize;
    v5 = (char *)(a1 & ~(CFlushSize - 1));
    if ( _bittest64(&KeFeatureBits, 0x23u) )
    {
      LOBYTE(CurrentPrcb) = KiFlushCacheLines(v5, (~(CFlushSize - 1) & (CFlushSize + v3 - 1)) - (_QWORD)v5);
    }
    else
    {
      while ( (unsigned __int64)v5 < v3 )
      {
        _mm_clflush(v5);
        v5 += CFlushSize;
      }
    }
  }
  return (char)CurrentPrcb;
}
