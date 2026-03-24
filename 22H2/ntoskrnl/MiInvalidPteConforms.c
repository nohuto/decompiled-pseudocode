/*
 * XREFs of MiInvalidPteConforms @ 0x14023AEB0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x14023ABE0 (MiCheckProtoPtePageState.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiTryLockLeafPage @ 0x140283FF8 (MiTryLockLeafPage.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AC5A0 (MiUpdatePfnPriorityByPte.c)
 *     MiSoftFaultMappedView @ 0x1402E3540 (MiSoftFaultMappedView.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140C4DF40 || (qword_140C4DF40 & a1) != 0);
}
