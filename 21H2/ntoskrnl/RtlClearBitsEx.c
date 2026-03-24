/*
 * XREFs of RtlClearBitsEx @ 0x1402FE300
 * Callers:
 *     RtlFindSetBitsAndClearEx @ 0x1402CD2F0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x1402D124C (MiReleaseSessionVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1402FD514 (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x1402FE120 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x140300090 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedVsFree @ 0x140380900 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385E5C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x14039455C (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C984C (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x14050385C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1405045E0 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x140532CF8 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DC70 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x1405608A0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14056116C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140561770 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x1405885C0 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406E9484 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x1406E9880 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x1406EABD8 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x140714818 (MiObtainRelocationBits.c)
 *     MiActOnMirrorBitmap @ 0x140777634 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897F8C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408D0CB4 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
      v7 = ~(byte_14001E8E0[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001E8E0[v4];
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
      v7 = byte_14001B570[v6];
      goto LABEL_4;
    }
  }
}
