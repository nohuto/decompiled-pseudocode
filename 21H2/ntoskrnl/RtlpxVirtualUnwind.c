/*
 * XREFs of RtlpxVirtualUnwind @ 0x1402C2A70
 * Callers:
 *     RtlVirtualUnwind @ 0x140263960 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x1402639D0 (RtlUnwindEx.c)
 *     RtlpVirtualUnwind @ 0x140265840 (RtlpVirtualUnwind.c)
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x1402505B4 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140250770 (RtlpUnwindOpSlots.c)
 *     RtlpPopUserShadowStack @ 0x1402507AC (RtlpPopUserShadowStack.c)
 *     RtlpUnwindPrologue @ 0x1402C2EC0 (RtlpUnwindPrologue.c)
 *     RtlpSameFunction @ 0x140586770 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 RtlpxVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3, ...)
{
  __int64 v4; // rbx
  int v5; // edx
  unsigned int *v7; // rdi
  char v9; // al
  unsigned int v10; // r9d
  _BYTE *v11; // rsi
  unsigned int v12; // r13d
  int v13; // r14d
  _QWORD *v14; // r8
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
  unsigned __int16 v43; // cx
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
  unsigned __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // bl
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // r8
  _QWORD *v68; // rdx
  int v69; // [rsp+88h] [rbp+10h]
  unsigned int v70; // [rsp+88h] [rbp+10h]
  unsigned int v71; // [rsp+90h] [rbp+18h]
  unsigned int *v72; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v74; // [rsp+A0h] [rbp+28h]
  _BYTE *v75; // [rsp+A8h] [rbp+30h]
  _QWORD *v76; // [rsp+B0h] [rbp+38h]
  _QWORD *v77; // [rsp+B8h] [rbp+40h]
  __int64 *v78; // [rsp+C0h] [rbp+48h]
  __int64 v79; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v72 = va_arg(va1, unsigned int *);
  v74 = va_arg(va1, _QWORD);
  v75 = va_arg(va1, _BYTE *);
  v76 = va_arg(va1, _QWORD *);
  v77 = va_arg(va1, _QWORD *);
  v78 = va_arg(va1, __int64 *);
  v79 = va_arg(va1, _QWORD);
  v4 = a2 + v72[2];
  v5 = 0;
  v69 = 0;
  v7 = v72;
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v4 & 3) != 0 )
      goto LABEL_67;
    v7 = v72;
  }
  v9 = *(_BYTE *)v4;
  v10 = 1;
  v11 = v75;
  v12 = *(_BYTE *)v4 & 7;
  if ( !v75 || *v75 )
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
            v7 = v72;
            v5 = 1;
            v69 = 1;
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
        v7 = v72;
      }
      if ( a1 < 0 )
        return 3221225512LL;
    }
  }
  else
  {
    v5 = 1;
    v69 = 1;
  }
LABEL_5:
  v13 = a1 & 0x7FFFFFFF;
  v14 = v77;
  v15 = a3 - *v7 - a2;
  if ( (*(_BYTE *)(v4 + 3) & 0xF) != 0 )
  {
    if ( v15 >= *(unsigned __int8 *)(v4 + 1) || (*(_BYTE *)v4 & 0x20) != 0 )
    {
      v16 = v74;
      v20 = *(_BYTE *)(v4 + 3);
    }
    else
    {
      v42 = 0;
      v71 = 0;
      if ( *(_BYTE *)(v4 + 2) )
      {
        do
        {
          v43 = *(_WORD *)(v4 + 2LL * v42 + 4);
          if ( (HIBYTE(v43) & 0xF) == 3 )
            break;
          v42 = RtlpUnwindOpSlots(v43) + v71;
          v71 = v42;
        }
        while ( v42 < *(unsigned __int8 *)(v4 + 2) );
        v7 = v72;
        v10 = 1;
        v5 = v69;
        v14 = v77;
      }
      v44 = v15 < *(unsigned __int8 *)(v4 + 2LL * v42 + 4);
      v16 = v74;
      if ( v44 )
        goto LABEL_7;
      v20 = *(_BYTE *)(v4 + 3);
    }
    v21 = *(_QWORD *)(v16 + 8LL * (v20 & 0xF) + 120);
    *v14 = v21;
    v17 = v21 - (*(_BYTE *)(v4 + 3) & 0xF0);
    goto LABEL_8;
  }
  v16 = v74;
LABEL_7:
  v17 = *(_QWORD *)(v16 + 152);
LABEL_8:
  *v14 = v17;
  if ( v5 )
    goto LABEL_9;
  if ( v12 >= 2 )
  {
    if ( !*(_BYTE *)(v4 + 2) )
      goto LABEL_9;
    v25 = *(_WORD *)(v4 + 4);
    if ( (HIBYTE(v25) & 0xF) == 6 )
    {
      v7 = v72;
      v26 = a3 - a2;
      v27 = (unsigned __int8)v25;
      if ( (v25 & 0x1000) != 0 )
      {
        v28 = v72[1] - (unsigned __int8)v25;
        if ( v26 - v28 < (unsigned int)(unsigned __int8)v25 )
        {
LABEL_58:
          RtlpUnwindEpilogue(a2, a3, v26 - v28, v7, v16, v79);
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
        v29 = *(_WORD *)(v4 + 2LL * v10 + 4);
        if ( (HIBYTE(v29) & 0xF) != 6 )
          break;
        v30 = (unsigned __int8)v29 + (HIBYTE(v29) >> 4 << 8);
        if ( !v30 )
          break;
        v7 = v72;
        v28 = v72[1] - v30;
        if ( v26 - v28 < v27 )
          goto LABEL_58;
        if ( ++v10 >= *(unsigned __int8 *)(v4 + 2) )
          goto LABEL_9;
      }
    }
    LODWORD(v7) = (_DWORD)v72;
    goto LABEL_9;
  }
  v34 = 0;
  v70 = 0;
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
    v70 = v34;
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
        result = RtlpUnwindPrologue(a2, a3, *v14, (_DWORD)v7, v16, (__int64)v11, (__int64)va, v79);
        if ( (int)result < 0 )
          return result;
        if ( !v13 )
        {
LABEL_11:
          v19 = 0LL;
          goto LABEL_12;
        }
        v31 = (_BYTE *)(a2 + v72[2]);
        if ( a3 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v31 & 3) == 0 )
        {
          if ( (unsigned int)a3 - *v72 - (unsigned int)a2 >= (unsigned __int8)v31[1]
            && ((*v31 >> 3) & (unsigned __int8)v13) != 0 )
          {
            v32 = (unsigned __int8)v31[2];
            v33 = v32 + 1;
            if ( (v32 & 1) == 0 )
              v33 = (unsigned __int8)v31[2];
            *v76 = &v31[2 * (v33 + 2) + 4];
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
          v7 = v72;
        v53 = (_DWORD *)RtlpSameFunction(v7, a2, a2 + v52, 1LL);
        if ( !v53 || v52 == *v53 )
        {
          v34 = v70;
          goto LABEL_97;
        }
        v14 = v77;
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
  v56 = v79;
  while ( 2 )
  {
    v57 = *v47;
    if ( (*v47 & 0xF8) == 0x58 )
    {
      v58 = *(_QWORD *)(v16 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v58 & 3) != 0 )
        goto LABEL_67;
      if ( *(_QWORD *)v56 && (v58 < **(_QWORD **)v56 || v58 > **(_QWORD **)(v56 + 8) - 8LL) )
        return 3221225512LL;
      v59 = v57 & 7;
      *(_QWORD *)(v16 + 8 * v59 + 120) = *(_QWORD *)v58;
      v60 = *(_QWORD *)(v56 + 16);
      if ( v60 )
        *(_QWORD *)(v60 + 8 * v59 + 128) = v58;
      v61 = 1LL;
LABEL_146:
      *(_QWORD *)(v16 + 152) += 8LL;
      v47 += v61;
      continue;
    }
    break;
  }
  if ( (v57 & 0xF0) == 0x40 )
  {
    v62 = v47[1];
    if ( (v62 & 0xF8) == 0x58 )
    {
      v63 = *(_QWORD *)(v16 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v63 & 3) != 0 )
        goto LABEL_67;
      if ( *(_QWORD *)v56 && (v63 < **(_QWORD **)v56 || v63 > **(_QWORD **)(v56 + 8) - 8LL) )
        return 3221225512LL;
      v64 = v62 & 7 | (8LL * (v57 & 1));
      *(_QWORD *)(v16 + 8 * v64 + 120) = *(_QWORD *)v63;
      v65 = *(_QWORD *)(v56 + 16);
      if ( v65 )
        *(_QWORD *)(v65 + 8 * v64 + 128) = v63;
      v61 = 2LL;
      goto LABEL_146;
    }
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v66 = *(_QWORD *)(v16 + 152);
    if ( (v66 & 3) != 0 )
      goto LABEL_67;
  }
  if ( *(_QWORD *)v56 )
  {
    v67 = *(_QWORD *)(v16 + 152);
    if ( v67 < **(_QWORD **)v56 || v67 > **(_QWORD **)(v56 + 8) - 8LL )
      return 3221225512LL;
  }
  v68 = *(_QWORD **)(v16 + 152);
  *(_QWORD *)(v16 + 248) = *v68;
  *(_QWORD *)(v16 + 152) = v68 + 1;
  RtlpPopUserShadowStack(v16);
  v19 = 0LL;
  if ( v11 )
    *v11 = 0;
LABEL_12:
  if ( v78 )
    *v78 = v19;
  return 0LL;
}
