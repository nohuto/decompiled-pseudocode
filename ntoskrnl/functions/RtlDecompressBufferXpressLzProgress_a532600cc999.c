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
  _BYTE *v8; // r11
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rbp
  _BYTE *v12; // r10
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r8
  _BYTE *v16; // r9
  int v17; // esi
  _BYTE *v18; // rcx
  __int64 XpressCallback; // rax
  int v20; // r14d
  bool v21; // sf
  unsigned __int64 v22; // rcx
  char v23; // r15
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r15
  signed __int64 v29; // rdx
  _BYTE *v30; // rsi
  signed __int64 v31; // r15
  unsigned __int64 v32; // rcx
  char v33; // al
  _DWORD *v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  char v37; // r15
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r15
  signed __int64 v42; // rdx
  _BYTE *v43; // rsi
  unsigned __int64 v44; // rcx
  char v45; // al
  int v46; // eax
  unsigned __int64 v47; // r10
  __int16 v49; // ax
  unsigned __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  _BYTE *v58; // [rsp+20h] [rbp-58h]
  _BYTE *v59; // [rsp+28h] [rbp-50h]
  _QWORD v60[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-38h]
  int v62; // [rsp+44h] [rbp-34h]

  v62 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = &a1[a2];
  v59 = v12;
  v13 = v11 - 86;
  v14 = (unsigned __int64)(v12 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v15 = (unsigned __int64)&a1[v9];
  v60[0] = a6;
  v60[1] = a7;
  v61 = v9;
  if ( v14 < v15 )
    v15 = (unsigned __int64)(v12 - 352);
  v16 = 0LL;
  v58 = 0LL;
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
        v47 = (unsigned __int64)v59;
        goto LABEL_124;
      }
      XpressCallback = RtlpMakeXpressCallback(v60, v14, v10);
      v16 = v58;
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
        v58 = v16;
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
      v29 = v25;
      v30 = &v10[-v24];
      v31 = v25 + 3;
      if ( &v10[-v24] < v8 )
        return 3221226050LL;
      if ( v24 >= 4 )
      {
LABEL_44:
        *(_DWORD *)v10 = *(_DWORD *)v30;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v30 + 1);
        if ( v31 >= 9 )
        {
          v10 += 8;
          v34 = v30 + 8;
          for ( v31 -= 8LL; ; v31 -= 16LL )
          {
            if ( (unsigned __int64)v10 >= v15 )
            {
              if ( (unsigned __int64)v10 >= v14 )
                goto LABEL_113;
              v15 = RtlpMakeXpressCallback(v60, v14, v10);
            }
            *(_DWORD *)v10 = *v34;
            *((_DWORD *)v10 + 1) = v34[1];
            *((_DWORD *)v10 + 2) = v34[2];
            *((_DWORD *)v10 + 3) = v34[3];
            if ( v31 < 17 )
              break;
            v10 += 16;
            v34 += 4;
          }
          v16 = v58;
          v8 = a1;
        }
        v10 += v31;
        goto LABEL_53;
      }
      *v10 = *v30;
      v32 = v24 - 1;
      if ( v32 )
      {
        v10[1] = v30[1];
        if ( v32 == 1 )
        {
          v31 -= 2LL;
          v10 += 2;
          goto LABEL_43;
        }
        v33 = v30[2];
      }
      else
      {
        v10[1] = *v30;
        v33 = *v30;
      }
      v10[2] = v33;
      v31 = v29;
      v10 += 3;
