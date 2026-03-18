/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x1402890D0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14021980C (MiPrepareSegmentForDeletion.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     MiReferenceSubsection @ 0x140289050 (MiReferenceSubsection.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiRetainSubsection @ 0x140364318 (MiRetainSubsection.c)
 *     MiSetSubsectionBase @ 0x14036A48C (MiSetSubsectionBase.c)
 *     MiExtendSection @ 0x140706884 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140214D8C (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402ED410 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14066B504 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 *BugCheckParameter2, char a2)
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
  if ( (a2 & 8) != 0 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      v8 = &MiSystemPartition;
    }
    else if ( (v7 & 0x100) != 0 )
    {
      v8 = *(void **)(qword_140C674C8
                    + 8LL
                    * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 366));
    }
    else
    {
      v8 = (v7 & 0x10) != 0
         ? 0LL
         : *(void **)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    if ( v8 != *(void **)(qword_140C674C8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v7 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_140C67ED0;
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
