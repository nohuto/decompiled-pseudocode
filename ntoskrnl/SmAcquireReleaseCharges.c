/*
 * XREFs of SmAcquireReleaseCharges @ 0x140359F14
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1403590B8 (SmFpCleanup.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140359180 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpPreAllocate @ 0x1403A1704 (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1403A1920 (SmKmAllocateMdlForLock.c)
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEBE8 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmFreeMdlForLock @ 0x1405C90E0 (SmKmFreeMdlForLock.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140302870 (MmReleaseResourceCharge.c)
 *     MmChargeResources @ 0x140359F68 (MmChargeResources.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // r10d

  v4 = *(__int64 **)(a1 + 1936);
  v5 = a2 >> 12;
  v6 = 1;
  v7 = a3 & 1 | 2;
  if ( (a3 & 2) == 0 )
    v7 = a3 & 1;
  if ( a4 )
    MmReleaseResourceCharge(v4, v5, v7, 0);
  else
    return (unsigned int)MmChargeResources(v4, v5, v7);
  return v6;
}
