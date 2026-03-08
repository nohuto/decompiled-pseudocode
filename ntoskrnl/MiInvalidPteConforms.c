/*
 * XREFs of MiInvalidPteConforms @ 0x140287530
 * Callers:
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  if ( a1 && qword_140C657C0 )
    return (qword_140C657C0 & a1) != 0;
  return 1LL;
}