LABEL_43:
      if ( v31 )
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
      v35 = RtlpMakeXpressCallback(v60, v14, v10);
      v16 = v58;
      v15 = v35;
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
      v46 = *(_DWORD *)v7;
      v7 += 4;
      *(_DWORD *)v10 = v46;
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
    v47 = (unsigned __int64)v59;
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
          if ( (unsigned __int64)(v7 + 2) > v11 || (unsigned __int64)(v10 + 2) > v47 )
            return 3221226050LL;
          v49 = *(_WORD *)v7;
          v7 += 2;
          *(_WORD *)v10 = v49;
          v10 += 2;
          if ( v20 < 0 )
            goto LABEL_120;
          v20 *= 2;
        }
        if ( (unsigned __int64)v7 >= v11 || (unsigned __int64)v10 >= v47 )
          return 3221226050LL;
        *v10++ = *v7++;
      }
      if ( v7 == (_BYTE *)v11 )
        break;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
      {
        if ( (unsigned __int64)v10 < v47 )
          return 3221226050LL;
        break;
      }
      v50 = *(unsigned __int16 *)v7;
      v7 += 2;
      v51 = v50;
      v52 = (v50 >> 3) + 1;
      v53 = v51 & 7;
      if ( v53 == 7 )
      {
        if ( v16 )
        {
          v54 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
          v16 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v16 = v7++;
          v54 = *v16 & 0xF;
        }
        if ( v54 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v55 = (unsigned __int8)*v7++;
          if ( v55 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v56 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v56 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v56 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v56 < 0x16 || &v10[v56 + 3] < v10 )
              return 3221226050LL;
            v55 = v56 - 22;
          }
          v54 = v55 + 15;
        }
        v53 = v54 + 7;
      }
      v57 = v53 + 3;
      if ( &v10[-v52] < v8 || (unsigned __int64)&v10[v57] > v47 )
        return 3221226050LL;
      qmemcpy(v10, &v10[-v52], v57);
      v10 += v57;
    }
    *a5 = (_DWORD)v10 - (_DWORD)v8;
    return 0LL;
  }
  if ( (unsigned __int64)(v7 + 1) < v11 )
  {
    v36 = *(unsigned __int16 *)v7;
    v7 += 2;
    v37 = v36;
    v24 = (v36 >> 3) + 1;
    v38 = v37 & 7;
    if ( v38 == 7 )
    {
      if ( v16 )
      {
        v39 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
        v16 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v16 = v7++;
        v39 = *v16 & 0xF;
      }
      v58 = v16;
      if ( v39 == 15 )
      {
LABEL_67:
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v40 = (unsigned __int8)*v7++;
        if ( v40 == 255 )
        {
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v41 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v41 )
          {
            if ( (unsigned __int64)(v7 + 3) >= v11 )
              return 3221226050LL;
            v41 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v41 < 0x16 || &v10[v41 + 3] < v10 )
            return 3221226050LL;
          v40 = v41 - 22;
        }
        v39 = v40 + 15;
      }
      v38 = v39 + 7;
    }
    v42 = v38;
    v43 = &v10[-v24];
    v31 = v38 + 3;
    if ( &v10[-v24] < v8 )
      return 3221226050LL;
    if ( v24 >= 4 )
    {
LABEL_87:
      *(_DWORD *)v10 = *(_DWORD *)v43;
      *((_DWORD *)v10 + 1) = *((_DWORD *)v43 + 1);
      if ( v31 >= 9 )
      {
        v10 += 8;
        v34 = v43 + 8;
        for ( v31 -= 8LL; ; v31 -= 16LL )
        {
          if ( (unsigned __int64)v10 >= v15 )
          {
            if ( (unsigned __int64)v10 >= v14 )
            {
LABEL_113:
              v47 = (unsigned __int64)v59;
              if ( &v10[v31] <= v59 )
              {
                v16 = v58;
                v8 = a1;
                qmemcpy(v10, v34, v31);
                v10 += v31;
                goto LABEL_118;
              }
              return 3221226050LL;
            }
            v15 = RtlpMakeXpressCallback(v60, v14, v10);
          }
          *(_DWORD *)v10 = *v34;
          *((_DWORD *)v10 + 1) = v34[1];
          *((_DWORD *)v10 + 2) = v34[2];
          *((_DWORD *)v10 + 3) = v34[3];
          if ( v31 < 17 )
            break;
          v10 += 16;
          v34 += 4;
        }
        v16 = v58;
        v8 = a1;
      }
      v10 += v31;
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
        v31 -= 2LL;
        v10 += 2;
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
    v31 = v42;
    v10 += 3;
LABEL_86:
    if ( !v31 )
      goto LABEL_96;
    goto LABEL_87;
  }
  v47 = (unsigned __int64)v59;
  if ( v10 >= v59 )
    goto LABEL_118;
  return 3221226050LL;
}
