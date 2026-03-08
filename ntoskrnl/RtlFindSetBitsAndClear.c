/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1405A60A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 */

ULONG __stdcall RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // esi
  unsigned int *Buffer; // r10
  ULONG v8; // ebx
  unsigned int v9; // r9d
  ULONG v10; // ebx
  __int64 v11; // rcx
  int v12; // r15d
  unsigned int v13; // r8d
  ULONG v14; // edx
  char *v15; // r14
  unsigned int v16; // r8d
  ULONG v17; // ebp
  __int64 v18; // r9
  unsigned __int64 v19; // rsi
  char *v20; // rdx
  signed __int64 v21; // r9
  unsigned __int64 v22; // r10
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // rax
  char *v26; // rcx
  __int64 v27; // r8
  char v28; // r9
  char *v29; // rcx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  unsigned int v32; // r9d
  int v33; // ecx
  char *v34; // rdi
  __int64 v35; // rax
  ULONG v36; // r10d
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  bool v43; // cc
  unsigned __int64 v44; // rax
  __int64 v46; // [rsp+70h] [rbp+8h]
  unsigned int *v48; // [rsp+88h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v48 = Buffer;
  v8 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v10 = v8 & 0xFFFFFFF8;
    goto LABEL_79;
  }
  v11 = (unsigned __int8)Buffer & 4;
  v46 = v11;
  v12 = v11 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v13 = v12 + v9;
    v14 = v12 + v8;
    v15 = (char *)Buffer - (v11 != 0 ? 4 : 0);
    if ( v9 - v8 + 1 < NumberToFind )
    {
      v16 = -1;
      goto LABEL_29;
    }
    v17 = v13 - NumberToFind + 1;
    v18 = (1LL << (v14 & 0x3F)) - 1;
    v19 = (unsigned __int64)&v15[8 * ((unsigned __int64)v17 >> 6)];
    v20 = &v15[8 * ((unsigned __int64)v14 >> 6)];
    v21 = ~*(_QWORD *)v20 | v18;
    if ( NumberToFind > 0x7F )
    {
      v22 = v19 + 8;
      if ( (v17 & 0x3F) == 0 )
        v22 = (unsigned __int64)&v15[8 * ((unsigned __int64)(v13 - NumberToFind + 1) >> 6)];
      if ( v21 )
      {
        v20 += 8;
        if ( *(_QWORD *)v20 != -1LL )
          goto LABEL_15;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v25, v21);
        if ( v24 )
LABEL_13:
          v23 = 64;
        else
          v23 = 63 - v25;
      }
      else
      {
        v23 = 0;
      }
LABEL_19:
      v16 = ((unsigned int)((v20 - v15) >> 3) << 6) - v23;
      if ( v16 <= v17 )
      {
        v28 = NumberToFind - v23;
        v29 = &v20[8 * ((unsigned __int64)(NumberToFind - v23) >> 6)];
        while ( 1 )
        {
          v20 += 8;
          if ( v20 == v29 )
            break;
          if ( *(_QWORD *)v20 != -1LL )
            goto LABEL_15;
        }
        v30 = v28 & 0x3F;
        if ( !v30 )
          goto LABEL_27;
        v24 = !_BitScanForward64((unsigned __int64 *)&v31, ~*(_QWORD *)v20);
        if ( v24 )
          LODWORD(v31) = 64;
        if ( (unsigned int)v31 >= v30 )
          goto LABEL_27;
LABEL_15:
        while ( 1 )
        {
          v26 = v20;
          if ( (unsigned __int64)v20 > v22 )
            break;
          v20 += 8;
          if ( *(_QWORD *)v20 == -1LL )
          {
            v24 = !_BitScanReverse64((unsigned __int64 *)&v27, ~*(_QWORD *)v26);
            if ( v24 )
              goto LABEL_13;
            v23 = 63 - v27;
            goto LABEL_19;
          }
        }
      }
