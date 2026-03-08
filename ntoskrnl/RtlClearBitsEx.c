/*
 * XREFs of RtlClearBitsEx @ 0x14020FC50
 * Callers:
 *     RtlpHpFixedVsFree @ 0x140201840 (RtlpHpFixedVsFree.c)
 *     MiMakeSystemRangeAvailable @ 0x14020F62C (MiMakeSystemRangeAvailable.c)
 *     RtlFindSetBitsAndClearEx @ 0x14020F8A0 (RtlFindSetBitsAndClearEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x140295994 (ExpSaPageGroupFreeMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiClearVadCellBits @ 0x1403336C0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiExtendDynamicBitMap @ 0x1403A5570 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x14054FC4C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140551334 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405A6E80 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140624E58 (MiMirrorOmitPagesFromCopy.c)
 *     MiMarkSystemVaAllocated @ 0x140634E98 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14065654C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140656C50 (MiClearRangeInPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406A1D10 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x1406A5890 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiActOnMirrorBitmap @ 0x140A2C318 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A317C0 (MiMarkRetpolineBits.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A32268 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
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
      v7 = ~(byte_140018DE0[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140018DE0[v4];
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
      v7 = byte_1400165E0[v6];
      goto LABEL_4;
    }
  }
}
