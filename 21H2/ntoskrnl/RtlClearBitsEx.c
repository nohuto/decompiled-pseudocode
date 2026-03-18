/*
 * XREFs of RtlClearBitsEx @ 0x14030BB30
 * Callers:
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14025A408 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x14025BC50 (RtlpHpFixedVsFree.c)
 *     MiMakeSystemRangeAvailable @ 0x14026E218 (MiMakeSystemRangeAvailable.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiClearVadCellBits @ 0x14030E0A0 (MiClearVadCellBits.c)
 *     ExpSaPageGroupFreeMemory @ 0x140361290 (ExpSaPageGroupFreeMemory.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038F830 (MiMirrorOmitPagesFromCopy.c)
 *     MiExtendDynamicBitMap @ 0x1403D8D00 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140553E38 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140554D4C (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x140599050 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1405BDDAC (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1405E6C50 (RtlShiftLeftBitMapEx.c)
 *     MiReturnImageBase @ 0x1406FC148 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x140700460 (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x1407095A8 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x1407FD674 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14093C268 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140971708 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = ~(byte_140018DF0[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_140018DF0[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_140015C40[v3];
      goto LABEL_4;
    }
  }
}
