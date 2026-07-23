/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x1405927D8
 * Callers:
 *     RtlDecompressBufferProgress @ 0x1405920E0 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140389080 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // rbx
  _BYTE *v8; // r10
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rbp
  _BYTE *v12; // r8
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  _BYTE *v16; // r13
  int v17; // esi
  _BYTE *v18; // rcx
  unsigned __int64 XpressCallback; // rax
  int v20; // r14d
  bool v21; // sf
  unsigned __int64 v22; // rcx
  char v23; // r15
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r15
  signed __int64 v29; // r15
  _BYTE *v30; // rsi
  unsigned __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  _DWORD *v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  char v38; // r15
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r15
  _BYTE *v43; // rsi
  unsigned __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // r8
  __int16 v51; // ax
  unsigned __int64 v52; // rdx
  char v53; // cl
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  _BYTE *v60; // [rsp+20h] [rbp-58h]
  unsigned __int64 v61; // [rsp+28h] [rbp-50h]
  _QWORD v62[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-38h]
  int v64; // [rsp+44h] [rbp-34h]

  v64 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = &a1[a2];
  v60 = v12;
  v13 = v11 - 86;
  v14 = (unsigned __int64)(v12 - 352);
  v61 = (unsigned __int64)(v12 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v15 = (unsigned __int64)&a1[v9];
  v62[0] = a6;
  v62[1] = a7;
  v63 = v9;
  if ( v14 < v15 )
    v15 = (unsigned __int64)(v12 - 352);
  v16 = 0LL;
LABEL_8:
  v17 = *(_DWORD *)v7;
  v18 = v7;
  v7 += 4;
  if ( (unsigned __int64)v7 < v13 )
  {
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
      {
LABEL_123:
        v49 = (unsigned __int64)v60;
        goto LABEL_124;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
      v14 = v61;
      v15 = XpressCallback;
      v8 = a1;
    }
    v20 = 2 * v17 + 1;
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        if ( v20 < 0 )
        {
          *v10++ = *v7++;
          goto LABEL_20;
        }
        v21 = (v20 & 0x40000000) != 0;
        v20 *= 2;
        if ( v21 )
        {
          *(_WORD *)v10 = *(_WORD *)v7;
          v10 += 2;
          v7 += 2;
          goto LABEL_20;
        }
        v21 = (v20 & 0x40000000) != 0;
        v20 *= 2;
        *(_DWORD *)v10 = *(_DWORD *)v7;
        if ( v21 )
        {
          v10 += 3;
          v7 += 3;
          goto LABEL_20;
        }
        v10 += 4;
        v7 += 4;
        v21 = (v20 & 0x40000000) != 0;
        v20 *= 2;
        if ( v21 )
          goto LABEL_20;
LABEL_54:
        v20 *= 2;
      }
    }
    while ( 1 )
    {
      v22 = *(unsigned __int16 *)v7;
      v7 += 2;
      v23 = v22;
      v24 = (v22 >> 3) + 1;
      v25 = v23 & 7;
      if ( v25 == 7 )
      {
        if ( v16 )
        {
          v26 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
          v16 = 0LL;
        }
        else
        {
          v16 = v7++;
          v26 = *v16 & 0xF;
        }
        if ( v26 == 15 )
        {
          if ( (unsigned __int64)(v7 + 7) >= v13 )
            goto LABEL_67;
          v27 = (unsigned __int8)*v7++;
          if ( v27 == 255 )
          {
            v28 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v28 )
            {
              v28 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v28 < 0x16 || &v10[v28 + 3] < v10 )
              return 3221226050LL;
            v27 = v28 - 22;
          }
          v26 = v27 + 15;
        }
        v25 = v26 + 7;
      }
      v29 = v25 + 3;
      v30 = &v10[-v24];
      if ( &v10[-v24] < v8 )
        return 3221226050LL;
      if ( v24 >= 4 )
      {
LABEL_44:
        *(_DWORD *)v10 = *(_DWORD *)v30;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v30 + 1);
        if ( v29 >= 9 )
        {
          v10 += 8;
          v34 = v30 + 8;
          for ( v29 -= 8LL; ; v29 -= 16LL )
          {
            if ( (unsigned __int64)v10 >= v15 )
            {
              if ( (unsigned __int64)v10 >= v14 )
                goto LABEL_113;
              v35 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
              v14 = v61;
              v15 = v35;
            }
            *(_DWORD *)v10 = *v34;
            *((_DWORD *)v10 + 1) = v34[1];
            *((_DWORD *)v10 + 2) = v34[2];
            *((_DWORD *)v10 + 3) = v34[3];
            if ( v29 < 17 )
              break;
            v10 += 16;
            v34 += 4;
          }
          v8 = a1;
        }
        v10 += v29;
        goto LABEL_53;
      }
      *v10 = *v30;
      v31 = v24 - 1;
      if ( v31 )
      {
        v10[1] = v30[1];
        if ( v31 == 1 )
        {
          v10 += 2;
          v33 = -2LL;
          goto LABEL_43;
        }
        v32 = v30[2];
      }
      else
      {
        v10[1] = *v30;
        v32 = *v30;
      }
      v10[2] = v32;
      v33 = -3LL;
      v10 += 3;