LABEL_68:
      v16 = -1;
      goto LABEL_28;
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v21 < 0 )
          {
            v20 += 8;
            if ( (unsigned __int64)v20 > v19 )
              goto LABEL_68;
            v21 = ~*(_QWORD *)v20;
          }
          v24 = !_BitScanReverse64((unsigned __int64 *)&v38, v21);
          if ( v24 )
            v39 = 64;
          else
            v39 = 63 - v38;
          v16 = (((unsigned int)((v20 - v15) >> 3) + 1) << 6) - v39;
          if ( v16 > v17 )
            goto LABEL_68;
          v40 = NumberToFind - v39;
          if ( NumberToFind == v39 )
            goto LABEL_27;
          v20 += 8;
          v21 = ~*(_QWORD *)v20;
          if ( v40 >= 0x40 )
            break;
LABEL_59:
          v24 = !_BitScanForward64((unsigned __int64 *)&v41, v21);
          if ( v24 )
            LODWORD(v41) = 64;
          if ( (unsigned int)v41 >= v40 )
            goto LABEL_27;
        }
        if ( *(_QWORD *)v20 == -1LL )
        {
          v40 -= 64;
          if ( !v40 )
            goto LABEL_27;
          v20 += 8;
          v21 = ~*(_QWORD *)v20;
          goto LABEL_59;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v33 = 0;
      v34 = &v15[8 * ((unsigned __int64)v13 >> 6)];
      while ( v21 != -1 )
      {
LABEL_40:
        v24 = !_BitScanForward64((unsigned __int64 *)&v35, v21);
        if ( v24 )
          LODWORD(v35) = 64;
        if ( v33 + (int)v35 >= NumberToFind )
        {
          LODWORD(v37) = -v33;
LABEL_70:
          v16 = ((unsigned int)((v20 - v15) >> 3) << 6) + v37;
          v43 = v16 <= v17;
          goto LABEL_71;
        }
        v36 = NumberToFind;
        v37 = ~v21;
        while ( 1 )
        {
          v37 &= v37 >> (v36 >> 1);
          if ( !v37 )
            break;
          v36 -= v36 >> 1;
          if ( v36 <= 1 )
          {
            _BitScanForward64(&v37, v37);
            goto LABEL_70;
          }
        }
        if ( v20 == v34 )
          goto LABEL_68;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v42, v21);
        if ( v24 )
          v33 = 64;
        else
          v33 = 63 - v42;
        v20 += 8;
        v21 = ~*(_QWORD *)v20;
      }
      while ( 1 )
      {
        v20 += 8;
        if ( (unsigned __int64)v20 > v19 )
          goto LABEL_68;
        v21 = ~*(_QWORD *)v20;
        if ( *(_QWORD *)v20 )
        {
          v33 = 0;
          goto LABEL_40;
        }
      }
    }
    while ( v21 == -1 )
    {
      v20 += 8;
      if ( (unsigned __int64)v20 > v19 )
        goto LABEL_68;
      v21 = ~*(_QWORD *)v20;
    }
    _BitScanForward64(&v44, ~v21);
    v16 = v44 + ((unsigned int)((v20 - v15) >> 3) << 6);
    v43 = v16 <= v17;
LABEL_71:
    if ( !v43 )
      goto LABEL_68;
LABEL_27:
    if ( v16 != -1 )
      break;
LABEL_28:
    v4 = HintIndex;
LABEL_29:
    if ( !v8 )
      goto LABEL_78;
    v11 = v46;
    v32 = NumberToFind + v4;
    Buffer = v48;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v32 = SizeOfBitMap;
    v9 = v32 - 1;
    v8 = 0;
  }
  v16 -= v12;
LABEL_78:
  v10 = v16;
LABEL_79:
  if ( v10 != -1 )
    RtlClearBits(BitMapHeader, v10, NumberToFind);
  return v10;
}
