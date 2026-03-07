__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned int StringForSid; // esi
  __int64 v10; // r13
  int v11; // r15d
  __int64 v12; // rcx
  unsigned __int16 *v13; // r10
  __int64 v14; // r12
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int v20; // r8d
  unsigned int *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned int *v26; // r15
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rax
  unsigned int *v33; // r10
  __int64 v34; // rcx
  __int64 v35; // r10
  int v36; // r11d
  unsigned int v37; // r12d
  unsigned int *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // r12d
  unsigned int *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  _WORD *v45; // rax
  void *v46; // rdx
  _WORD *v47; // rdi
  _WORD *v48; // rdi
  __int64 v49; // rax
  size_t v50; // rbx
  char *v51; // rdi
  __int64 v52; // r9
  char *v53; // rdi
  int v54; // r15d
  int v55; // r15d
  int v56; // r15d
  int v57; // r15d
  int v58; // r15d
  unsigned int *v59; // r8
  __int64 v60; // r12
  __int64 v61; // rcx
  unsigned int v62; // r9d
  unsigned __int8 *v63; // rdx
  __int64 v64; // r10
  unsigned int v65; // ecx
  unsigned int v66; // r15d
  _DWORD *v67; // r12
  __int64 v68; // r8
  char *v69; // rdi
  __int64 v70; // rax
  size_t v71; // rbx
  __int64 v72; // r12
  unsigned int *v73; // r15
  __int64 v74; // rax
  char *v75; // rdi
  _WORD *v76; // rdx
  size_t v77; // rbx
  char *v78; // rdi
  unsigned int *v79; // r15
  __int64 v80; // r12
  char *v81; // rdi
  __int64 v82; // rax
  size_t v83; // rbx
  unsigned int *v84; // r15
  __int64 v85; // r12
  char *v86; // rdi
  __int64 v87; // rax
  size_t v88; // rbx
  _QWORD *v89; // rcx
  size_t v90; // rax
  int v92; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v94; // [rsp+40h] [rbp-C0h]
  size_t pcbLength; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+68h] [rbp-98h]
  __int64 v99; // [rsp+70h] [rbp-90h]
  wchar_t v100[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v98 = a3;
  v99 = a7;
  Src = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v100, 0, 0x8CuLL);
  P = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    StringForSid = 87;
    goto LABEL_133;
  }
  if ( a2 < 0x14 )
    return 1336;
  v10 = a1[3];
  v11 = *((unsigned __int16 *)a1 + 2);
  if ( !(_DWORD)v10 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v12 = *a1;
  if ( a2 < (unsigned int)v12
    || a2 - (unsigned int)v12 < 4
    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v12), a2 - (unsigned int)v12, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v13, pcbLength, (__int64 *)&Src);
  if ( !StringForSid )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)Src + v14) );
    v15 = (unsigned int)(2 * v14);
    v96 = v15;
    if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
      goto LABEL_131;
    v16 = 2 * v10 + 24;
    if ( v16 < 0x18 )
      goto LABEL_131;
    v17 = v16 + v15;
    if ( v16 + (unsigned int)v15 < v16 )
      goto LABEL_131;
    v18 = -1LL;
    do
      ++v18;
    while ( DstBuf[v18] );
    v19 = v17 + 2 * v18;
    if ( v19 < v17 || (unsigned __int64)(4 * v10) > 0xFFFFFFFF )
      goto LABEL_131;
    if ( a2 - 16 < 4 * (int)v10 )
      goto LABEL_28;
    v94 = v11;
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          goto LABEL_60;
        case 3:
          v33 = a1 + 4;
          while ( 1 )
          {
            v34 = *v33;
            if ( a2 < (unsigned int)v34
              || a2 - (unsigned int)v34 < 2
              || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v34), a2 - (unsigned int)v34, &pcbLength) < 0 )
            {
              goto LABEL_28;
            }
            if ( v19 + (_DWORD)pcbLength + 4 < v19 )
              goto LABEL_131;
            v33 = (unsigned int *)(v35 + 4);
            v19 += pcbLength + 4;
            if ( v36 + 1 >= (unsigned int)v10 )
              goto LABEL_76;
          }
        case 5:
          v25 = 0;
          v26 = a1 + 4;
          while ( 1 )
          {
            v27 = *v26;
            if ( a2 < (unsigned int)v27 )
              goto LABEL_28;
            if ( a2 - (unsigned int)v27 < 4 )
              goto LABEL_28;
            v28 = *(unsigned int *)((char *)a1 + v27);
            v29 = (unsigned int)(v27 + 4);
            if ( !v28 )
              goto LABEL_28;
            v30 = a2 - v29;
            if ( a2 - (unsigned int)v29 < v28 )
              goto LABEL_28;
            if ( v30 < 8 )
              goto LABEL_28;
            v31 = (char *)a1 + v29;
            if ( !v31[1] || v30 - 8 < 4 * (unsigned __int64)(unsigned __int8)v31[1] )
              goto LABEL_28;
            StringForSid = LocalGetStringForSid(v31, (wchar_t **)&P, v98, 0LL, v92, a6);
            if ( StringForSid )
              goto LABEL_133;
            v32 = -1LL;
            do
              ++v32;
            while ( *((_WORD *)P + v32) );
            if ( v19 + 2 * (_DWORD)v32 < v19 )
              goto LABEL_131;
            v19 += 2 * v32;
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            ++v25;
            ++v26;
            if ( v25 >= (unsigned int)v10 )
              goto LABEL_75;
          }
        case 6:
