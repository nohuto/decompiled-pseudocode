__int64 __fastcall KeQueryCpuSetInformation(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  _QWORD *v5; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // ecx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // r10d
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r8
  char *v14; // r14
  int v15; // r10d
  __int64 CpuSetData; // r13
  int v17; // r8d
  char v18; // dl
  __int64 v19; // r12
  char v20; // cl
  char *v21; // r8
  char v23; // dl
  __int64 TickLock; // [rsp+50h] [rbp-58h]

  v4 = a1;
  if ( a4 )
  {
    v5 = (_QWORD *)(a4 + 2376);
    if ( (*(_DWORD *)(a4 + 2172) & 0x80u) != 0 )
      v5 = (_QWORD *)*v5;
  }
  else
  {
    v5 = 0LL;
  }
  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    v6 = KiTotalCpuSetCount;
    v7 = 32 * KiTotalCpuSetCount;
    *v8 = 32 * KiTotalCpuSetCount;
    if ( v9 < v7 )
      return 3221225507LL;
    memset(v4, 0, v7);
    LODWORD(v10) = 0;
    v11 = 0;
    v12 = KiGroupBlock[0];
    while ( v12 )
    {
      _BitScanForward64(&v13, v12);
      v14 = &v4[32 * v11];
      CpuSetData = KiGetCpuSetData(v10, v13);
      *(_DWORD *)v14 = 32;
      *((_DWORD *)v14 + 1) = 0;
      *((_DWORD *)v14 + 2) = v17 | ((_DWORD)v10 << 16) | 0x100;
      *((_WORD *)v14 + 6) = v10;
      v14[14] = *(_BYTE *)(CpuSetData + 1);
      v14[15] = *(_BYTE *)(CpuSetData + 2);
      v14[16] = *(_BYTE *)(CpuSetData + 3);
      v14[17] = *(_BYTE *)(CpuSetData + 4);
      v14[18] = *(_BYTE *)(CpuSetData + 5);
      v14[20] = *(_BYTE *)(CpuSetData + 6);
      v18 = 0;
      v19 = 1LL << v17;
      v20 = 0;
      v21 = v14 + 19;
      if ( (v19 & KiNonParkedCpuSets[v10]) == 0 )
      {
        v18 = 1;
        *v21 |= 1u;
        v20 = 1;
      }
      if ( (v19 & KiSystemAllowedCpuSets[2 * (unsigned int)v10]) != 0 )
      {
        if ( !a4 || (*(_DWORD *)(a4 + 1120) & 0x8000000) == 0 )
          goto LABEL_10;
        v23 = v20;
      }
      else
      {
        v23 = v20;
        if ( v5 && (v19 & v5[v10]) != 0 )
          v23 = v20 | 4;
      }
      v18 = v23 | 0xA;
LABEL_10:
      *v21 = v18;
      *((_QWORD *)v14 + 3) = *(_QWORD *)(CpuSetData + 8);
      v11 = v15 + 1;
      v4 = a1;
LABEL_11:
      if ( v11 >= v6 )
        goto LABEL_22;
    }
    LODWORD(v10) = v10 + 1;
    if ( (unsigned int)v10 < (unsigned __int16)KiActiveGroups )
    {
      v12 = KiGroupBlock[4 * (unsigned int)v10];
      goto LABEL_11;
    }
LABEL_22:
    ;
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
