__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        unsigned __int64 *a8,
        _QWORD *a9,
        __int64 a10)
{
  __int64 v13; // r11
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16; // rbx
  char v17; // al
  unsigned int v18; // r12d
  _BYTE *v19; // r13
  int v20; // r14d
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  char *v23; // rcx
  int v24; // r10d
  __int16 v25; // r8
  int v26; // r10d
  int v27; // edi
  unsigned int j; // r8d
  unsigned __int16 v29; // dx
  int v30; // ecx
  _BYTE *v31; // r9
  int v32; // ecx
  int v33; // eax
  char *v34; // rdx
  char v35; // cl
  char v36; // cl
  char *v37; // r10
  _BYTE *v38; // r10
  _QWORD *v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int i; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // eax
  int v46; // ecx
  char v47; // r10
  __int64 v48; // rax
  char *v49; // rdx
  int v50; // eax
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // r15
  char *v55; // r9
  char v56; // al
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rbx
  char v60; // di
  unsigned __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // r14
  unsigned __int64 v66; // r10
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  int v70; // [rsp+44h] [rbp-74h]
  unsigned int v71; // [rsp+50h] [rbp-68h]
  unsigned int v72; // [rsp+50h] [rbp-68h]
  int v73; // [rsp+58h] [rbp-60h]
  int v74; // [rsp+60h] [rbp-58h]
  unsigned int v75; // [rsp+68h] [rbp-50h]
  __int64 v76; // [rsp+70h] [rbp-48h]
  unsigned __int64 *v77; // [rsp+80h] [rbp-38h]
  unsigned int *v78; // [rsp+D8h] [rbp+20h] BYREF

  v78 = a4;
  v13 = a5;
  if ( !a4 )
  {
    v39 = (_QWORD *)(a5 + 152);
    v40 = *(_QWORD *)(a5 + 152);
    if ( a3 <= 0x7FFFFFFEFFFFLL && (v40 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !*(_QWORD *)a10 || v40 >= **(_QWORD **)a10 && v40 <= **(_QWORD **)(a10 + 8) - 8LL )
    {
      if ( a3 == *(_QWORD *)v40 )
        return 3221225727LL;
      *(_QWORD *)(a5 + 248) = *(_QWORD *)v40;
      *v39 += 8LL;
      RtlpVirtualPopShadowStack(v13, 1LL, 1LL);
      *a8 = v40;
      if ( a6 )
        *a6 = 0;
      *a7 = 0LL;
      if ( a9 )
        *a9 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v14 = 0;
  v76 = 0LL;
  v70 = 0;
  v15 = 0;
  v74 = 0;
  v16 = a2 + a4[2];
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v16 & 3) != 0 )
      goto LABEL_69;
    a4 = v78;
  }
  v17 = *(_BYTE *)v16;
  v18 = *(_BYTE *)v16 & 7;
  v19 = a6;
  if ( !a6 || *a6 )
  {
    if ( v18 < 2 )
    {
      v23 = (char *)v16;
      v24 = 0;
      if ( *(_BYTE *)(v16 + 2) )
        goto LABEL_19;
      while ( 1 )
      {
        if ( (v17 & 0x20) == 0 )
        {
          v15 = 1;
          v74 = 1;
          a4 = v78;
          goto LABEL_6;
        }
        v41 = (unsigned __int8)v23[2];
        if ( (v41 & 1) != 0 )
          v41 = (unsigned int)(v41 + 1);
        if ( (unsigned int)++v24 > 0x20 )
          RtlRaiseStatus(3221225727LL);
        v23 = (char *)(a2 + *(unsigned int *)&v23[2 * v41 + 12]);
        if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
          goto LABEL_69;
        if ( v23[2] )
          break;
        v17 = *v23;
      }
      a4 = v78;
LABEL_19:
      if ( a1 < 0 )
        return 3221225512LL;
    }
  }
  else
  {
    v15 = 1;
    v74 = 1;
  }
LABEL_6:
  v20 = a1 & 0x7FFFFFFF;
  v73 = 0;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) != 0 )
  {
    v72 = a3 - a2 - *a4;
    if ( v72 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v73 = 1;
      goto LABEL_40;
    }
    for ( i = 0; ; i = RtlpUnwindOpSlots(v44, v43) + v75 )
    {
      v75 = i;
      v43 = i;
      if ( i >= *(unsigned __int8 *)(v16 + 2) )
        break;
      v44 = *(unsigned __int16 *)(v16 + 2LL * i + 4);
      if ( (BYTE1(v44) & 0xF) == 3 )
        break;
    }
    v45 = *(unsigned __int8 *)(v16 + 2 * v43 + 4);
    a4 = v78;
    v15 = v74;
    v13 = a5;
    if ( v72 >= v45 )
      v73 = 1;
  }
  if ( v73 )
  {
LABEL_40:
    v21 = *(_QWORD *)(v13 + 8LL * (*(_BYTE *)(v16 + 3) & 0xF) + 120) - (*(_BYTE *)(v16 + 3) & 0xF0);
    goto LABEL_9;
  }
  v21 = *(_QWORD *)(v13 + 152);
