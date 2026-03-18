/*
 * XREFs of RtlSetBitsEx @ 0x14028B2A0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x140210370 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x140211064 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x140362838 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x1405520EC (IopAddPageRangeToPageMaps.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14061BCD0 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiMirrorAddPagesToBrownList @ 0x140626B7C (MiMirrorAddPagesToBrownList.c)
 *     MiMarkSystemVaAllocated @ 0x140637320 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x140658B8C (MiAddRangeToPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x1406FAAD0 (MiSetVadBits.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MiActOnMirrorBitmap @ 0x140A2F068 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A344F0 (MiMarkRetpolineBits.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A376E4 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A377EC (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A7A0 (MiPatchDataPagesCallback.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A9C050 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A9C220 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
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
      v7 = byte_140018F40[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140016E48[v4];
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
      v7 = byte_140018F40[v6];
      goto LABEL_4;
    }
  }
}
