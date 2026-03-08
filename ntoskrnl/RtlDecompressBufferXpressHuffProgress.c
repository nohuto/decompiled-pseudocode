/*
 * XREFs of RtlDecompressBufferXpressHuffProgress @ 0x1405B1224
 * Callers:
 *     RtlDecompressBufferProgress @ 0x1405B1154 (RtlDecompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1402B53E0 (XpressBuildHuffmanDecodingTable.c)
 *     RtlpMakeXpressCallback @ 0x1405B2518 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuffProgress(
        _DWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rbp
  __m128i *v11; // rsi
  _DWORD *v12; // rdi
  _DWORD *v13; // r11
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  _DWORD *v16; // rcx
  unsigned __int16 *v17; // rbp
  int v18; // eax
  int v19; // r14d
  unsigned int v20; // r14d
  unsigned __int64 v21; // r13
  unsigned __int64 XpressCallback; // r10
  __int16 v23; // bx
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int16 v26; // bx
  __int16 v27; // si
  int v28; // edx
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r8
  int v36; // edx
  char *v37; // rsi
  unsigned __int64 v38; // r8
  char v39; // al
  _DWORD *v40; // rsi
  _DWORD *v41; // rax
  __int16 v42; // si
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rdx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  int v50; // edx
  unsigned __int64 v51; // [rsp+20h] [rbp-58h]
  _DWORD *v52; // [rsp+28h] [rbp-50h]
  _QWORD v53[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-38h]
  int v55; // [rsp+44h] [rbp-34h]
  __m128i *v57; // [rsp+A8h] [rbp+30h]
  int v59; // [rsp+C0h] [rbp+48h]

  v8 = 4096;
  v59 = 4096;
  v9 = a3;
  v55 = 0;
  if ( !a6 )
    return 3221225704LL;
  v11 = (__m128i *)((a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = a1;
  v13 = (_DWORD *)((char *)a1 + a2);
  v14 = (unsigned __int64)&a3[a4];
  v57 = v11;
  v51 = (unsigned __int64)v13;
  if ( !a7 || a2 < 0x1000 )
  {
    v8 = a2;
    v59 = a2;
  }
  v53[0] = a7;
  v53[1] = a8;
  v54 = v8;
LABEL_7:
  if ( (__int64)(v14 - (_QWORD)v9) < 260 )
  {
    if ( v12 != v13 )
      return 3221226050LL;
    goto LABEL_102;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v11, (__int64)v9) )
    return 3221226050LL;
  v13 = (_DWORD *)v51;
  v15 = 16LL;
  v16 = (_DWORD *)v51;
  v17 = (unsigned __int16 *)(v9 + 256);
  v18 = v17[1];
  v19 = *v17;
  v9 = (unsigned __int8 *)(v17 + 2);
  v20 = v18 + (v19 << 16);
  if ( (unsigned __int64)(v12 + 0x4000) <= v51 )
    v16 = v12 + 0x4000;
  v52 = v16;
  v21 = (unsigned __int64)(v16 - 47);
  if ( v12 < v16 - 47 )
  {
    XpressCallback = (unsigned __int64)v12 + v8;
    if ( v21 < XpressCallback )
      XpressCallback = (unsigned __int64)(v16 - 47);
    while ( 1 )
    {
      v23 = v11[66].m128i_i16[(unsigned __int64)v20 >> 22];
      if ( v23 > 0 )
      {
        v25 = v23 & 0xF;
        v20 <<= v25;
        v15 -= v25;
      }
      else
      {
        v20 <<= 10;
        v15 -= 10LL;
        do
        {
          --v15;
          v24 = (unsigned __int64)v20 >> 31;
          v20 *= 2;
          v23 = v11[194].m128i_i16[(__int16)(v24 - v23)];
        }
        while ( v23 <= 0 );
      }
      v26 = (unsigned __int16)v23 >> 4;
      v27 = v26 - 256;
      if ( v15 < 0 )
      {
        if ( (unsigned __int64)v12 >= XpressCallback )
        {
          if ( (unsigned __int64)v12 >= v21 )
          {
            v13 = (_DWORD *)v51;
LABEL_76:
            if ( (unsigned __int64)(v9 + 1) >= v14 )
              return 3221226050LL;
            v45 = *(unsigned __int16 *)v9;
            v9 += 2;
            v20 += v45 << -(char)v15;
            v15 += 16LL;
            goto LABEL_78;
          }
          XpressCallback = RtlpMakeXpressCallback(v53, v21, v12);
        }
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v28 = *(unsigned __int16 *)v9;
        v9 += 2;
        v20 += v28 << -(char)v15;
        v15 += 16LL;
      }
      if ( v27 < 0 )
      {
        *(_BYTE *)v12 = v26;
        v12 = (_DWORD *)((char *)v12 + 1);
        goto LABEL_15;
      }
      v13 = (_DWORD *)v51;
      if ( v26 == 256 && (unsigned __int64)v9 >= v14 && v12 == (_DWORD *)v51 )
        goto LABEL_102;
      v29 = (v26 - 256) / 16;
      v30 = (v26 - 256) % 16;
      if ( v30 == 15 )
      {
        if ( (unsigned __int64)v9 >= v14 )
          return 3221226050LL;
        v31 = *v9++;
        if ( v31 == 255 )
        {
          if ( (unsigned __int64)(v9 + 1) >= v14 )
            return 3221226050LL;
          v32 = *(unsigned __int16 *)v9;
          v9 += 2;
          if ( !v32 )
          {
            if ( (unsigned __int64)(v9 + 3) >= v14 )
              return 3221226050LL;
            v32 = *(unsigned int *)v9;
            v9 += 4;
          }
          if ( v32 < 0xF || (_DWORD *)((char *)v12 + v32 + 3) < v12 )
            return 3221226050LL;
          v31 = v32 - 15;
        }
        v30 = v31 + 15;
      }
      v33 = v30;
      v34 = v30 + 3;
      v35 = (1LL << v29) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v29) >> 1);
      v20 <<= v29;
      v15 -= v29;
      if ( v15 < 0 )
      {
        if ( (unsigned __int64)v12 >= v21 )
          goto LABEL_95;
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v36 = *(unsigned __int16 *)v9;
        v9 += 2;
        v20 += v36 << -(char)v15;
        v15 += 16LL;
      }
      v37 = (char *)v12 - v35;
      if ( (_DWORD *)((char *)v12 - v35) < a1 )
        return 3221226050LL;
      if ( v35 < 4 )
        break;
LABEL_56:
      *v12 = *(_DWORD *)v37;
      v12[1] = *((_DWORD *)v37 + 1);
      if ( v34 >= 9 )
      {
        v12 += 2;
        v40 = v37 + 8;
        for ( v34 -= 8LL; ; v34 -= 16LL )
        {
          if ( (unsigned __int64)v12 >= XpressCallback )
          {
            if ( (unsigned __int64)v12 >= v21 )
            {
              v13 = (_DWORD *)v51;
              v41 = (_DWORD *)((char *)v12 + v34);
              if ( (unsigned __int64)v12 + v34 <= v51 )
              {
LABEL_65:
                qmemcpy(v12, v40, v34);
                v12 = v41;
                goto LABEL_66;
              }
              return 3221226050LL;
            }
            XpressCallback = RtlpMakeXpressCallback(v53, v21, v12);
          }
          *v12 = *v40;
          v12[1] = v40[1];
          v12[2] = v40[2];
          v12[3] = v40[3];
          if ( v34 < 0x11 )
            break;
          v12 += 4;
          v40 += 4;
        }
      }
      v12 = (_DWORD *)((char *)v12 + v34);
LABEL_15:
      v11 = v57;
    }
    *(_BYTE *)v12 = *v37;
    v38 = v35 - 1;
    if ( v38 )
    {
      *((_BYTE *)v12 + 1) = v37[1];
      if ( v38 == 1 )
      {
        v34 -= 2LL;
        v12 = (_DWORD *)((char *)v12 + 2);
        goto LABEL_55;
      }
      v39 = v37[2];
    }
    else
    {
      *((_BYTE *)v12 + 1) = *v37;
      v39 = *v37;
    }
    *((_BYTE *)v12 + 2) = v39;
    v34 = v33;
    v12 = (_DWORD *)((char *)v12 + 3);
LABEL_55:
    if ( !v34 )
      goto LABEL_15;
    goto LABEL_56;
  }
  while ( 1 )
  {
    if ( v12 >= v16 )
    {
      v8 = v59;
      goto LABEL_7;
    }
    v42 = v11[66].m128i_i16[(unsigned __int64)v20 >> 22];
    if ( v42 > 0 )
    {
      v44 = v42 & 0xF;
      v20 <<= v44;
      v15 -= v44;
    }
    else
    {
      v20 <<= 10;
      v15 -= 10LL;
      do
      {
        --v15;
        v43 = (unsigned __int64)v20 >> 31;
        v20 *= 2;
        v42 = v57[194].m128i_i16[(__int16)(v43 - v42)];
      }
      while ( v42 <= 0 );
    }
    v27 = ((unsigned __int16)v42 >> 4) - 256;
    if ( v15 < 0 )
      goto LABEL_76;
LABEL_78:
    if ( v27 >= 0 )
      break;
    *(_BYTE *)v12 = v27;
    v12 = (_DWORD *)((char *)v12 + 1);
LABEL_66:
    v11 = v57;
    v16 = v52;
  }
  if ( !v27 && (unsigned __int64)v9 >= v14 && v12 == v13 )
  {
LABEL_102:
    *a5 = (_DWORD)v12 - (_DWORD)a1;
    return 0LL;
  }
  v46 = v27 / 16;
  v47 = v27 % 16;
  if ( v47 != 15 )
    goto LABEL_94;
  if ( (unsigned __int64)v9 >= v14 )
    return 3221226050LL;
  v48 = *v9++;
  if ( v48 != 255 )
  {
LABEL_93:
    v47 = v48 + 15;
LABEL_94:
    v34 = v47 + 3;
    v35 = (1LL << v46) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v46) >> 1);
    v20 <<= v46;
    v15 -= v46;
    if ( v15 < 0 )
    {
LABEL_95:
      if ( (unsigned __int64)(v9 + 1) >= v14 )
        return 3221226050LL;
      v50 = *(unsigned __int16 *)v9;
      v9 += 2;
      v20 += v50 << -(char)v15;
      v15 += 16LL;
    }
    v40 = (_DWORD *)((char *)v12 - v35);
    if ( (_DWORD *)((char *)v12 - v35) >= a1 )
    {
      v41 = (_DWORD *)((char *)v12 + v34);
      if ( (_DWORD *)((char *)v12 + v34) <= v13 )
        goto LABEL_65;
    }
    return 3221226050LL;
  }
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v49 = *(unsigned __int16 *)v9;
  v9 += 2;
  if ( !v49 )
  {
    if ( (unsigned __int64)(v9 + 3) >= v14 )
      return 3221226050LL;
    v49 = *(unsigned int *)v9;
    v9 += 4;
  }
  if ( v49 >= 0xF && (_DWORD *)((char *)v12 + v49 + 3) >= v12 )
  {
    v48 = v49 - 15;
    goto LABEL_93;
  }
  return 3221226050LL;
}
