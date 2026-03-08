/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x140332840
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiSetSubsectionBase @ 0x1402A4B24 (MiSetSubsectionBase.c)
 *     MiRetainSubsection @ 0x1402F9278 (MiRetainSubsection.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiReferenceSubsection @ 0x1403327C0 (MiReferenceSubsection.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14034C584 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140368520 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  unsigned int v4; // r11d
  __int16 v7; // r8
  void *v8; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v10; // edx
  char v11; // r8

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, (unsigned int)a2) )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      v8 = &MiSystemPartition;
    }
    else if ( (v7 & 0x100) != 0 )
    {
      v8 = *(void **)(qword_140C67048
                    + 8LL
                    * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 366));
    }
    else
    {
      v8 = (v7 & 0x10) != 0
         ? 0LL
         : *(void **)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    if ( v8 != *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v7 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_140C67A50;
        return 0LL;
      }
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v10 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v10 != 0x3FFFFFFF )
      {
        if ( !v10 && (v11 & 0x20) == 0 )
          return 1LL;
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v10 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_BYTE *)(v3 + 34) & 1) == 0
    && (*(_QWORD *)(v3 + 96))++ == -1LL )
  {
    KeBugCheckEx(0x1Au, 0x42000uLL, v3, 0LL, 0LL);
  }
  return v4;
}
