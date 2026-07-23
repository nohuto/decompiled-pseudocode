/*
 * XREFs of RtlClearBitsEx @ 0x140309050
 * Callers:
 *     RtlFindSetBitsAndClearEx @ 0x14024B7F0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14024F6DC (MiReleaseSessionVa.c)
 *     MiMakeSystemRangeAvailable @ 0x140308264 (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x140308E70 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedVsFree @ 0x140380450 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385FAC (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403946AC (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C99EC (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1405037DC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140504560 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x140532F38 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DEB0 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405613AC (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1405619B0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1405887F0 (RtlShiftLeftBitMapEx.c)
 *     MiObtainRelocationBits @ 0x1406C2E68 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140701FB8 (MiReturnImageBase.c)
 *     MiActOnMirrorBitmap @ 0x1407777F4 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D5FEC (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = ~(byte_14001E890[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001E890[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_14001B620[v6];
      goto LABEL_4;
    }
  }
}
