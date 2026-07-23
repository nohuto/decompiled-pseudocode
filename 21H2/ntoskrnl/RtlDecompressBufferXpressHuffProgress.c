/*
 * XREFs of RtlDecompressBufferXpressHuffProgress @ 0x1405921B0
 * Callers:
 *     RtlDecompressBufferProgress @ 0x1405920E0 (RtlDecompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x140201DA0 (XpressBuildHuffmanDecodingTable.c)
 *     RtlpMakeXpressCallback @ 0x140389080 (RtlpMakeXpressCallback.c)
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
  unsigned int v8; // esi
  unsigned __int8 *v9; // rbx
  _DWORD *v10; // r11
  _DWORD *v12; // rdi
  __m128i *v13; // r14
  unsigned __int64 v14; // r12
  _DWORD *v15; // r10
  __int64 v16; // rbp
  _DWORD *v17; // rcx
  unsigned __int16 *v18; // rbx
  int v19; // eax
  int v20; // r15d
  unsigned int v21; // r15d
  unsigned __int64 v22; // r13
  unsigned __int64 XpressCallback; // r9
  __int16 v24; // si
  int v25; // eax
  __int64 v26; // rcx
  __int16 v27; // si
  int v28; // edx
  int v29; // ecx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r8
  int v35; // edx
  char *v36; // rsi
  unsigned __int64 v37; // r8
  char v38; // al
  __int64 v39; // rax
  _DWORD *v40; // rsi
  _DWORD *v41; // rax
  unsigned __int64 v42; // rcx
  __int16 v43; // si
  int v44; // eax
  __int64 v45; // rcx
  int v46; // edx
  int v47; // ecx
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r14
  int v51; // edx
  _DWORD *v52; // rax
  unsigned __int64 v53; // rcx
  __m128i *v54; // [rsp+20h] [rbp-58h]
  _DWORD *v55; // [rsp+28h] [rbp-50h]
  _QWORD v56[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-38h]
  int v58; // [rsp+44h] [rbp-34h]
  unsigned __int64 v60; // [rsp+A8h] [rbp+30h]
  int v62; // [rsp+C0h] [rbp+48h]

  v8 = 4096;
  v62 = 4096;
  v9 = a3;
  v58 = 0;
  LODWORD(v10) = (_DWORD)a1;
  if ( !a6 )
    return 3221225704LL;
  v12 = a1;
  v13 = (__m128i *)((a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v14 = (unsigned __int64)&a3[a4];
  v15 = (_DWORD *)((char *)a1 + a2);
  v54 = v13;
  v60 = (unsigned __int64)v15;
  if ( !a7 || a2 < 0x1000 )
  {
    v8 = a2;
    v62 = a2;
  }
  v56[0] = a7;
  v56[1] = a8;
  v57 = v8;
LABEL_7:
  if ( (__int64)(v14 - (_QWORD)v9) < 260 )
  {
    if ( v12 != v15 )
      return 3221226050LL;
    goto LABEL_106;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v13, (__int64)v9) )
    return 3221226050LL;
  v15 = (_DWORD *)v60;
  v16 = 16LL;
  v17 = (_DWORD *)v60;
  v18 = (unsigned __int16 *)(v9 + 256);
  v19 = v18[1];
  v20 = *v18;
  v9 = (unsigned __int8 *)(v18 + 2);
  v21 = v19 + (v20 << 16);
  if ( (unsigned __int64)(v12 + 0x4000) <= v60 )
    v17 = v12 + 0x4000;
  v55 = v17;
  v22 = (unsigned __int64)(v17 - 47);
  if ( v12 >= v17 - 47 )
    goto LABEL_66;
  XpressCallback = (unsigned __int64)v12 + v8;
  if ( v22 < XpressCallback )
    XpressCallback = (unsigned __int64)(v17 - 47);
  while ( 1 )
  {
    v24 = v13[66].m128i_i16[(unsigned __int64)v21 >> 22];
    if ( v24 > 0 )
    {
      v26 = v24 & 0xF;
      v21 <<= v26;
      v16 -= v26;
    }
    else
    {
      v21 <<= 10;
      v16 -= 10LL;
      do
      {
        --v16;
        v25 = (unsigned __int64)v21 >> 31;
        v21 *= 2;
        v24 = v13[194].m128i_i16[(__int16)(v25 - v24)];
      }
      while ( v24 <= 0 );
    }
    v27 = (v24 >> 4) - 256;
    if ( v16 < 0 )
      break;
LABEL_27:
    if ( v27 >= 0 )
    {
      v15 = (_DWORD *)v60;
      if ( !v27 && (unsigned __int64)v9 >= v14 && v12 == (_DWORD *)v60 )
      {
        LODWORD(v10) = (_DWORD)a1;
        goto LABEL_106;
      }
      v29 = v27 / 16;
      v30 = v27 % 16;
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
      v33 = v30 + 3;
      v34 = (1LL << v29) + ((unsigned __int64)v21 >> (31 - (unsigned __int8)v29) >> 1);
      v21 <<= v29;
      v16 -= v29;
      if ( v16 < 0 )
      {
        if ( (unsigned __int64)v12 >= v22 )
        {
          v10 = a1;
          goto LABEL_97;
        }
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v35 = *(unsigned __int16 *)v9;
        v9 += 2;
        v21 += v35 << -(char)v16;
        v16 += 16LL;
      }
      v36 = (char *)v12 - v34;
      if ( (_DWORD *)((char *)v12 - v34) < a1 )
        return 3221226050LL;
      if ( v34 < 4 )
      {
        *(_BYTE *)v12 = *v36;
        v37 = v34 - 1;
        if ( v37 )
        {
          *((_BYTE *)v12 + 1) = v36[1];
          if ( v37 != 1 )
          {
            v38 = v36[2];
            goto LABEL_54;
          }
          v12 = (_DWORD *)((char *)v12 + 2);
          v39 = -2LL;
        }
        else
        {
          *((_BYTE *)v12 + 1) = *v36;
          v38 = *v36;
LABEL_54:
          *((_BYTE *)v12 + 2) = v38;
          v39 = -3LL;
          v12 = (_DWORD *)((char *)v12 + 3);
        }
        v33 += v39;
        if ( !v33 )
          goto LABEL_15;
      }
      *v12 = *(_DWORD *)v36;
      v12[1] = *((_DWORD *)v36 + 1);
      if ( v33 >= 9 )
      {
        v12 += 2;
        v40 = v36 + 8;
        for ( v33 -= 8LL; ; v33 -= 16LL )
        {
          if ( (unsigned __int64)v12 >= XpressCallback )
          {
            if ( (unsigned __int64)v12 >= v22 )
            {
              v15 = (_DWORD *)v60;
              v41 = (_DWORD *)((char *)v12 + v33);
              if ( (unsigned __int64)v12 + v33 <= v60 )
              {
                v42 = v33;
                v13 = v54;
                qmemcpy(v12, v40, v42);
                v17 = v55;
                v12 = v41;
LABEL_66:
                v10 = a1;
                goto LABEL_67;
              }
              return 3221226050LL;
            }
            XpressCallback = RtlpMakeXpressCallback((__int64)v56, v22, (__int64)v12);
          }
          *v12 = *v40;
          v12[1] = v40[1];
          v12[2] = v40[2];
          v12[3] = v40[3];
          if ( v33 < 0x11 )
            break;
          v12 += 4;
          v40 += 4;
        }
      }
      v12 = (_DWORD *)((char *)v12 + v33);
LABEL_15:
      v13 = v54;
    }
    else
    {
      *(_BYTE *)v12 = v27;
      v12 = (_DWORD *)((char *)v12 + 1);
    }
  }
  if ( (unsigned __int64)v12 < XpressCallback )
  {
LABEL_25:
    if ( (unsigned __int64)(v9 + 1) >= v14 )
      return 3221226050LL;
    v28 = *(unsigned __int16 *)v9;
    v9 += 2;
    v21 += v28 << -(char)v16;
    v16 += 16LL;
    goto LABEL_27;
  }
  if ( (unsigned __int64)v12 < v22 )
  {
    XpressCallback = RtlpMakeXpressCallback((__int64)v56, v22, (__int64)v12);
    goto LABEL_25;
  }
  v15 = (_DWORD *)v60;
  v10 = a1;
LABEL_76:
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v46 = *(unsigned __int16 *)v9;
  v9 += 2;
  v17 = v55;
  v21 += v46 << -(char)v16;
  v16 += 16LL;
  while ( v27 < 0 )
  {
    *(_BYTE *)v12 = v27;
    v12 = (_DWORD *)((char *)v12 + 1);
LABEL_67:
    if ( v12 >= v17 )
    {
      v8 = v62;
      goto LABEL_7;
    }
    v43 = v13[66].m128i_i16[(unsigned __int64)v21 >> 22];
    if ( v43 > 0 )
    {
      v45 = v43 & 0xF;
      v21 <<= v45;
      v16 -= v45;
      v17 = v55;
    }
    else
    {
      v21 <<= 10;
      v16 -= 10LL;
      do
      {
        --v16;
        v44 = (unsigned __int64)v21 >> 31;
        v21 *= 2;
        v43 = v13[194].m128i_i16[(__int16)(v44 - v43)];
      }
      while ( v43 <= 0 );
    }
    v27 = (v43 >> 4) - 256;
    if ( v16 < 0 )
      goto LABEL_76;
  }
  if ( !v27 && (unsigned __int64)v9 >= v14 && v12 == v15 )
  {
LABEL_106:
    *a5 = (_DWORD)v12 - (_DWORD)v10;
    return 0LL;
  }
  v47 = v27 / 16;
  v48 = v27 % 16;
  if ( v48 != 15 )
    goto LABEL_94;
  if ( (unsigned __int64)v9 >= v14 )
    return 3221226050LL;
  v49 = *v9++;
  if ( v49 != 255 )
  {
LABEL_93:
    v48 = v49 + 15;
LABEL_94:
    v33 = v48 + 3;
    v34 = (1LL << v47) + ((unsigned __int64)v21 >> (31 - (unsigned __int8)v47) >> 1);
    v21 <<= v47;
    v16 -= v47;
    if ( v16 < 0 )
    {
LABEL_97:
      if ( (unsigned __int64)(v9 + 1) >= v14 )
        return 3221226050LL;
      v51 = *(unsigned __int16 *)v9;
      v9 += 2;
      v21 += v51 << -(char)v16;
      v16 += 16LL;
    }
    if ( (_DWORD *)((char *)v12 - v34) < v10 )
      return 3221226050LL;
    v52 = (_DWORD *)((char *)v12 + v33);
    if ( (_DWORD *)((char *)v12 + v33) > v15 )
      return 3221226050LL;
    v53 = v33;
    v13 = v54;
    qmemcpy(v12, (char *)v12 - v34, v53);
    v17 = v55;
    v12 = v52;
    goto LABEL_67;
  }
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v50 = *(unsigned __int16 *)v9;
  v9 += 2;
  if ( !v50 )
  {
    if ( (unsigned __int64)(v9 + 3) >= v14 )
      return 3221226050LL;
    v50 = *(unsigned int *)v9;
    v9 += 4;
  }
  if ( v50 >= 0xF && (_DWORD *)((char *)v12 + v50 + 3) >= v12 )
  {
    v49 = v50 - 15;
    goto LABEL_93;
  }
  return 3221226050LL;
}
