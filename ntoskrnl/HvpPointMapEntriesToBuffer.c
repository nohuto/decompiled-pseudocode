/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x140730010
 * Callers:
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1AF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1B050 (HvpMapHiveImage.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int v9; // r10d
  __int64 CellMap; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdx

  if ( a3 )
  {
    v9 = 0;
    do
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v9 + a4);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x406uLL);
      *(_QWORD *)(CellMap + 8) = a2;
      v14 = a2;
      if ( v12 )
      {
        v15 = 0;
      }
      else
      {
        v14 = a2 | 1;
        v15 = v13;
        *(_QWORD *)(CellMap + 8) = a2 | 1;
      }
      *(_DWORD *)(CellMap + 16) = v15;
      if ( a6 )
      {
        v14 |= 2uLL;
        v16 = a6;
        *(_QWORD *)(CellMap + 8) = v14;
      }
      else
      {
        v16 = v12;
      }
      *(_QWORD *)CellMap = v16;
      if ( a5 )
        *(_QWORD *)(CellMap + 8) = v14 | 8;
      v9 = v12 + 4096;
    }
    while ( v9 < v13 );
  }
}
