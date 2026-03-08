/*
 * XREFs of MiGetPagingFileOffset @ 0x14029EA80
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiExpandSharedZeroCluster @ 0x14029E7B4 (MiExpandSharedZeroCluster.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiFlowThroughInsertNode @ 0x1402FE598 (MiFlowThroughInsertNode.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x140363DD0 (MiComputeFaultCluster.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiComputePageHash @ 0x140466BDC (MiComputePageHash.c)
 *     MiValidatePagefilePageHash @ 0x140466E1A (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x1404670A6 (MiWritePageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1406417E0 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140646D84 (MiWorkingSetInfoCheckPageTable.c)
 *     MiStoreUpdatePagefileHash @ 0x14065A508 (MiStoreUpdatePagefileHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1406633DC (MiArePagefileContentsCorrupted.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 *a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *a1;
  if ( (unsigned int)MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v1 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v1;
      v1 = v5;
      if ( (v6 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C657C0 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140C657C0;
  }
  return HIDWORD(v1);
}
