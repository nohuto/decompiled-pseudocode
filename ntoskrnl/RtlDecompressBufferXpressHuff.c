/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1402B4E70
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1402B53E0 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int16 v23; // di
  int v24; // edx
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdi
  _BYTE *v30; // rcx
  int v31; // edx
  _DWORD *v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  char v36; // al
  int v38; // edx
  __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int16 v41; // di
  __int64 v42; // rcx
  int v43; // edx
  int v44; // eax
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r10
  _BYTE *v48; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v48 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_42;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    return 3221226050LL;
  v13 = 16LL;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = (_BYTE *)v12;
  v16 = v14[1];
  v17 = *v14;
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v16 + (v17 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v15 = v10 + 0x10000;
  v19 = (unsigned __int64)(v15 - 188);
  if ( v10 < v15 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v13 -= 10LL;
            do
            {
              --v13;
              v33 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v33 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v13 -= v21;
          }
          v22 = (unsigned __int16)v20 >> 4;
          v23 = v22 - 256;
          if ( v13 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_45;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v24 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v24 << -(char)v13;
            v13 += 16LL;
          }
          if ( v23 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( v22 == 256 && (unsigned __int64)v7 >= v11 && v10 == v48 )
          goto LABEL_42;
        v25 = (v22 - 256) / 16;
        v26 = (v22 - 256) % 16;
        if ( v26 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v34 = *v7++;
          if ( v34 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v46 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v46 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v46 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v46 < 0xF || &v10[v46 + 3] < v10 )
              return 3221226050LL;
            v34 = v46 - 15;
          }
          v26 = v34 + 15;
        }
        v27 = v26;
        v28 = v26 + 3;
        v29 = (1LL << v25) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v25) >> 1);
        v18 <<= v25;
        v13 -= v25;
        if ( v13 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_59;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v31 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v31 << -(char)v13;
          v13 += 16LL;
        }
        v30 = &v10[-v29];
        if ( &v10[-v29] < a1 )
          return 3221226050LL;
        if ( v29 < 4 )
          break;
LABEL_21:
        *(_DWORD *)v10 = *(_DWORD *)v30;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v30 + 1);
        if ( v28 >= 9 )
        {
          v10 += 8;
          v32 = v30 + 8;
          v28 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v32;
            *((_DWORD *)v10 + 1) = v32[1];
            *((_DWORD *)v10 + 2) = v32[2];
            *((_DWORD *)v10 + 3) = v32[3];
            if ( v28 < 0x11 )
              goto LABEL_22;
            v10 += 16;
            v32 += 4;
            v28 -= 16LL;
          }
          if ( &v10[v28] <= v48 )
          {
            qmemcpy(v10, v32, v28);
            v10 += v28;
            goto LABEL_53;
          }
          return 3221226050LL;
        }
LABEL_22:
        v10 += v28;
      }
      *v10 = *v30;
      v35 = v29 - 1;
      if ( v35 )
      {
        v10[1] = v30[1];
        if ( v35 == 1 )
        {
          v28 -= 2LL;
          v10 += 2;
          goto LABEL_39;
        }
        v36 = v30[2];
      }
      else
      {
        v10[1] = *v30;
        v36 = *v30;
      }
      v10[2] = v36;
      v28 = v27;
      v10 += 3;
LABEL_39:
      if ( v28 )
        goto LABEL_21;
    }
  }
  while ( 1 )
  {
LABEL_53:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v48;
      goto LABEL_3;
    }
    v41 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v41 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v44 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v41 = *(_WORD *)(v9 + 2LL * (__int16)(v44 - v41) + 3104);
      }
      while ( v41 <= 0 );
    }
    else
    {
      v42 = v41 & 0xF;
      v18 <<= v42;
      v13 -= v42;
    }
    v23 = ((unsigned __int16)v41 >> 4) - 256;
    if ( v13 < 0 )
    {
LABEL_45:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v38 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v38 << -(char)v13;
        v13 += 16LL;
        goto LABEL_57;
      }
      return 3221226050LL;
    }
LABEL_57:
    if ( v23 >= 0 )
      break;
    *v10++ = v23;
  }
  if ( !v23 && (unsigned __int64)v7 >= v11 && v10 == v48 )
  {
LABEL_42:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v39 = v23 / 16;
  v40 = v23 % 16;
  if ( v40 != 15 )
    goto LABEL_49;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v45 = *v7++;
  if ( v45 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v47 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v47 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v47 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v47 >= 0xF && &v10[v47 + 3] >= v10 )
    {
      v45 = v47 - 15;
      goto LABEL_67;
    }
  }
  else
  {
LABEL_67:
    v40 = v45 + 15;
LABEL_49:
    v28 = v40 + 3;
    v29 = (1LL << v39) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v39) >> 1);
    v18 <<= v39;
    v13 -= v39;
    if ( v13 < 0 )
    {
LABEL_59:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v43 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v43 << -(char)v13;
      v13 += 16LL;
    }
    if ( &v10[-v29] >= a1 && &v10[v28] <= v48 )
    {
      qmemcpy(v10, &v10[-v29], v28);
      v10 += v28;
      goto LABEL_53;
    }
  }
  return 3221226050LL;
}
