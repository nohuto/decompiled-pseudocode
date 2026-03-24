/*
 * XREFs of RtlSetBitsEx @ 0x140316A00
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x1402793D0 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x1402B3808 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x140300090 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x14037B558 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x1403845F8 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x14050385C (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x140532798 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DC70 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14056116C (MiAddRangeToPartitionTree.c)
 *     MiCopyToCfgBitMap @ 0x1406E9880 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406EA060 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x1406ECE60 (MiSetVadBits.c)
 *     MiObtainRelocationBits @ 0x140714818 (MiObtainRelocationBits.c)
 *     MiActOnMirrorBitmap @ 0x140777634 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA848 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408D0CB4 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409ACFE0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AD1C8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = byte_14001E8E0[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001B570[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_14001E8E0[v6];
      goto LABEL_4;
    }
  }
}
