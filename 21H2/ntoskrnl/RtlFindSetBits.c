/*
 * XREFs of RtlFindSetBits @ 0x1403625A0
 * Callers:
 *     HvpFindFreeCell @ 0x14071F32C (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14071F510 (HvpRemoveFreeCellHint.c)
 *     MiFindDriverNonPagedSections @ 0x14075CC44 (MiFindDriverNonPagedSections.c)
 *     SmcStorePlacementGet @ 0x14092E0B8 (SmcStorePlacementGet.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r10d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r11
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  char *v17; // rdx
  signed __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  bool v21; // cc
  ULONG v22; // r10d
  ULONG v24; // r9d
  int v25; // ecx
  char *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r9d
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  int v36; // ecx
  char v37; // r9
  char *v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+10h] [rbp-58h]
  unsigned int *v45; // [rsp+18h] [rbp-50h]
  int v46; // [rsp+70h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v45 = Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v44 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < NumberToFind )
    {
LABEL_16:
      v20 = -1;
      goto LABEL_17;
    }
    v14 = v11 - NumberToFind + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v17 = &v13[8 * ((unsigned __int64)v12 >> 6)];
    v18 = ~*(_QWORD *)v17 | v15;
    if ( NumberToFind > 0x7F )
    {
      v35 = v16 + 8;
      if ( (v14 & 0x3F) == 0 )
        v35 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( !v18 )
      {
        v36 = 0;
        goto LABEL_53;
      }
      v17 += 8;
      if ( *(_QWORD *)v17 != -1LL )
        goto LABEL_59;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v43, v18);
      if ( !v27 )
      {
        v36 = 63 - v43;
        goto LABEL_53;
      }
LABEL_78:
      v36 = 64;
LABEL_53:
      while ( 1 )
      {
        v20 = ((unsigned int)((v17 - v13) >> 3) << 6) - v36;
        if ( v20 > v14 )
          goto LABEL_16;
        v37 = NumberToFind - v36;
        v38 = &v17[8 * ((unsigned __int64)(NumberToFind - v36) >> 6)];
        while ( 1 )
        {
          v17 += 8;
          if ( v17 == v38 )
            break;
          if ( *(_QWORD *)v17 != -1LL )
            goto LABEL_59;
        }
        v40 = v37 & 0x3F;
        if ( !v40 )
          goto LABEL_12;
        v27 = !_BitScanForward64((unsigned __int64 *)&v41, ~*(_QWORD *)v17);
        if ( v27 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_12;
        do
        {
LABEL_59:
          if ( (unsigned __int64)v17 > v35 )
            goto LABEL_16;
          v17 += 8;
        }
        while ( *(_QWORD *)v17 != -1LL );
        v46 &= ~*(_DWORD *)v17;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v39, ~*((_QWORD *)v17 - 1));
        if ( v27 )
          goto LABEL_78;
        v36 = 63 - v39;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              goto LABEL_16;
            v18 = ~*(_QWORD *)v17;
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
          if ( v27 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v20 = (((unsigned int)((v17 - v13) >> 3) + 1) << 6) - v32;
          if ( v20 > v14 )
            goto LABEL_16;
          v33 = NumberToFind - v32;
          if ( NumberToFind == v32 )
            goto LABEL_12;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          if ( v33 >= 0x40 )
            break;
LABEL_45:
          v27 = !_BitScanForward64((unsigned __int64 *)&v34, v18);
          if ( v27 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
            goto LABEL_12;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v33 -= 64;
          if ( !v33 )
            goto LABEL_12;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_45;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v25 = 0;
      v26 = &v13[8 * ((unsigned __int64)v11 >> 6)];
      while ( v18 != -1 )
      {
LABEL_23:
        v27 = !_BitScanForward64((unsigned __int64 *)&v28, v18);
        if ( v27 )
          LODWORD(v28) = 64;
        if ( v25 + (int)v28 >= NumberToFind )
        {
          LODWORD(v30) = -v25;
LABEL_30:
          v20 = ((unsigned int)((v17 - v13) >> 3) << 6) + v30;
          v21 = v20 <= v14;
          goto LABEL_11;
        }
        v29 = NumberToFind;
        v30 = ~v18;
        while ( 1 )
        {
          v30 &= v30 >> (v29 >> 1);
          if ( !v30 )
            break;
          v29 -= v29 >> 1;
          if ( v29 <= 1 )
          {
            _BitScanForward64(&v30, v30);
            goto LABEL_30;
          }
        }
        if ( v17 == v26 )
          goto LABEL_16;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v42, v18);
        if ( v27 )
          v25 = 64;
        else
          v25 = 63 - v42;
        v17 += 8;
        v18 = ~*(_QWORD *)v17;
      }
      while ( 1 )
      {
        v17 += 8;
        if ( (unsigned __int64)v17 > v16 )
          goto LABEL_16;
        v18 = ~*(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          v25 = 0;
          goto LABEL_23;
        }
      }
    }
    while ( v18 == -1 )
    {
      v17 += 8;
      if ( (unsigned __int64)v17 > v16 )
        goto LABEL_16;
      v18 = ~*(_QWORD *)v17;
    }
    _BitScanForward64(&v19, ~v18);
    v20 = v19 + ((unsigned int)((v17 - v13) >> 3) << 6);
    v21 = v20 <= v14;
LABEL_11:
    if ( !v21 )
      goto LABEL_16;
LABEL_12:
    if ( v20 != -1 )
      break;
LABEL_17:
    if ( !v6 )
      break;
    v9 = v44;
    v24 = NumberToFind + HintIndex;
    Buffer = v45;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v7 = v24 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return v22;
}
