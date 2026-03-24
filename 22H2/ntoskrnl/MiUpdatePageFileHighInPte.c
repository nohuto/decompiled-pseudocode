/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14023D6F0
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402995B0 (MiUnlinkNodeLargePageHelper.c)
 *     MiOutSwapWorkingSetPte @ 0x1402AD540 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x1402EEF1C (MiLargeFreePageToMdl.c)
 *     MiDrainZeroLookasides @ 0x140310AE0 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14031B060 (MI_CLEAR_RESET_PTE.c)
 *     MiClearPageFileHash @ 0x140324CD4 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTransferSoftwarePte @ 0x1403330E8 (MiTransferSoftwarePte.c)
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403AC244 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AC2B0 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6248 (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x1406BEA64 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DF40 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DF40 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DF40 | result;
  }
  return result;
}