LABEL_60:
          v37 = 0;
          v38 = a1 + 4;
          while ( 1 )
          {
            v39 = *v38;
            if ( a2 < (unsigned int)v39 || a2 - (unsigned int)v39 < 8 )
              break;
            ui64tow_s(*(_QWORD *)((char *)a1 + v39), v100, 0x46uLL, 10);
            v40 = -1LL;
            do
              ++v40;
            while ( v100[v40] );
            if ( v19 + 2 * (_DWORD)v40 < v19 )
              goto LABEL_131;
            ++v37;
            ++v38;
            v19 += 2 * v40;
            if ( v37 >= (unsigned int)v10 )
              goto LABEL_75;
          }
          break;
        case 16:
          v20 = 0;
          v21 = a1 + 4;
          while ( 1 )
          {
            v22 = *v21;
            if ( a2 < (unsigned int)v22 )
              break;
            if ( a2 - (unsigned int)v22 < 4 )
              break;
            v23 = *(unsigned int *)((char *)a1 + v22);
            if ( a2 - (unsigned int)v22 - 4 < v23 )
              break;
            v24 = 4LL * v23;
            if ( v24 > 0xFFFFFFFF || (unsigned int)v24 + v19 < v19 )
              goto LABEL_131;
            ++v20;
            ++v21;
            v19 += v24;
            if ( v20 >= (unsigned int)v10 )
              goto LABEL_76;
          }
          break;
      }
LABEL_28:
      StringForSid = 1336;
      goto LABEL_133;
    }
    v41 = 0;
    v42 = a1 + 4;
    do
    {
      v43 = *v42;
      if ( a2 < (unsigned int)v43 || a2 - (unsigned int)v43 < 8 )
        goto LABEL_28;
      i64tow_s(*(_QWORD *)((char *)a1 + v43), v100, 0x46uLL, 10);
      v44 = -1LL;
      do
        ++v44;
      while ( v100[v44] );
      if ( v19 + 2 * (_DWORD)v44 < v19 )
        goto LABEL_131;
      ++v41;
      ++v42;
      v19 += 2 * v44;
    }
    while ( v41 < (unsigned int)v10 );
LABEL_75:
    v11 = v94;
    LODWORD(v15) = v96;