LABEL_9:
  *a8 = v21;
  if ( v15 )
  {
LABEL_10:
    result = RtlpUnwindPrologue(a2, a3, *a8, (_DWORD)a4, v13, (__int64)v19, (__int64)&v78, a10);
    if ( (int)result < 0 )
      return result;
    if ( !v20 )
      goto LABEL_12;
    v31 = (_BYTE *)(a2 + v78[2]);
    if ( a3 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v31 & 3) == 0 )
    {
      if ( (_DWORD)a3 - (_DWORD)a2 - *v78 >= (unsigned __int8)v31[1] && ((*v31 >> 3) & (unsigned __int8)v20) != 0 )
      {
        v32 = (unsigned __int8)v31[2];
        v33 = v32 + 1;
        if ( (v32 & 1) == 0 )
          v33 = (unsigned __int8)v31[2];
        *a7 = &v31[2 * (v33 + 2) + 4];
        v76 = a2 + *(unsigned int *)&v31[2 * v33 + 4];
      }
      goto LABEL_12;
    }
LABEL_69:
    ExRaiseDatatypeMisalignment();
  }
  if ( v18 >= 2 )
  {
    if ( *(_BYTE *)(v16 + 2) )
    {
      v25 = *(_WORD *)(v16 + 4);
      if ( (HIBYTE(v25) & 0xF) == 6 )
      {
        v71 = (unsigned __int8)v25;
        v26 = a3 - a2;
        if ( (v25 & 0x1000) != 0 )
        {
          v27 = a4[1] - (unsigned __int8)v25;
          if ( v26 - v27 < (unsigned int)(unsigned __int8)v25 )
          {
LABEL_171:
            v70 = 1;
            RtlpUnwindEpilogue(a2, a3, v26 - v27, (_DWORD)a4, v13, a10);
            if ( v19 )
              *v19 = 0;
            goto LABEL_12;
          }
        }
        for ( j = 1; j < *(unsigned __int8 *)(v16 + 2); ++j )
        {
          v29 = *(_WORD *)(v16 + 2LL * j + 4);
          if ( (HIBYTE(v29) & 0xF) != 6 )
            break;
          v30 = (unsigned __int8)v29 + ((unsigned __int16)HIBYTE(v29) >> 4 << 8);
          if ( !v30 )
            break;
          v27 = a4[1] - v30;
          if ( v26 - v27 < v71 )
            goto LABEL_171;
        }
      }
    }
    goto LABEL_10;
  }
  v34 = (char *)a3;
  v35 = *(_BYTE *)a3;
  if ( *(_BYTE *)a3 == 72 )
  {
    if ( *(_BYTE *)(a3 + 1) == 0x83 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      v34 = (char *)(a3 + 4);
      goto LABEL_43;
    }
    if ( *(_BYTE *)(a3 + 1) == 0x81 && *(_BYTE *)(a3 + 2) == 0xC4 )
      goto LABEL_99;
  }
  if ( (v35 & 0xFE) == 0x48 && *(_BYTE *)(a3 + 1) == 0x8D )
  {
    v46 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v35 & 1));
    v14 = v46;
    if ( v46 )
    {
      if ( v46 == (*(_BYTE *)(v16 + 3) & 0xF) )
      {
        v47 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v47 == 96 )
        {
          v34 = (char *)(a3 + 4);
          goto LABEL_43;
        }
        if ( v47 == -96 )
LABEL_99:
          v34 = (char *)(a3 + 7);
      }
    }
  }
  while ( 1 )
  {
LABEL_43:
    v36 = *v34;
    if ( (*v34 & 0xF8) == 0x58 )
    {
      v48 = 1LL;
      goto LABEL_103;
    }
    v37 = v34 + 1;
    if ( (v36 & 0xF0) != 0x40 || (*v37 & 0xF8) != 0x58 )
      break;
    v48 = 2LL;
LABEL_103:
    v34 += v48;
  }
  if ( v36 == -14 )
  {
    ++v34;
    v36 = *v37;
  }
  if ( (unsigned __int8)(v36 + 62) <= 1u )
    goto LABEL_125;
  v38 = v34 + 1;
  if ( v36 == -13 && *v38 == 0xC3 )
    goto LABEL_125;
  if ( ((v36 + 23) & 0xFD) != 0 )
  {
    if ( v36 != -1 || *v38 != 37 )
    {
      if ( (v36 & 0xF8) == 0x48 && *v38 == 0xFF && (v34[2] & 0x38) == 0x20 )
        v70 = 1;
      goto LABEL_52;
    }
LABEL_125:
    v70 = 1;
    goto LABEL_126;
  }
  v49 = &v34[-a2];
  if ( v36 == -21 )
    v50 = (char)*v38 + 2;
  else
    v50 = *(_DWORD *)v38 + 5;
  v51 = (unsigned __int64)&v49[v50];
  v52 = *a4;
  if ( v51 < v52 || v51 >= a4[1] )
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL )
      a4 = v78;
    v53 = (_DWORD *)RtlpSameFunction(a4, a2);
    if ( v53 && v51 != *v53 )
    {
      LODWORD(a4) = (_DWORD)v78;
      v13 = a5;
      goto LABEL_52;
    }
    v13 = a5;
    goto LABEL_125;
  }
  if ( v51 == v52 && (*(_BYTE *)v16 & 0x20) == 0 )
    v70 = 1;
