/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140349598
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x1402DE91C (MiEmptyWorkingSetHelper.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiTrimPteWorker @ 0x140349308 (MiTrimPteWorker.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140349610 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx

  v4 = (__int64)(a2 << 25) >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL
     || (unsigned __int8)MiGetVaAge(0xFFFFF68000000000uLL, v4) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(a1, a2);
  }
}
