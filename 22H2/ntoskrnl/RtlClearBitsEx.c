/*
 * XREFs of RtlClearBitsEx @ 0x14027E980
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14027DB94 (MiMakeSystemRangeAvailable.c)
 *     MiClearVadCellBits @ 0x14027E7A0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x1403266F0 (RtlFindSetBitsAndClearEx.c)
 *     MiReleaseSessionVa @ 0x14032A55C (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x1403800B0 (RtlpHpFixedVsFree.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038576C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x140393E5C (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403C917C (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1405034DC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140504260 (IopRemovePageFromPageMap.c)
 *     MiHotRemoveHugeRange @ 0x140532C38 (MiHotRemoveHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DBB0 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x1405607E0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405610AC (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1405616B0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140588500 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x140636BA4 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x1406382F8 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x14066ADB4 (MiObtainRelocationBits.c)
 *     MiActOnMirrorBitmap @ 0x1407746C4 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897FDC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMarkRetpolineBits @ 0x1408D0D04 (MiMarkRetpolineBits.c)
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
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
      v7 = ~(byte_14001E790[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14001E790[v4];
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
      v7 = byte_14001B528[v6];
      goto LABEL_4;
    }
  }
}
