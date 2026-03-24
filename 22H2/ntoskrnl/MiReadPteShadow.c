/*
 * XREFs of MiReadPteShadow @ 0x1402860B0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x14063CE30 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiIsRangeFullyCommitted @ 0x14063D9E0 (MiIsRangeFullyCommitted.c)
 *     MiPrefetchDriverPages @ 0x140668420 (MiPrefetchDriverPages.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14079FDEC (MiMarkBootGuardPage.c)
 *     MiInitializeShadowPageTable @ 0x1407A0798 (MiInitializeShadowPageTable.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MmFreeNonCachedMemory @ 0x1408C6930 (MmFreeNonCachedMemory.c)
 *     MiCaptureSparsePages @ 0x1408D85B4 (MiCaptureSparsePages.c)
 *     MiConvertHiberPhasePte @ 0x1409957C0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B0440 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0660 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
