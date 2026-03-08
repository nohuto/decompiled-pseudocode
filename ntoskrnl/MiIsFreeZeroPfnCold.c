/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140350240
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140270750 (MiGetPerfectColorHeadPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertLargePageChain @ 0x1402CADB0 (MiInsertLargePageChain.c)
 *     MiGetLargePageChain @ 0x1402E98A8 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x14034E120 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     MiDemoteLocalLargePage @ 0x14034E760 (MiDemoteLocalLargePage.c)
 *     MiBeginPageAccessor @ 0x140350290 (MiBeginPageAccessor.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D1BC4 (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C657C0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C657C0;
  return HIDWORD(v1) == 4294967293;
}