LABEL_43:
      v29 += v33;
      if ( v29 )
        goto LABEL_44;
LABEL_53:
      if ( v20 >= 0 )
        goto LABEL_54;
LABEL_20:
      v20 *= 2;
      if ( !v20 )
        goto LABEL_8;
    }
  }
  while ( 1 )
  {
    v7 = v18 + 4;
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
        goto LABEL_123;
      v36 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
      v14 = v61;
      v15 = v36;
      v8 = a1;
    }
    v20 = 2 * v17 + 1;
    if ( v17 < 0 )
      break;
    while ( v20 >= 0 )
    {
      v21 = (v20 & 0x40000000) != 0;
      v20 *= 2;
      if ( v21 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        *(_WORD *)v10 = *(_WORD *)v7;
        v10 += 2;
        v7 += 2;
        goto LABEL_110;
      }
      v21 = (v20 & 0x40000000) != 0;
      v20 *= 2;
      if ( v21 )
      {
        if ( (unsigned __int64)(v7 + 2) >= v11 )
          return 3221226050LL;
        *(_WORD *)v10 = *(_WORD *)v7;
        v10[2] = v7[2];
        v10 += 3;
        v7 += 3;
        goto LABEL_110;
      }
      v20 *= 2;
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v48 = *(_DWORD *)v7;
      v7 += 4;
      *(_DWORD *)v10 = v48;
      v10 += 4;
      if ( v20 < 0 )
        goto LABEL_110;
LABEL_97:
      v20 *= 2;
    }
    if ( (unsigned __int64)v7 >= v11 )
      return 3221226050LL;
    *v10++ = *v7++;
