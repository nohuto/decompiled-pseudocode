/*
 * XREFs of RtlSetBitsEx @ 0x140321750
 * Callers:
 *     MiObtainDynamicVa @ 0x1402319B8 (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x140267370 (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x14037B0A8 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x140384748 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x1405037DC (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x1405329D8 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DEB0 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x1405613AC (MiAddRangeToPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406C2E68 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x140704240 (MiSetVadBits.c)
 *     MiActOnMirrorBitmap @ 0x1407777F4 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA9A8 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409ADF10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AE0F8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
      v7 = byte_14001E890[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001B620[v4];
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
      v7 = byte_14001E890[v6];
      goto LABEL_4;
    }
  }
}
