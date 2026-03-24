/*
 * XREFs of MiFreeMdlPageRun @ 0x140280378
 * Callers:
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA9C8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1408DB084 (MiFreePartitionPageRun.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x140280524 (MiFreeSmallPageFromMdl.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiResidentPageDangleFree @ 0x1403F6714 (MiResidentPageDangleFree.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, char a3)
{
  ULONG_PTR v3; // r15
  int v4; // r13d
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned int v10; // edx

  v3 = -1LL;
  v4 = a3 & 1;
  v5 = 0LL;
  v6 = a2;
  while ( v6 )
  {
    if ( (BugCheckParameter2 & 0xF) != 0 )
    {
LABEL_10:
      if ( v3 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL)),
          BugCheckParameter2 & 0xFFFFFE00,
          512,
          0,
          0);
      }
      v5 += MiFreeSmallPageFromMdl(BugCheckParameter2++);
      --v6;
    }
    else
    {
      v8 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v9 = MiLargePageSizes[v8];
        if ( ((v9 - 1) & BugCheckParameter2) == 0
          && v6 >= v9
          && (unsigned int)MiResidentPageDangleFree(BugCheckParameter2, (unsigned int)v8) )
        {
          break;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= 3 )
          goto LABEL_10;
      }
      v5 += MiFreeLargePageMemory(BugCheckParameter2, v10, v4 + 6);
      BugCheckParameter2 += v9;
      v6 -= v9;
    }
  }
  return v5;
}