LABEL_52:
  if ( !v70 )
    goto LABEL_10;
LABEL_126:
  v54 = v13 + 120;
  v55 = (char *)a3;
  if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
    goto LABEL_137;
  v56 = *(_BYTE *)(a3 + 1);
  switch ( v56 )
  {
    case -125:
      *(_QWORD *)(v13 + 152) += *(char *)(a3 + 3);
      v55 = (char *)(a3 + 4);
      break;
    case -127:
      *(_QWORD *)(v13 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
      goto LABEL_136;
    case -115:
      v57 = *(_BYTE *)(a3 + 2) & 0xF8;
      if ( v57 == 96 )
      {
        v58 = *(_QWORD *)(v54 + 8LL * v14);
        *(_QWORD *)(v13 + 152) = v58;
        *(_QWORD *)(v13 + 152) = v58 + *(char *)(a3 + 3);
        v55 = (char *)(a3 + 4);
      }
      else if ( v57 == -96 )
      {
        *(_QWORD *)(v13 + 152) = *(_QWORD *)(v54 + 8LL * v14)
                               + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
LABEL_136:
        v55 = (char *)(a3 + 7);
      }
      break;
  }
LABEL_137:
  v77 = (unsigned __int64 *)(v13 + 152);
  v59 = a10;
  while ( 2 )
  {
    v60 = *v55;
    if ( (*v55 & 0xF8) == 0x58 )
    {
      v61 = *v77;
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v61 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)v59 )
      {
        if ( v61 < **(_QWORD **)v59 )
          return 3221225512LL;
        if ( v61 > **(_QWORD **)(v59 + 8) - 8LL )
          return 3221225512LL;
      }
      v62 = v60 & 7;
      *(_QWORD *)(v54 + 8 * v62) = *(_QWORD *)v61;
      v63 = *(_QWORD *)(v59 + 16);
      if ( v63 )
        *(_QWORD *)(v63 + 8 * v62 + 128) = v61;
      v64 = 1LL;
LABEL_161:
      *v77 += 8LL;
      v55 += v64;
      continue;
    }
    break;
  }
  if ( (v60 & 0xF0) == 0x40 )
  {
    v65 = v55[1];
    if ( (v65 & 0xF8) == 0x58 )
    {
      v66 = *v77;
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v66 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)v59 )
      {
        if ( v66 < **(_QWORD **)v59 )
          return 3221225512LL;
        if ( v66 > **(_QWORD **)(v59 + 8) - 8LL )
          return 3221225512LL;
      }
      v67 = v65 & 7 | (8LL * (v60 & 1));
      *(_QWORD *)(v54 + 8 * v67) = *(_QWORD *)v66;
      v68 = *(_QWORD *)(v59 + 16);
      if ( v68 )
        *(_QWORD *)(v68 + 8 * v67 + 128) = v66;
      v64 = 2LL;
      goto LABEL_161;
    }
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL && (*v77 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( !*(_QWORD *)v59 )
    goto LABEL_169;
  if ( *v77 < **(_QWORD **)v59 )
    return 3221225512LL;
  if ( *v77 > **(_QWORD **)(v59 + 8) - 8LL )
    return 3221225512LL;
LABEL_169:
  v69 = *v77;
  *(_QWORD *)(v13 + 248) = *(_QWORD *)*v77;
  *v77 = v69 + 8;
  RtlpVirtualPopShadowStack(v13, 1LL, 1LL);
  if ( v19 )
    *v19 = 0;
LABEL_12:
  if ( a9 )
    *a9 = v76;
  if ( v70 )
  {
    if ( v73 )
      *a8 = *(_QWORD *)(a5 + 152) - 8LL;
  }
  return 0LL;
}
