/*
 * XREFs of SmAcquireReleaseCharges @ 0x14034350C
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403428E8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140342E58 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpCleanup @ 0x140343E28 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1403A6478 (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1403A6694 (SmKmAllocateMdlForLock.c)
 *     SmFpAllocate @ 0x14046592E (SmFpAllocate.c)
 *     SmFpFree @ 0x140465A48 (SmFpFree.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C1098 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405C2484 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmFreeMdlForLock @ 0x1405CB590 (SmKmFreeMdlForLock.c)
 * Callees:
 *     MmChargeResources @ 0x140343560 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x140344D68 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // r10d

  v4 = *(_QWORD *)(a1 + 1936);
  v5 = a2 >> 12;
  v6 = 1;
  v7 = a3 & 1 | 2;
  if ( (a3 & 2) == 0 )
    v7 = a3 & 1;
  if ( a4 )
    MmReleaseResourceCharge(v4, v5, v7, 0LL);
  else
    return (unsigned int)MmChargeResources(v4, v5, v7);
  return v6;
}
