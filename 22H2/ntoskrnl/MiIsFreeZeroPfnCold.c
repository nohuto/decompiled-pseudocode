/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1402837A0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140231A80 (MiDemoteLocalLargePage.c)
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiReturnFreeZeroPage @ 0x1402836D0 (MiReturnFreeZeroPage.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MiLargeFreePageToMdl @ 0x1402EEF1C (MiLargeFreePageToMdl.c)
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiPurgePartitionStandby @ 0x140384914 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF40 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DF40;
  return HIDWORD(v1) == 4294967293;
}
