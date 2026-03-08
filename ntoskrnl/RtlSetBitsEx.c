/*
 * XREFs of RtlSetBitsEx @ 0x14034CE90
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x14020C1E0 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x1402105DC (MiObtainDynamicVa.c)
 *     RtlpHpFixedHeapCreate @ 0x1402F78D8 (RtlpHpFixedHeapCreate.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x14054FC4C (IopAddPageRangeToPageMaps.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140619824 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiMirrorAddPagesToBrownList @ 0x1406246DC (MiMirrorAddPagesToBrownList.c)
 *     MiMarkSystemVaAllocated @ 0x140634E98 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14065654C (MiAddRangeToPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406A1D10 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406A5890 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiSetVadBits @ 0x1407D6BE0 (MiSetVadBits.c)
 *     MiActOnMirrorBitmap @ 0x140A2C318 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A317C0 (MiMarkRetpolineBits.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A349B4 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A34ABC (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A37AC0 (MiPatchDataPagesCallback.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A98F10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A990E0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
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
      v7 = byte_140018DE0[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_1400165E0[v4];
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
      v7 = byte_140018DE0[v6];
      goto LABEL_4;
    }
  }
}
