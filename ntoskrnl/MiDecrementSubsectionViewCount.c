/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x140334C10
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiAppendSubsectionChain @ 0x1402A5090 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x140334A28 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140334B70 (MiDecrementSubsections.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14034C584 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140368520 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140668AE8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  ULONG_PTR v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int16 v8; // dx
  _KPROCESS *Process; // rax
  void *v10; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v3 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v5 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, a3) )
  {
    if ( (v8 & 0x10) != 0 )
    {
      v10 = 0LL;
    }
    else if ( (v8 & 0x80u) != 0 )
    {
      v10 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = (v8 & 0x100) != 0
          ? *(void **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(Process[1].Affinity.StaticBitmap[25] + 366))
          : *(void **)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
    }
    if ( v10 != *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
      v12 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v13 = *(_DWORD *)(v12 + 48) & 0x3FFFFFFF;
      if ( v13 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v4, (unsigned int)(v13 - 1));
        if ( v13 == 1 )
          v5 = MiComputeCrossPartitionSectionCharges(v14);
      }
    }
  }
  if ( *(_QWORD *)(v3 + 64) && (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 96);
    if ( !v6 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    *(_QWORD *)(v4 + 96) = v6 - 1;
  }
  return v5;
}
