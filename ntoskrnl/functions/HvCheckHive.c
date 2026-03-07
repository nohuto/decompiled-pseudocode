__int64 HvCheckHive(__int64 a1, int a2, ...)
{
  __int64 v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // rbx
  unsigned int *v5; // r12
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // edx
  _DWORD *v11; // rcx
  __int64 CellMap; // rcx
  int v13; // r11d
  __int64 FreeBin; // rax
  __int64 v15; // rcx
  _DWORD *BinAddress; // rbp
  __int64 v17; // r8
  RTL_BITMAP *BitMapHeader; // r10
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // esi
  __int16 v27; // [rsp+98h] [rbp+10h] BYREF
  __int16 v28; // [rsp+9Ah] [rbp+12h]
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h]
  __int64 v32; // [rsp+B0h] [rbp+28h]
  __int64 v33; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v28 = HIWORD(a2);
  v27 = 0;
  HvpGetBinContextInitialize(&v27);
  v4 = v33;
  v5 = (unsigned int *)(v2 + 280);
  v6 = v32;
  v7 = v3;
  LODWORD(v29) = v3;
  v8 = v3;
  while ( 2 )
  {
    v9 = *v5;
    while ( v7 < v9 )
    {
      CellMap = HvpGetCellMap(v2, v7);
      if ( !CellMap )
      {
        v24 = -1073741492;
        if ( v4 )
        {
          SetFailureLocation(v4, 0, 16, -1073741492, v13);
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
        }
        return v24;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
      {
        v10 = *(_DWORD *)(FreeBin + 16);
        v7 += v10;
        if ( v6 )
        {
          HvAddToLayoutStats(v6, v10);
          HvMoveLayoutStats(v11);
        }
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v15, v15, &v27);
        v19 = v9 - v7;
        v20 = BinAddress[2];
        if ( v20 > (unsigned int)v19
          || v20 < 0x20
          || (v20 & 0xFFF) != 0
          || *BinAddress != 1852400232
          || BinAddress[1] != v7 )
        {
          v24 = -1073741492;
          if ( !v4 )
            return v24;
          SetFailureLocation(v4, 0, 16, -1073741492, 32);
          goto LABEL_22;
        }
        v21 = HvCheckBin(v19, BinAddress, v17, (__int64 *)va, BitMapHeader, v6, v4);
        v24 = v21;
        if ( v21 < 0 )
        {
          if ( !v4 )
            return v24;
          SetFailureLocation(v4, 0, 16, v21, 48);
LABEL_22:
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
          *(_QWORD *)(v4 + 304) = BinAddress;
          return v24;
        }
        v7 += BinAddress[2];
        HvpMapEntryReleaseBinAddress(v23, v22, &v27);
        v2 = a1;
      }
    }
    ++v8;
    v5 += 158;
    v7 = 0x80000000;
    if ( v8 <= 1 )
      continue;
    return v3;
  }
}
