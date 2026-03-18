/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1402E85D0
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x14026DAF0 (MiGetPerfectColorHeadPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertLargePageChain @ 0x1402D68E0 (MiInsertLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiBeginPageAccessor @ 0x1402E8034 (MiBeginPageAccessor.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBA40 (MiGetLargePageChain.c)
 *     MiConvertContiguousPages @ 0x1403BD470 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D70E4 (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x14046C950 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x1406515B0 (MiPurgePartitionStandby.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C65C40 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C65C40;
  return HIDWORD(v1) == 4294967293;
}
