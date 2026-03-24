/*
 * XREFs of RtlSetBitsEx @ 0x140297080
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiObtainDynamicVa @ 0x14030AF58 (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403423E0 (RtlFindClearBitsAndSetEx.c)
 *     RtlpHpFixedHeapCreate @ 0x14037AFC8 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x140382688 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x1405034DC (IopAddPageRangeToPageMaps.c)
 *     MiAddPartitionHugeRange @ 0x1405326D8 (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x14053DBB0 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x1405610AC (MiAddRangeToPartitionTree.c)
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x14063A580 (MiSetVadBits.c)
 *     MiObtainRelocationBits @ 0x14066ADB4 (MiObtainRelocationBits.c)
 *     MiActOnMirrorBitmap @ 0x1407746C4 (MiActOnMirrorBitmap.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA898 (MiIdentifyPatchImageWritablePages.c)
 *     MiMarkRetpolineBits @ 0x1408D0D04 (MiMarkRetpolineBits.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409AD120 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AD308 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
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
      v7 = byte_14001E790[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14001B528[v4];
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
      v7 = byte_14001E790[v6];
      goto LABEL_4;
    }
  }
}
