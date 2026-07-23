/*
 * XREFs of RtlpxVirtualUnwind @ 0x14021E130
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D210 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x14033E9D0 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlpVirtualUnwind @ 0x1403408B0 (RtlpVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x14021E580 (RtlpUnwindPrologue.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14032B464 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14032B620 (RtlpUnwindOpSlots.c)
 *     RtlpPopUserShadowStack @ 0x14032B65C (RtlpPopUserShadowStack.c)
 *     RtlpSameFunction @ 0x140586480 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 RtlpxVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3, ...)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int *v7; // rdi
  char v9; // al
  __int64 v10; // r9
  _BYTE *v11; // rsi
  unsigned int v12; // r13d
  int v13; // r14d
  unsigned __int64 v14; // r8
  unsigned int v15; // ebp
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  unsigned __int8 *v22; // rcx
  _BYTE *v23; // r8
  int v24; // r11d
  __int16 v25; // ax
  int v26; // r10d
  unsigned int v27; // r11d
  int v28; // ecx
  __int16 v29; // ax
  int v30; // edx
  _BYTE *v31; // r9
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // r11d
  char v35; // r10
  char *v36; // rcx
  char v37; // dl
  char *v38; // r10
  char v39; // al
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // r11d
  __int64 v43; // rcx
  bool v44; // cf
  char v45; // dl
  __int64 v46; // rax
  char *v47; // r10
  char v48; // al
  char *v49; // r10
  int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r13
  _DWORD *v53; // rax
  char v54; // al
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // r11
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // bl
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rdx
  int v66; // [rsp+88h] [rbp+10h]
  unsigned int v67; // [rsp+88h] [rbp+10h]
  unsigned int v68; // [rsp+90h] [rbp+18h]
  unsigned int *v69; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v71; // [rsp+A0h] [rbp+28h]
  _BYTE *v72; // [rsp+A8h] [rbp+30h]
  _QWORD *v73; // [rsp+B0h] [rbp+38h]
  unsigned __int64 v74; // [rsp+B8h] [rbp+40h]
  _QWORD *v75; // [rsp+C0h] [rbp+48h]
  __int64 v76; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v69 = va_arg(va1, unsigned int *);
  v71 = va_arg(va1, _QWORD);
  v72 = va_arg(va1, _BYTE *);
  v73 = va_arg(va1, _QWORD *);
  v74 = va_arg(va1, _QWORD);
  v75 = va_arg(va1, _QWORD *);
  v76 = va_arg(va1, _QWORD);
  v4 = a2 + v69[2];
  v5 = 0LL;
  v66 = 0;
  v7 = v69;
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v4 & 3) != 0 )
      goto LABEL_67;
    v7 = v69;
  }
  v9 = *(_BYTE *)v4;
  v10 = 1LL;
  v11 = v72;
  v12 = *(_BYTE *)v4 & 7;
  if ( !v72 || *v72 )
  {
    if ( v12 < 2 )
    {
      v22 = (unsigned __int8 *)(v4 + 2);
      v23 = (_BYTE *)v4;
      v24 = 0;
      if ( !*(_BYTE *)(v4 + 2) )
      {
        while ( 1 )
        {
          if ( (v9 & 0x20) == 0 )
          {
            v7 = v69;
            v5 = 1LL;
            v66 = 1;
            goto LABEL_5;
          }
          v40 = *v22;
          v41 = v40 + 1;
          if ( (v40 & 1) == 0 )
            v41 = v40;
          if ( (unsigned int)++v24 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v23 = (_BYTE *)(a2 + *(unsigned int *)&v23[2 * v41 + 12]);
          if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
            goto LABEL_67;
          v22 = v23 + 2;
          if ( v23[2] )
            break;
          v9 = *v23;
        }
        v7 = v69;
      }
      if ( a1 < 0 )
        return 3221225512LL;
    }
  }
  else
  {
    v5 = 1LL;
    v66 = 1;
  }
LABEL_5:
  v13 = a1 & 0x7FFFFFFF;
  v14 = v74;
  v15 = a3 - *v7 - a2;
  if ( (*(_BYTE *)(v4 + 3) & 0xF) != 0 )
  {
    if ( v15 >= *(unsigned __int8 *)(v4 + 1) || (*(_BYTE *)v4 & 0x20) != 0 )
    {
      v16 = v71;
      v20 = *(_BYTE *)(v4 + 3);
    }
    else
    {
      v42 = 0;
      v68 = 0;
      if ( *(_BYTE *)(v4 + 2) )
      {
        do
        {
          v43 = *(unsigned __int16 *)(v4 + 2LL * v42 + 4);
          if ( (BYTE1(v43) & 0xF) == 3 )
            break;
          v42 = RtlpUnwindOpSlots(v43, v5, v14, v10) + v68;
          v68 = v42;
        }
        while ( v42 < *(unsigned __int8 *)(v4 + 2) );
        v7 = v69;
        LODWORD(v10) = 1;
        LODWORD(v5) = v66;
        v14 = v74;
      }
      v44 = v15 < *(unsigned __int8 *)(v4 + 2LL * v42 + 4);
      v16 = v71;
      if ( v44 )
        goto LABEL_7;
      v20 = *(_BYTE *)(v4 + 3);
    }
    v21 = *(_QWORD *)(v16 + 8LL * (v20 & 0xF) + 120);
    *(_QWORD *)v14 = v21;
    v17 = v21 - (*(_BYTE *)(v4 + 3) & 0xF0);
    goto LABEL_8;
  }
  v16 = v71;
LABEL_7:
  v17 = *(_QWORD *)(v16 + 152);
LABEL_8:
  *(_QWORD *)v14 = v17;
  if ( (_DWORD)v5 )
    goto LABEL_9;
  if ( v12 >= 2 )
  {
    if ( !*(_BYTE *)(v4 + 2) )
      goto LABEL_9;
    v25 = *(_WORD *)(v4 + 4);
    if ( (HIBYTE(v25) & 0xF) == 6 )
    {
      LODWORD(v7) = (_DWORD)v69;
      v26 = a3 - a2;
      v27 = (unsigned __int8)v25;
      if ( (v25 & 0x1000) != 0 )
      {
        v28 = v69[1] - (unsigned __int8)v25;
        if ( v26 - v28 < (unsigned int)(unsigned __int8)v25 )
        {
LABEL_58:
          RtlpUnwindEpilogue(a2, a3, v26 - v28, (_DWORD)v7, v16, v76);
          v19 = 0LL;
          if ( v11 )
            *v11 = 0;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v4 + 2) <= 1u )
        goto LABEL_9;
      while ( 1 )
      {
        v29 = *(_WORD *)(v4 + 2LL * (unsigned int)v10 + 4);
        if ( (HIBYTE(v29) & 0xF) != 6 )
          break;
        v30 = (unsigned __int8)v29 + (HIBYTE(v29) >> 4 << 8);
        if ( !v30 )
          break;
        LODWORD(v7) = (_DWORD)v69;
        v28 = v69[1] - v30;
        if ( v26 - v28 < v27 )
          goto LABEL_58;
        LODWORD(v10) = v10 + 1;
        if ( (unsigned int)v10 >= *(unsigned __int8 *)(v4 + 2) )
          goto LABEL_9;
      }
    }
    LODWORD(v7) = (_DWORD)v69;
    goto LABEL_9;
  }
  v34 = 0;
  v67 = 0;
  v35 = *(_BYTE *)a3;
  v36 = (char *)a3;
  if ( *(_BYTE *)a3 == 72 )
  {
    v39 = *(_BYTE *)(a3 + 1);
    if ( v39 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      v36 = (char *)(a3 + 4);
      goto LABEL_47;
    }
    if ( v39 == -127 && *(_BYTE *)(a3 + 2) == 0xC4 )
      goto LABEL_93;
  }
  if ( (v35 & 0xFE) == 0x48 && *(_BYTE *)(a3 + 1) == 0x8D )
  {
    v34 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v35 & 1));
    v67 = v34;
    if ( v34 )
    {
      if ( v34 == (*(_BYTE *)(v4 + 3) & 0xF) )
      {
        v45 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v45 == 96 )
        {
          v36 = (char *)(a3 + 4);
          goto LABEL_47;
        }
        if ( v45 == -96 )
LABEL_93:
          v36 = (char *)(a3 + 7);
      }
    }
  }
LABEL_47:
  while ( 1 )
  {
    v37 = *v36;
    if ( (*v36 & 0xF8) != 0x58 )
      break;
    v46 = 1LL;
LABEL_95:
    v36 += v46;
  }
  v38 = v36 + 1;
  if ( (v37 & 0xF0) == 0x40 && (*v38 & 0xF8) == 0x58 )
  {
    v46 = 2LL;
    goto LABEL_95;
  }
  if ( v37 == -14 )
  {
    v37 = *v38;
    ++v36;
  }
  if ( (unsigned __int8)(v37 + 62) > 1u )
  {
    if ( v37 == -13 )
    {
      if ( v36[1] != -61 )
        goto LABEL_55;
    }
    else if ( ((v37 + 23) & 0xFD) != 0 )
    {
      if ( v37 != -1 || v36[1] != 37 )
      {
LABEL_55:
        if ( (v37 & 0xF8) == 0x48 && v36[1] == -1 && (v36[2] & 0x38) == 0x20 )
          goto LABEL_97;
LABEL_9:
        result = RtlpUnwindPrologue(a2, a3, *(_QWORD *)v14, (_DWORD)v7, v16, (__int64)v11, (__int64)va, v76);
        if ( (int)result < 0 )
          return result;
        if ( !v13 )
        {
LABEL_11:
          v19 = 0LL;
          goto LABEL_12;
        }
        v31 = (_BYTE *)(a2 + v69[2]);
        if ( a3 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v31 & 3) == 0 )
        {
          if ( (unsigned int)a3 - *v69 - (unsigned int)a2 >= (unsigned __int8)v31[1]
            && ((*v31 >> 3) & (unsigned __int8)v13) != 0 )
          {
            v32 = (unsigned __int8)v31[2];
            v33 = v32 + 1;
            if ( (v32 & 1) == 0 )
              v33 = (unsigned __int8)v31[2];
            *v73 = &v31[2 * (v33 + 2) + 4];
            v19 = a2 + *(unsigned int *)&v31[2 * v33 + 4];
            goto LABEL_12;
          }
          goto LABEL_11;
        }
LABEL_67:
        ExRaiseDatatypeMisalignment();
      }
    }
    else
    {
      v49 = &v36[-a2];
      if ( v37 == -21 )
        v50 = v36[1] + 2;
      else
        v50 = *(_DWORD *)(v36 + 1) + 5;
      v51 = *v7;
      v52 = (unsigned __int64)&v49[v50];
      if ( v52 < v51 || v52 >= v7[1] )
      {
        if ( a3 <= 0x7FFFFFFEFFFFLL )
          v7 = v69;
        v53 = (_DWORD *)RtlpSameFunction(v7, a2, a2 + v52, 1LL);
        if ( !v53 || v52 == *v53 )
        {
          v34 = v67;
          goto LABEL_97;
        }
        v14 = v74;
        goto LABEL_9;
      }
      if ( v52 != v51 || (*(_BYTE *)v4 & 0x20) != 0 )
        goto LABEL_9;
    }
  }
LABEL_97:
  v47 = (char *)a3;
  if ( (*(_BYTE *)a3 & 0xF8) == 0x48 )
  {
    v48 = *(_BYTE *)(a3 + 1);
    switch ( v48 )
    {
      case -125:
        v47 = (char *)(a3 + 4);
        *(_QWORD *)(v16 + 152) += *(char *)(a3 + 3);
        break;
      case -127:
        *(_QWORD *)(v16 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
        goto LABEL_125;
      case -115:
        v54 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v54 == 96 )
        {
          v47 = (char *)(a3 + 4);
          v55 = *(_QWORD *)(v16 + 8LL * v34 + 120);
          *(_QWORD *)(v16 + 152) = v55;
          *(_QWORD *)(v16 + 152) = v55 + *(char *)(a3 + 3);
        }
        else if ( v54 == -96 )
        {
          *(_QWORD *)(v16 + 152) = *(_QWORD *)(v16 + 8LL * v34 + 120)
                                 + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
LABEL_125:
          v47 = (char *)(a3 + 7);
        }
        break;
    }
  }
  v56 = v76;
  while ( 2 )
  {
    v57 = *v47;
    if ( (*v47 & 0xF8) == 0x58 )
    {
      v14 = *(_QWORD *)(v16 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
        goto LABEL_67;
      if ( *(_QWORD *)v56 && (v14 < **(_QWORD **)v56 || v14 > **(_QWORD **)(v56 + 8) - 8LL) )
        return 3221225512LL;
      v58 = v57 & 7;
      *(_QWORD *)(v16 + 8 * v58 + 120) = *(_QWORD *)v14;
      v59 = *(_QWORD *)(v56 + 16);
      if ( v59 )
        *(_QWORD *)(v59 + 8 * v58 + 128) = v14;
      v60 = 1LL;
LABEL_146:
      *(_QWORD *)(v16 + 152) += 8LL;
      v47 += v60;
      continue;
    }
    break;
  }
  if ( (v57 & 0xF0) == 0x40 )
  {
    v61 = v47[1];
    if ( (v61 & 0xF8) == 0x58 )
    {
      v14 = *(_QWORD *)(v16 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
        goto LABEL_67;
      if ( *(_QWORD *)v56 && (v14 < **(_QWORD **)v56 || v14 > **(_QWORD **)(v56 + 8) - 8LL) )
        return 3221225512LL;
      v62 = v61 & 7 | (8LL * (v57 & 1));
      *(_QWORD *)(v16 + 8 * v62 + 120) = *(_QWORD *)v14;
      v63 = *(_QWORD *)(v56 + 16);
      if ( v63 )
        *(_QWORD *)(v63 + 8 * v62 + 128) = v14;
      v60 = 2LL;
      goto LABEL_146;
    }
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v64 = *(_QWORD *)(v16 + 152);
    if ( (v64 & 3) != 0 )
      goto LABEL_67;
  }
  if ( *(_QWORD *)v56 )
  {
    v14 = *(_QWORD *)(v16 + 152);
    if ( v14 < **(_QWORD **)v56 || v14 > **(_QWORD **)(v56 + 8) - 8LL )
      return 3221225512LL;
  }
  v65 = *(_QWORD **)(v16 + 152);
  *(_QWORD *)(v16 + 248) = *v65;
  *(_QWORD *)(v16 + 152) = v65 + 1;
  RtlpPopUserShadowStack(v16, v65, v14, 1LL);
  v19 = 0LL;
  if ( v11 )
    *v11 = 0;
LABEL_12:
  if ( v75 )
    *v75 = v19;
  return 0LL;
}
