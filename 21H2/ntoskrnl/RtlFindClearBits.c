/*
 * XREFs of RtlFindClearBits @ 0x140362960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // esi
  ULONG v5; // r11d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r13
  int v9; // ebx
  unsigned int v10; // r15d
  ULONG v11; // edx
  char *v12; // r14
  ULONG v13; // r12d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  ULONG v20; // r9d
  __int64 v21; // rdx
  ULONG result; // eax
  int v23; // edx
  bool v24; // zf
  __int64 v25; // rcx
  ULONG v26; // ecx
  unsigned __int64 v27; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  char v31; // r9
  unsigned __int64 *v32; // r8
  unsigned int v33; // r9d
  __int64 v34; // r8
  __int64 v35; // rdx
  bool v36; // sf
  __int64 v37; // rcx
  int v38; // r8d
  unsigned int v39; // r15d
  __int64 v40; // rcx
  ULONG v41; // [rsp+78h] [rbp+10h]
  unsigned __int64 *v42; // [rsp+88h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v5 = 0;
  v7 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v5 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v9 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v7;
    v11 = v9 + v5;
    v12 = (char *)Buffer - (((unsigned __int8)Buffer & 4) != 0LL ? 4 : 0);
    if ( v7 - v5 + 1 >= NumberToFind )
      break;
    v19 = -1;
LABEL_14:
    if ( !v5 )
      goto LABEL_20;
    v20 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v20 = SizeOfBitMap;
    v7 = v20 - 1;
    v5 = 0;
  }
  v13 = v10 - NumberToFind + 1;
  v14 = (unsigned __int64)&v12[8 * ((unsigned __int64)v13 >> 6)];
  v15 = (unsigned __int64)v11 >> 6;
  v16 = *(_QWORD *)&v12[8 * v15] | ((1LL << (v11 & 0x3F)) - 1);
  v17 = (unsigned __int64 *)&v12[8 * v15];
  if ( NumberToFind > 0x7F )
  {
    v29 = v14 + 8;
    if ( (v13 & 0x3F) == 0 )
      v29 = (unsigned __int64)&v12[8 * ((unsigned __int64)v13 >> 6)];
    if ( v16 )
    {
      if ( *++v17 )
        goto LABEL_54;
      v24 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
      if ( v24 )
        LODWORD(v16) = 64;
      else
        LODWORD(v16) = 63 - v30;
    }
LABEL_46:
    v19 = ((unsigned int)(((char *)v17 - v12) >> 3) << 6) - v16;
    if ( v19 <= v13 )
    {
      v31 = NumberToFind - v16;
      v32 = &v17[(unsigned __int64)(NumberToFind - (unsigned int)v16) >> 6];
      for ( ++v17; v17 != v32; ++v17 )
      {
        if ( *v17 )
          goto LABEL_54;
      }
      v33 = v31 & 0x3F;
      if ( !v33 )
        goto LABEL_19;
      v24 = !_BitScanForward64((unsigned __int64 *)&v34, *v17);
      if ( v24 )
        LODWORD(v34) = 64;
      if ( (unsigned int)v34 >= v33 )
        goto LABEL_19;
LABEL_54:
      while ( (unsigned __int64)v17 <= v29 )
      {
        if ( !*++v17 )
        {
          v24 = !_BitScanReverse64((unsigned __int64 *)&v35, *(v17 - 1));
          if ( v24 )
            LODWORD(v16) = 64;
          else
            LODWORD(v16) = 63 - v35;
          goto LABEL_46;
        }
      }
    }
    goto LABEL_23;
  }
  if ( NumberToFind >= 0x40 )
  {
LABEL_59:
    v36 = v16 < 0;
    while ( !v36 )
    {
LABEL_61:
      v24 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
      if ( v24 )
        v38 = 64;
      else
        v38 = 63 - v37;
      v19 = (((unsigned int)(((char *)v17 - v12) >> 3) + 1) << 6) - v38;
      if ( v19 > v13 )
        goto LABEL_23;
      v39 = NumberToFind - v38;
      if ( NumberToFind == v38 )
        goto LABEL_19;
      v16 = v17[1];
      ++v17;
      if ( v39 < 0x40 )
        goto LABEL_66;
      v36 = v16 < 0;
      if ( !v16 )
      {
        v39 -= 64;
        if ( !v39 )
          goto LABEL_19;
        v16 = v17[1];
        ++v17;
LABEL_66:
        v24 = !_BitScanForward64((unsigned __int64 *)&v40, v16);
        if ( v24 )
          LODWORD(v40) = 64;
        if ( (unsigned int)v40 >= v39 )
          goto LABEL_19;
        goto LABEL_59;
      }
    }
    while ( 1 )
    {
      if ( (unsigned __int64)++v17 > v14 )
        goto LABEL_23;
      v16 = *v17;
      if ( (*v17 & 0x8000000000000000uLL) == 0LL )
        goto LABEL_61;
    }
  }
  if ( NumberToFind > 1 )
  {
    v23 = 0;
    v42 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v10 >> 6)];
    while ( 1 )
    {
      if ( v16 == -1 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)++v17 > v14 )
            goto LABEL_23;
          v16 = *v17;
          if ( *v17 != -1LL )
          {
            v23 = 0;
            break;
          }
        }
      }
      v24 = !_BitScanForward64((unsigned __int64 *)&v25, v16);
      if ( v24 )
        LODWORD(v25) = 64;
      if ( v23 + (int)v25 >= NumberToFind )
        break;
      v26 = NumberToFind;
      v27 = ~v16;
      v41 = NumberToFind;
      while ( 1 )
      {
        v27 &= v27 >> (v26 >> 1);
        if ( !v27 )
          break;
        v26 = v41 - (v26 >> 1);
        v41 = v26;
        if ( v26 <= 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v21, v27);
          goto LABEL_18;
        }
      }
      if ( v17 == v42 )
        goto LABEL_23;
      v24 = !_BitScanReverse64((unsigned __int64 *)&v28, v16);
      if ( v24 )
        v23 = 64;
      else
        v23 = 63 - v28;
      v16 = v17[1];
      ++v17;
    }
    LODWORD(v21) = -v23;
LABEL_18:
    v19 = ((unsigned int)(((char *)v17 - v12) >> 3) << 6) + v21;
    if ( v19 > v13 )
      goto LABEL_23;
    goto LABEL_19;
  }
  if ( v16 == -1 )
  {
    while ( (unsigned __int64)++v17 <= v14 )
    {
      v16 = *v17;
      if ( *v17 != -1LL )
        goto LABEL_12;
    }
LABEL_23:
    v19 = -1;
    goto LABEL_14;
  }
LABEL_12:
  _BitScanForward64(&v18, ~v16);
  v19 = v18 + ((unsigned int)(((char *)v17 - v12) >> 3) << 6);
  if ( v19 > v13 )
  {
    v19 = -1;
    goto LABEL_14;
  }
LABEL_19:
  if ( v19 == -1 )
    goto LABEL_14;
LABEL_20:
  result = v19 - v9;
  if ( v19 == -1 )
    return -1;
  return result;
}
