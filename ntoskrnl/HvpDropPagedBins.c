/*
 * XREFs of HvpDropPagedBins @ 0x140820B14
 * Callers:
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpPointMapEntriesToBuffer @ 0x140730010 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x140730410 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x14079AE68 (HvpFreeBin.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x1407A6910 (HvpMapEntryGetFreeBin.c)
 *     MmFreeBootRegistry @ 0x140820DAC (MmFreeBootRegistry.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF26CC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  void *v2; // r10
  int v3; // eax
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  unsigned int v6; // esi
  __int64 v7; // r12
  __int64 CellMap; // rax
  __int64 v9; // rcx
  int v10; // r10d
  _BYTE *v11; // rbp
  _DWORD *BinAddress; // r13
  int Bin; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 FreeBin; // rax
  __int16 v18; // [rsp+70h] [rbp+8h] BYREF
  void *v19; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0;
  HvpGetBinContextInitialize(&v18);
  v3 = *(_DWORD *)(BugCheckParameter2 + 160);
  v4 = (unsigned int)v2;
  v19 = v2;
  if ( (v3 & 0x10) == 0 )
    return (unsigned int)v2;
  v5 = *(_DWORD *)(BugCheckParameter2 + 280);
  if ( !v5 )
  {
    Bin = (int)v2;
LABEL_9:
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_12:
    if ( v19 )
      HvpFreeBin(BugCheckParameter2, v4, (__int64)v19);
    return (unsigned int)Bin;
  }
  v6 = (unsigned int)v2;
  v7 = (unsigned int)v2;
  do
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v6);
    v11 = (_BYTE *)CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x1455uLL);
    if ( (*(_BYTE *)(CellMap + 8) & 8) != 0 )
      break;
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v9, CellMap, &v18);
    v4 = BinAddress[2];
    Bin = HvpAllocateBin(BugCheckParameter2, v4, 0, 0x35324D43u, (__int64 *)&v19);
    if ( Bin < 0 )
      goto LABEL_12;
    memmove(v19, BinAddress, v4);
    HvpMapEntryReleaseBinAddress(v15, v14, &v18);
    FreeBin = HvpMapEntryGetFreeBin(v11);
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v19, v4, v6, 1, FreeBin);
    v19 = (void *)(v7 & (unsigned __int64)v19);
    CmpReleaseGlobalQuota(v4);
    v6 += v4;
    v10 = v7;
  }
  while ( v6 < v5 );
  Bin = v10;
  if ( !(_DWORD)v7 )
    goto LABEL_9;
  return (unsigned int)Bin;
}