LABEL_110:
    v18 = v7;
    v20 *= 2;
    if ( v20 )
      break;
    if ( (unsigned __int64)(v7 + 3) >= v11 )
      return 3221226050LL;
    v17 = *(_DWORD *)v7;
  }
  if ( v7 == (_BYTE *)v11 )
  {
    v49 = (unsigned __int64)v60;
    while ( 1 )
    {
LABEL_118:
      if ( v20 >= 0 )
      {
        v20 *= 2;
        goto LABEL_125;
      }
LABEL_120:
      while ( 1 )
      {
        v20 *= 2;
        if ( v20 )
          break;
        if ( (unsigned __int64)(v7 + 3) >= v11 )
          return 3221226050LL;
        v17 = *(_DWORD *)v7;
        v7 += 4;
LABEL_124:
        v20 = 2 * v17 + 1;
        if ( v17 < 0 )
          break;
LABEL_125:
        while ( v20 >= 0 )
        {
          v20 *= 2;
          if ( (unsigned __int64)(v7 + 2) > v11 || (unsigned __int64)(v10 + 2) > v49 )
            return 3221226050LL;
          v51 = *(_WORD *)v7;
          v7 += 2;
          *(_WORD *)v10 = v51;
          v10 += 2;
          if ( v20 < 0 )
            goto LABEL_120;
          v20 *= 2;
        }
        if ( (unsigned __int64)v7 >= v11 || (unsigned __int64)v10 >= v49 )
          return 3221226050LL;
        *v10++ = *v7++;
      }
      if ( v7 == (_BYTE *)v11 )
        break;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
      {
        if ( (unsigned __int64)v10 < v49 )
          return 3221226050LL;
        break;
      }
      v52 = *(unsigned __int16 *)v7;
      v7 += 2;
      v53 = v52;
      v54 = (v52 >> 3) + 1;
      v55 = v53 & 7;
      if ( v55 == 7 )
      {
        if ( v16 )
        {
          v56 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
          v16 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v16 = v7++;
          v56 = *v16 & 0xF;
        }
        if ( v56 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v57 = (unsigned __int8)*v7++;
          if ( v57 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v58 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v58 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v58 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v58 < 0x16 || &v10[v58 + 3] < v10 )
              return 3221226050LL;
            v57 = v58 - 22;
          }
          v56 = v57 + 15;
        }
        v55 = v56 + 7;
      }
      v59 = v55 + 3;
      if ( &v10[-v54] < v8 || (unsigned __int64)&v10[v59] > v49 )
        return 3221226050LL;
      qmemcpy(v10, &v10[-v54], v59);
      v10 += v59;
    }
    *a5 = (_DWORD)v10 - (_DWORD)v8;
    return 0LL;
  }
  if ( (unsigned __int64)(v7 + 1) < v11 )
  {
    v37 = *(unsigned __int16 *)v7;
    v7 += 2;
    v38 = v37;
    v24 = (v37 >> 3) + 1;
    v39 = v38 & 7;
    if ( v39 == 7 )
    {
      if ( v16 )
      {
        v40 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
        v16 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v16 = v7++;
        v40 = *v16 & 0xF;
      }
      if ( v40 == 15 )
      {
LABEL_67:
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v41 = (unsigned __int8)*v7++;
        if ( v41 == 255 )
        {
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v42 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v42 )
          {
            if ( (unsigned __int64)(v7 + 3) >= v11 )
              return 3221226050LL;
            v42 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v42 < 0x16 || &v10[v42 + 3] < v10 )
            return 3221226050LL;
          v41 = v42 - 22;
        }
        v40 = v41 + 15;
      }
      v39 = v40 + 7;
    }
    v29 = v39 + 3;
    v43 = &v10[-v24];
    if ( &v10[-v24] < v8 )
      return 3221226050LL;
    if ( v24 >= 4 )
    {
LABEL_87:
      *(_DWORD *)v10 = *(_DWORD *)v43;
      *((_DWORD *)v10 + 1) = *((_DWORD *)v43 + 1);
      if ( v29 >= 9 )
      {
        v10 += 8;
        v34 = v43 + 8;
        for ( v29 -= 8LL; ; v29 -= 16LL )
        {
          if ( (unsigned __int64)v10 >= v15 )
          {
            if ( (unsigned __int64)v10 >= v14 )
            {
LABEL_113:
              v49 = (unsigned __int64)v60;
              if ( &v10[v29] <= v60 )
              {
                v8 = a1;
                qmemcpy(v10, v34, v29);
                v10 += v29;
                goto LABEL_118;
              }
              return 3221226050LL;
            }
            v47 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
            v14 = v61;
            v15 = v47;
          }
          *(_DWORD *)v10 = *v34;
          *((_DWORD *)v10 + 1) = v34[1];
          *((_DWORD *)v10 + 2) = v34[2];
          *((_DWORD *)v10 + 3) = v34[3];
          if ( v29 < 17 )
            break;
          v10 += 16;
          v34 += 4;
        }
        v8 = a1;
      }
      v10 += v29;
LABEL_96:
      if ( v20 < 0 )
        goto LABEL_110;
      goto LABEL_97;
    }
    *v10 = *v43;
    v44 = v24 - 1;
    if ( v44 )
    {
      v10[1] = v43[1];
      if ( v44 == 1 )
      {
        v10 += 2;
        v46 = -2LL;
        goto LABEL_86;
      }
      v45 = v43[2];
    }
    else
    {
      v10[1] = *v43;
      v45 = *v43;
    }
    v10[2] = v45;
    v46 = -3LL;
    v10 += 3;
LABEL_86:
    v29 += v46;
    if ( !v29 )
      goto LABEL_96;
    goto LABEL_87;
  }
  v49 = (unsigned __int64)v60;
  if ( v10 >= v60 )
    goto LABEL_118;
  return 3221226050LL;
}
