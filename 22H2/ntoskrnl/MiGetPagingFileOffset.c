/*
 * XREFs of MiGetPagingFileOffset @ 0x1402F2864
 * Callers:
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiComputeFaultCluster @ 0x1402EE628 (MiComputeFaultCluster.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1402F2598 (MiExpandSharedZeroCluster.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiFlowThroughInsertNode @ 0x140369588 (MiFlowThroughInsertNode.c)
 *     MiComputePageHash @ 0x14046EADC (MiComputePageHash.c)
 *     MiValidatePagefilePageHash @ 0x14046ED1A (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14046EFA6 (MiWritePageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x140643C40 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1406493A0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiStoreUpdatePagefileHash @ 0x14065CB58 (MiStoreUpdatePagefileHash.c)
 *     MiArePagefileContentsCorrupted @ 0x140665A2C (MiArePagefileContentsCorrupted.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiScanPagefileSpace @ 0x140A32C50 (MiScanPagefileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v1 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v1;
      v1 = v5;
      if ( (v6 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C65C40 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140C65C40;
  }
  return HIDWORD(v1);
}