LABEL_76:
    if ( v19 + 3 < v19 )
    {
LABEL_131:
      StringForSid = 534;
      goto LABEL_133;
    }
    v45 = SddlpAlloc((v19 + 3) & 0xFFFFFFFC);
    pcbLength = (size_t)v45;
    if ( !v45 )
    {
      StringForSid = 8;
      goto LABEL_133;
    }
    v46 = Src;
    *v45 = 40;
    v45[1] = 34;
    v47 = v45 + 2;
    memmove(v45 + 2, v46, (unsigned int)v15);
    v48 = &v47[(unsigned __int64)(unsigned int)v15 >> 1];
    *(_DWORD *)v48 = 2883618;
    switch ( v11 )
    {
      case 1:
        *((_DWORD *)v48 + 1) = 4784212;
        break;
      case 2:
        *((_DWORD *)v48 + 1) = 5570644;
        break;
      case 3:
        *((_DWORD *)v48 + 1) = 5439572;
        break;
      case 5:
        *((_DWORD *)v48 + 1) = 4456532;
        break;
      case 6:
        *((_DWORD *)v48 + 1) = 4325460;
        break;
      case 16:
        *((_DWORD *)v48 + 1) = 5767252;
        break;
      default:
LABEL_85:
        StringForSid = 1336;
LABEL_86:
        ExFreePoolWithTag((PVOID)pcbLength, 0);
        goto LABEL_133;
    }
    v49 = -1LL;
    v48[4] = 44;
    do
      ++v49;
    while ( DstBuf[v49] );
    *(_DWORD *)(v48 + 5) = 7864368;
    v50 = 2LL * (unsigned int)v49;
    v51 = (char *)(v48 + 7);
    memmove(v51, DstBuf, v50);
    v53 = &v51[v50];
    v54 = v11 - 1;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( !v55 )
        goto LABEL_120;
      v56 = v55 - 1;
      if ( !v56 )
      {
        v72 = v10;
        v73 = a1 + 4;
        do
        {
          *(_DWORD *)v53 = 2228268;
          v74 = -1LL;
          v75 = v53 + 4;
          v76 = (_WORD *)((char *)a1 + *v73);
          do
            ++v74;
          while ( v76[v74] );
          v77 = 2LL * (unsigned int)v74;
          memmove(v75, v76, v77);
          v78 = &v75[v77];
          ++v73;
          *(_WORD *)v78 = 34;
          v53 = v78 + 2;
          --v72;
        }
        while ( v72 );
        goto LABEL_129;
      }
      v57 = v56 - 2;
      if ( !v57 )
      {
        v66 = 0;
        v67 = a1 + 4;
        while ( 1 )
        {
          v68 = v98;
          *(_WORD *)v53 = 44;
          v69 = v53 + 2;
          StringForSid = LocalGetStringForSid((char *)a1 + (unsigned int)(*v67 + 4), (wchar_t **)&P, v68, v52, v92, a6);
          if ( StringForSid )
            goto LABEL_86;
          v70 = -1LL;
          do
            ++v70;
          while ( *((_WORD *)P + v70) );
          v71 = 2LL * (unsigned int)v70;
          memmove(v69, P, v71);
          v53 = &v69[v71];
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          ++v66;
          ++v67;
          if ( v66 >= (unsigned int)v10 )
            goto LABEL_130;
        }
      }
      v58 = v57 - 1;
      if ( !v58 )
      {
LABEL_120:
        v79 = a1 + 4;
        v80 = v10;
        do
        {
          *(_WORD *)v53 = 44;
          v81 = v53 + 2;
          ui64tow_s(*(_QWORD *)((char *)a1 + *v79), v100, 0x46uLL, 10);
          v82 = -1LL;
          do
            ++v82;
          while ( v100[v82] );
          v83 = 2LL * (unsigned int)v82;
          memmove(v81, v100, v83);
          v53 = &v81[v83];
          ++v79;
          --v80;
        }
        while ( v80 );
        goto LABEL_129;
      }
      if ( v58 != 10 )
        goto LABEL_85;
      v59 = a1 + 4;
      v60 = v10;
      do
      {
        *(_WORD *)v53 = 44;
        v53 += 2;
        v61 = *v59;
        v62 = *(unsigned int *)((char *)a1 + v61);
        v63 = (unsigned __int8 *)a1 + (unsigned int)(v61 + 4);
        if ( v62 )
        {
          v64 = v62;
          do
          {
            v65 = *v63++;
            *(_WORD *)v53 = a0123456789abcd[(unsigned __int64)v65 >> 4];
            *((_WORD *)v53 + 1) = a0123456789abcd[v65 & 0xF];
            v53 += 4;
            --v64;
          }
          while ( v64 );
        }
        ++v59;
        --v60;
      }
      while ( v60 );
    }
    else
    {
      v84 = a1 + 4;
      v85 = v10;
      do
      {
        *(_WORD *)v53 = 44;
        v86 = v53 + 2;
        i64tow_s(*(_QWORD *)((char *)a1 + *v84), v100, 0x46uLL, 10);
        v87 = -1LL;
        do
          ++v87;
        while ( v100[v87] );
        v88 = 2LL * (unsigned int)v87;
        memmove(v86, v100, v88);
        v53 = &v86[v88];
        ++v84;
        --v85;
      }
      while ( v85 );
    }
LABEL_129:
    StringForSid = 0;
LABEL_130:
    v89 = (_QWORD *)v99;
    v90 = pcbLength;
    *(_DWORD *)v53 = 41;
    *v89 = v90;
  }
LABEL_133:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return StringForSid;
}
