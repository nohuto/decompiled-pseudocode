char __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *v11; // rcx
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r8
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 BinAddress; // rax
  __int64 v21; // r8
  unsigned int v22; // r11d
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  __int16 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0;
  v7 = BugCheckParameter3;
  HvpGetBinContextInitialize(&v27);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 && v8 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v7);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x445uLL);
      if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v7 += 4096;
        a3 -= 4096;
        goto LABEL_16;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v12 = FreeBin ? v7 - *(_DWORD *)(FreeBin + 20) : *v11;
      v13 = HvpGetCellMap(BugCheckParameter2, v7 - v12);
      v18 = *(_DWORD *)(v13 + 16) - v17;
      if ( a3 < v18 )
        v18 = a3;
      if ( (v15 & 8) != 0 )
        break;
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v19 = BugCheckParameter2 + 224;
        if ( a4 == 2 )
        {
          HvpViewMapSealRange(v19, v7, v18);
        }
        else if ( (int)HvpViewMapCOWAndUnsealRange(v19, v7, v18) < 0 )
        {
          v25 = 0;
          goto LABEL_14;
        }
      }
LABEL_15:
      a3 -= v18;
      v7 += v18;
LABEL_16:
      if ( !a3 )
        goto LABEL_17;
    }
    BinAddress = HvpMapEntryGetBinAddress(v14, v16, &v27);
    v23 = HvpProtectBinPartial(BugCheckParameter2, BinAddress, v21, v22, v18, a4 == 4);
    HvpMapEntryReleaseBinAddress(v23 >= 0, v24, &v27);
LABEL_14:
    if ( !v25 && a4 == 4 )
      return v25;
    goto LABEL_15;
  }
LABEL_17:
  LOBYTE(v25) = 1;
  return v25;
}
