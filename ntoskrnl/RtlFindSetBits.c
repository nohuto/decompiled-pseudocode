/*
 * XREFs of RtlFindSetBits @ 0x14030D990
 * Callers:
 *     MiFindDriverNonPagedSections @ 0x14072715C (MiFindDriverNonPagedSections.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     SmcStorePlacementGet @ 0x1409D8878 (SmcStorePlacementGet.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // r11
  ULONG v7; // r10d
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  char *v17; // rdx
  signed __int64 v18; // r9
  unsigned __int64 v19; // rax
  ULONG v20; // r8d
  bool v21; // cc
  ULONG v24; // r9d
  int v25; // ecx
  char *v26; // rsi
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // r11
  char *v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rax
  int v37; // r9d
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // r9
  char *v42; // rcx
  unsigned int v43; // r9d
  __int64 v44; // rcx
  __int64 v45; // [rsp+40h] [rbp+8h]
  unsigned int *v46; // [rsp+58h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFF8;
  v9 = (unsigned __int8)Buffer & 4;
  v45 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_16;
    v14 = v11 - NumberToFind + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v17 = &v13[8 * ((unsigned __int64)v12 >> 6)];
    v18 = ~*(_QWORD *)v17 | v15;
    if ( NumberToFind > 0x7F )
      break;
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
          v27 = !_BitScanReverse64((unsigned __int64 *)&v36, v18);
          if ( v27 )
            v37 = 64;
          else
            v37 = 63 - v36;
          v20 = (((unsigned int)((v17 - v13) >> 3) + 1) << 6) - v37;
          if ( v20 > v14 )
            goto LABEL_16;
          v38 = NumberToFind - v37;
          if ( NumberToFind == v37 )
            goto LABEL_12;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          if ( v38 >= 0x40 )
            break;
LABEL_55:
          v27 = !_BitScanForward64((unsigned __int64 *)&v39, v18);
          if ( v27 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_12;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_12;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_55;
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
        v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
        if ( v27 )
          v25 = 64;
        else
          v25 = 63 - v31;
        v17 += 8;
        v18 = ~*(_QWORD *)v17;
      }
      while ( 1 )
      {
        v17 += 8;
        if ( (unsigned __int64)v17 > v16 )
          break;
        v18 = ~*(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          v25 = 0;
          goto LABEL_23;
        }
      }
    }
    else
    {
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
      if ( v21 )
        goto LABEL_12;
    }
LABEL_16:
    v20 = -1;
LABEL_17:
    if ( !v7 )
      return v20;
    v9 = v45;
    v24 = NumberToFind + HintIndex;
    Buffer = v46;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v8 = v24 - 1;
    v7 = 0;
  }
  v32 = v16 + 8;
  if ( (v14 & 0x3F) == 0 )
    v32 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
  if ( !v18 )
  {
    v35 = 0;
    goto LABEL_61;
  }
  v17 += 8;
  if ( *(_QWORD *)v17 == -1LL )
  {
    v27 = !_BitScanReverse64((unsigned __int64 *)&v40, v18);
    if ( !v27 )
    {
      v35 = 63 - v40;
      goto LABEL_61;
    }
    goto LABEL_77;
  }
  do
  {
    do
    {
LABEL_43:
      v33 = v17;
      if ( (unsigned __int64)v17 > v32 )
        goto LABEL_16;
      v17 += 8;
    }
    while ( *(_QWORD *)v17 != -1LL );
    v27 = !_BitScanReverse64((unsigned __int64 *)&v34, ~*(_QWORD *)v33);
    if ( v27 )
LABEL_77:
      v35 = 64;
    else
      v35 = 63 - v34;
LABEL_61:
    v20 = ((unsigned int)((v17 - v13) >> 3) << 6) - v35;
    if ( v20 > v14 )
      goto LABEL_16;
    v41 = NumberToFind - v35;
    v42 = &v17[8 * ((unsigned __int64)(NumberToFind - v35) >> 6)];
    while ( 1 )
    {
      v17 += 8;
      if ( v17 == v42 )
        break;
      if ( *(_QWORD *)v17 != -1LL )
        goto LABEL_43;
    }
    v43 = v41 & 0x3F;
    if ( !v43 )
      break;
    v27 = !_BitScanForward64((unsigned __int64 *)&v44, ~*(_QWORD *)v17);
    if ( v27 )
      LODWORD(v44) = 64;
  }
  while ( (unsigned int)v44 < v43 );
LABEL_12:
  if ( v20 == -1 )
    goto LABEL_17;
  v20 -= v10;
  return v20;
}
