__int64 CreateXlateObject(__int64 a1, int a2, ...)
{
  __int64 v2; // rdi
  unsigned int v5; // r12d
  __int64 result; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // r15
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdx
  BOOL v16; // edx
  __int64 v17; // r14
  char v18; // r9
  unsigned __int64 v19; // r8
  __int16 v20; // r10
  struct _TRANSLATE *v21; // r11
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rbx
  int v25; // ebx
  int v26; // edx
  int v27; // edi
  int NearestIndexFromColorref; // eax
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // edx
  int v36; // r10d
  int v37; // r9d
  int v38; // edi
  int v39; // ebx
  int v40; // r11d
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int *v44; // rdx
  int *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // r10d
  int v49; // ebx
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  struct _TRANSLATE *v53; // r8
  __int64 v54; // r10
  __int64 v55; // r9
  unsigned int v56; // eax
  _DWORD *v57; // rcx
  unsigned int v58; // eax
  _DWORD *v59; // rcx
  unsigned int j; // edx
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  struct _TRANSLATE *v64; // rdx
  _DWORD *v65; // r12
  unsigned int v66; // eax
  _DWORD *v67; // rcx
  _DWORD *v68; // rbx
  __int16 v69; // ax
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // edx
  __int64 v73; // rax
  int v74; // eax
  int v75; // ebx
  _DWORD *v76; // rsi
  char *v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rdi
  unsigned int v80; // r14d
  __int64 v81; // rbx
  int v82; // eax
  unsigned int k; // edi
  int v84; // eax
  __int64 v85; // rcx
  char v86; // [rsp+20h] [rbp-48h]
  __int16 v87; // [rsp+24h] [rbp-44h]
  int v88; // [rsp+24h] [rbp-44h]
  __int16 v89; // [rsp+28h] [rbp-40h]
  BOOL v90; // [rsp+2Ch] [rbp-3Ch]
  int v91; // [rsp+2Ch] [rbp-3Ch]
  int v92; // [rsp+30h] [rbp-38h]
  struct _TRANSLATE *v93; // [rsp+38h] [rbp-30h]
  struct _TRANSLATE *v94; // [rsp+40h] [rbp-28h]
  struct Gre::Base::SESSION_GLOBALS *v95; // [rsp+48h] [rbp-20h]
  __int64 v96; // [rsp+58h] [rbp-10h]
  __int64 i; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v99; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  __int64 v101; // [rsp+C0h] [rbp+58h]
  __int64 v102; // [rsp+C8h] [rbp+60h]
  __int64 v103; // [rsp+D0h] [rbp+68h]
  __int64 v104; // [rsp+D8h] [rbp+70h]
  __int64 v105; // [rsp+E0h] [rbp+78h]
  __int64 v106; // [rsp+E8h] [rbp+80h]
  va_list va2; // [rsp+F0h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  i = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v99 = va_arg(va2, _QWORD);
  v101 = va_arg(va2, _QWORD);
  v102 = va_arg(va2, _QWORD);
  v103 = va_arg(va2, _QWORD);
  v104 = va_arg(va2, _QWORD);
  v105 = va_arg(va2, _QWORD);
  v106 = va_arg(va2, _QWORD);
  v2 = i;
  v87 = v106;
  if ( i )
    v5 = *(_DWORD *)(i + 28);
  else
    v5 = 256;
  result = AllocThreadBufferWithTag(4 * v5 + 88, 1953265735LL, 0LL);
  v8 = result;
  if ( !result )
    return result;
  v9 = Gre::Base::Globals(v7);
  v10 = 0;
  v11 = v8 + 84;
  *(_DWORD *)v8 = _InterlockedIncrement((volatile signed __int32 *)v9 + 962);
  v12 = 0LL;
  if ( !v5 )
  {
    v12 = 512LL;
    v11 = 0LL;
  }
  v13 = 2;
  if ( !v5 )
    v13 = 0;
  *(_DWORD *)(v8 + 4) = v13;
  *(_QWORD *)(v8 + 16) = v11;
  *(_DWORD *)(v8 + 76) = v12;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = v5;
  *(_DWORD *)(v8 + 36) = -1;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  v95 = Gre::Base::Globals((Gre::Base *)v12);
  v14 = *((_QWORD *)v95 + 5);
  v96 = v14;
  GreAcquireSemaphore(v14);
  *(_DWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      *(_DWORD *)(v8 + 72) = a2;
      *(_QWORD *)(v8 + 64) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v15) = 14;
        v50 = HmgShareLockCheck(a1, v15);
        if ( v50 )
        {
          *(_DWORD *)(v8 + 4) |= 0x10u;
          DEC_SHARE_REF_CNT(v50);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v51 = *(_DWORD *)(v8 + 4) | 0x20;
        *(_DWORD *)(v8 + 4) = v51;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v8 + 4) = v51 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)(v8 + 4) |= 0x20u;
      *(_DWORD *)(v8 + 72) = a2;
    }
  }
  v16 = (*(_DWORD *)(v8 + 4) & 8) != 0;
  v90 = v16;
  if ( !v99 || (*(_DWORD *)(v99 + 24) & 0x800) != 0 )
  {
    v17 = v102;
    v18 = 1;
    v19 = (unsigned __int64)v95;
    v86 = 1;
    if ( !*(_QWORD *)(v102 + 72) )
      v17 = *((_QWORD *)v95 + 750);
    v20 = v87;
    if ( (v87 & 0x2000) == 0 )
    {
      v52 = *(_DWORD *)(v8 + 76) | 0x800;
      *(_DWORD *)(v8 + 76) = v52;
      if ( v99 )
        *(_DWORD *)(v8 + 76) = v52 | 0x1000;
    }
  }
  else
  {
    v17 = v102;
    v18 = 0;
    v19 = (unsigned __int64)v95;
    v20 = v87;
    v86 = 0;
  }
  *(_QWORD *)(v8 + 40) = v2;
  *(_QWORD *)(v8 + 48) = v99;
  *(_QWORD *)(v8 + 56) = v17;
  v21 = *(struct _TRANSLATE **)(v17 + 72);
  v94 = v21;
  v93 = *(struct _TRANSLATE **)(v17 + 80);
  if ( v2 )
  {
    v22 = *(_DWORD *)(v2 + 24);
    v23 = v22 & 0x800;
    v89 = v22;
    v92 = v23;
    if ( (v22 & 0x800) == 0 || v21 != *(struct _TRANSLATE **)(v17 + 80) && (v20 & 0x4000) == 0 )
    {
      v24 = v99;
      if ( (v22 & 0x8000) != 0 )
      {
        if ( !v99 )
          goto LABEL_164;
        v43 = *(_DWORD *)(v99 + 24);
        if ( (v43 & 0x8000) != 0 )
        {
          v19 = *(unsigned int *)(v99 + 28);
          if ( (_DWORD)v19 == 256 && *(_DWORD *)(v2 + 28) == 256 )
          {
            if ( (v43 & 0x100) == 0 )
              goto LABEL_97;
            v54 = *(_QWORD *)(v99 + 72);
            if ( v54 )
            {
              LODWORD(v55) = 256;
              while ( 1 )
              {
                v55 = (unsigned int)(v55 - 1);
                if ( *(unsigned __int8 *)(v55 + v54 + 4) != (_DWORD)v55 )
                  break;
                if ( !(_DWORD)v55 )
                {
LABEL_97:
                  while ( 1 )
                  {
                    v19 = (unsigned int)(v19 - 1);
                    if ( ((*(_DWORD *)(*(_QWORD *)(v99 + 112) + 4 * v19) ^ *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4 * v19)) & 0xFFFFFF) != 0 )
                      goto LABEL_102;
                    if ( !(_DWORD)v19 )
                      goto LABEL_99;
                  }
                }
              }
LABEL_102:
              v18 = v86;
              v23 = *(_DWORD *)(v2 + 24) & 0x800;
            }
            v20 = v87;
          }
        }
        if ( !v99 || (*(_DWORD *)(v99 + 24) & 0x800) != 0 && v21 == v93 )
        {
LABEL_164:
          if ( (unsigned int)bEqualRGB_In_Palette(v2, v17, v19) )
          {
LABEL_99:
            v56 = 0;
            v57 = (_DWORD *)(v8 + 84);
            do
              *v57++ = v56++;
            while ( v56 < 0x100 );
            goto LABEL_101;
          }
          v23 = v92;
          v16 = v90;
          v18 = v86;
          v20 = v87;
          v21 = v94;
        }
        LOWORD(v22) = v89;
      }
      if ( !v23 || v24 )
      {
        if ( (v22 & 0x2000) != 0 )
        {
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
          {
            *(_DWORD *)(v8 + 84) = 0;
            *(_DWORD *)(v8 + 88) = 1;
          }
          else
          {
            v27 = v103;
            if ( v26 )
            {
              v29 = v104;
              v30 = v104;
              *(_DWORD *)(v8 + 84) = v103;
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v24, v17, (unsigned int)v103, 1LL);
              v29 = v104;
              *(_DWORD *)(v8 + 84) = NearestIndexFromColorref;
              v30 = ulGetNearestIndexFromColorref(v99, v17, v29, 1LL);
            }
            *(_DWORD *)(v8 + 88) = v30;
            *(_DWORD *)(v8 + 76) |= 0x100u;
            *(_DWORD *)(v8 + 28) = v27;
            *(_DWORD *)(v8 + 32) = v29;
          }
        }
        else if ( v5 )
        {
          if ( v24 && (*(_DWORD *)(v24 + 24) & 0x2000) != 0 )
          {
            memset_0((void *)(v8 + 84), 0, 4LL * v5);
            v49 = v105;
            *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(v2, v101, (unsigned int)v105, 1LL) + 84) = 1;
            *(_DWORD *)(v8 + 4) |= 4u;
            *(_DWORD *)(v8 + 24) = v49;
          }
          else if ( v16 )
          {
            v63 = 4LL * v5;
            do
            {
              v63 -= 4LL;
              *(_DWORD *)(v8 + v63 + 84) = *(_DWORD *)(v63 + *(_QWORD *)(v2 + 112));
              --v5;
            }
            while ( v5 );
          }
          else
          {
            v48 = v20 & 0x2000;
            v88 = v48;
            if ( !v18 || v48 )
            {
              v17 = v24;
              if ( v48 )
                *(_DWORD *)(v8 + 76) |= 0x2000u;
            }
            for ( i = v17; ; v17 = i )
            {
              --v5;
              *(_DWORD *)(v8 + 4LL * v5 + 84) = XEPALOBJ::ulDispatchGFPEFunction(
                                                  (__int64 *)va,
                                                  *(unsigned int *)(v17 + 96),
                                                  *(unsigned int *)(*(_QWORD *)(v2 + 112) + 4LL * v5));
              if ( !v5 )
                break;
            }
            if ( v86 && !v88 )
            {
              v64 = v93;
              if ( !v99 )
                v64 = v94;
              XLATE::vMapNewXlate((XLATE *)v8, v64);
            }
          }
        }
        else if ( v24 && (*(_DWORD *)(v24 + 24) & 0x2000) != 0 )
        {
          v25 = v105;
          *(_DWORD *)(v8 + 84) = ulGetNearestIndexFromColorref(v2, v101, (unsigned int)v105, 1LL);
          *(_DWORD *)(v8 + 4) |= 4u;
          *(_DWORD *)(v8 + 24) = v25;
          *(_QWORD *)(v8 + 16) = v8 + 84;
        }
      }
      else
      {
        v58 = 0;
        v59 = (_DWORD *)(v8 + 84);
        do
          *v59++ = v58++;
        while ( v58 < 0x100 );
        for ( j = 0;
              j < *(_DWORD *)(v17 + 28);
              *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v93 + v61 + 4) + 84) = *((unsigned __int8 *)v21 + v61 + 4) )
        {
          v61 = j++;
        }
        v62 = *(_DWORD *)(v2 + 24);
        if ( (v62 & 0x1000) != 0 )
        {
          *(_DWORD *)(v8 + 84) = 0;
          *(_DWORD *)(v8 + 1104) = 255;
        }
        else if ( (v62 & 0x10000) == 0 )
        {
          *(_DWORD *)(v8 + 84) = 0;
          *(_DWORD *)(v8 + 1068) = 246;
          *(_DWORD *)(v8 + 88) = 1;
          *(_DWORD *)(v8 + 1072) = 247;
          *(_DWORD *)(v8 + 92) = 2;
          *(_DWORD *)(v8 + 1076) = 248;
          *(_DWORD *)(v8 + 96) = 3;
          *(_DWORD *)(v8 + 1080) = 249;
          *(_DWORD *)(v8 + 100) = 4;
          *(_DWORD *)(v8 + 1084) = 250;
          *(_DWORD *)(v8 + 104) = 5;
          *(_DWORD *)(v8 + 1088) = 251;
          *(_DWORD *)(v8 + 108) = 6;
          *(_DWORD *)(v8 + 1092) = 252;
          *(_DWORD *)(v8 + 112) = 7;
          *(_DWORD *)(v8 + 1096) = 253;
          *(_DWORD *)(v8 + 116) = 8;
          *(_DWORD *)(v8 + 1100) = 254;
          *(_DWORD *)(v8 + 120) = 9;
          *(_DWORD *)(v8 + 1104) = 255;
        }
      }
      goto LABEL_25;
    }
  }
  if ( v21 )
  {
    v53 = *(struct _TRANSLATE **)(v17 + 80);
  }
  else
  {
    v17 = *(_QWORD *)(v19 + 6000);
    v21 = (struct _TRANSLATE *)&defaultTranslate;
    *(_QWORD *)(v8 + 56) = v17;
    v53 = (struct _TRANSLATE *)&defaultTranslate;
    v94 = (struct _TRANSLATE *)&defaultTranslate;
    v93 = (struct _TRANSLATE *)&defaultTranslate;
  }
  v65 = (_DWORD *)(v8 + 84);
  v66 = 0;
  v67 = (_DWORD *)(v8 + 84);
  do
    *v67++ = v66++;
  while ( v66 < 0x100 );
  v68 = (_DWORD *)v99;
  if ( !v99 )
    goto LABEL_101;
  v91 = *(_DWORD *)(v99 + 24);
  v69 = v91;
  if ( (v91 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v99, v17, v53) || v2 && (unsigned int)bEqualRGB_In_Palette(v70, v2, v71) )
      goto LABEL_101;
    v53 = v93;
    v21 = v94;
    v69 = v91;
  }
  if ( (v69 & 0x800) == 0 )
  {
    if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
    {
      memset_0((void *)(v8 + 84), 0, 0x400uLL);
      v75 = v105;
      *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(v2, v101, (unsigned int)v105, 1LL) + 84) = 1;
      *(_DWORD *)(v8 + 4) |= 4u;
      *(_DWORD *)(v8 + 24) = v75;
    }
    else
    {
      if ( v68[7] != 256 )
      {
        memset_0((void *)(v8 + 84), 0, 0x400uLL);
        v68 = (_DWORD *)v99;
      }
      v76 = (_DWORD *)(v8 + 1068);
      v77 = (char *)v95 - v8;
      v78 = 10LL;
      while ( 1 )
      {
        *v65 = XEPALOBJ::ulDispatchGFPEFunction(
                 (__int64 *)va1,
                 (unsigned int)v68[24],
                 *(unsigned int *)((char *)v65 + (_QWORD)v77 + 3772));
        *v76 = XEPALOBJ::ulDispatchGFPEFunction(
                 (__int64 *)va1,
                 *(unsigned int *)(v99 + 96),
                 *(unsigned int *)((char *)v76 + (_QWORD)v77 + 2828));
        ++v76;
        ++v65;
        if ( !--v78 )
          break;
        v68 = (_DWORD *)v99;
      }
      v10 = 0;
      v79 = i;
      v14 = v96;
      if ( (v87 & 0x2000) != 0 )
      {
        v80 = 0;
        if ( *(_DWORD *)(i + 28) )
        {
          do
          {
            v81 = v80;
            v82 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va1,
                    *(unsigned int *)(v99 + 96),
                    *(unsigned int *)(*(_QWORD *)(v79 + 112) + 4LL * v80++));
            *(_DWORD *)(v8 + 4 * v81 + 84) = v82;
          }
          while ( v80 < *(_DWORD *)(v79 + 28) );
        }
        *(_DWORD *)(v8 + 76) |= 0x2000u;
      }
      else if ( v94 )
      {
        for ( k = 0; k < *(_DWORD *)(v17 + 28); *(_DWORD *)(v8 + 4 * v85 + 84) = v84 )
        {
          v84 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va1,
                  *(unsigned int *)(v99 + 96),
                  *(unsigned int *)(*(_QWORD *)(v17 + 112) + 4LL * k));
          v85 = *((unsigned __int8 *)v94 + k++ + 4);
        }
      }
    }
    goto LABEL_25;
  }
  if ( v53 != v21 )
  {
    v72 = 0;
    if ( *(_DWORD *)(v17 + 28) )
    {
      do
      {
        v73 = v72++;
        *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v21 + v73 + 4) + 84) = *((unsigned __int8 *)v53 + v73 + 4);
      }
      while ( v72 < *(_DWORD *)(v17 + 28) );
      v68 = (_DWORD *)v99;
    }
    v74 = v68[6];
    if ( (v74 & 0x1000) != 0 )
    {
      *v65 = 0;
      *(_DWORD *)(v8 + 1104) = 255;
    }
    else if ( (v74 & 0x10000) == 0 )
    {
      *v65 = 0;
      *(_DWORD *)(v8 + 1068) = 246;
      *(_DWORD *)(v8 + 88) = 1;
      *(_DWORD *)(v8 + 1072) = 247;
      *(_DWORD *)(v8 + 92) = 2;
      *(_DWORD *)(v8 + 1076) = 248;
      *(_DWORD *)(v8 + 96) = 3;
      *(_DWORD *)(v8 + 1080) = 249;
      *(_DWORD *)(v8 + 100) = 4;
      *(_DWORD *)(v8 + 1084) = 250;
      *(_DWORD *)(v8 + 104) = 5;
      *(_DWORD *)(v8 + 1088) = 251;
      *(_DWORD *)(v8 + 108) = 6;
      *(_DWORD *)(v8 + 1092) = 252;
      *(_DWORD *)(v8 + 112) = 7;
      *(_DWORD *)(v8 + 1096) = 253;
      *(_DWORD *)(v8 + 116) = 8;
      *(_DWORD *)(v8 + 1100) = 254;
      *(_DWORD *)(v8 + 120) = 9;
      *(_DWORD *)(v8 + 1104) = 255;
    }
    goto LABEL_25;
  }
LABEL_101:
  *(_DWORD *)(v8 + 4) |= 1u;
LABEL_25:
  v31 = *(_DWORD *)(v8 + 4);
  if ( (v31 & 9) == 0 )
  {
    v32 = *(_DWORD *)(v8 + 12);
    if ( v32 )
    {
      v46 = *(_QWORD *)(v8 + 40);
      if ( !v46 || (v47 = *(_QWORD *)(v8 + 48)) == 0 || *(_DWORD *)(v46 + 28) == *(_DWORD *)(v47 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v8 + 16) + 4LL * v10) == v10 )
        {
          if ( ++v10 >= v32 )
            goto LABEL_39;
        }
      }
    }
    else
    {
      v33 = *(_QWORD *)(v8 + 40);
      v34 = *(_QWORD *)(v8 + 48);
      if ( v33 && v34 && !*(_DWORD *)(v34 + 28) )
      {
        v35 = *(_DWORD *)(v33 + 24);
        v36 = 65280;
        v37 = 16711680;
        if ( (v35 & 2) != 0 )
        {
          v44 = *(int **)(v33 + 112);
          v39 = *v44;
          v38 = v44[1];
          v40 = v44[2];
        }
        else
        {
          v38 = 65280;
          if ( (v35 & 4) != 0 )
          {
            v39 = 255;
            v40 = 16711680;
          }
          else
          {
            v39 = 16711680;
            v40 = 255;
          }
        }
        v41 = *(_DWORD *)(v34 + 24);
        if ( (v41 & 2) != 0 )
        {
          v45 = *(int **)(v34 + 112);
          v42 = *v45;
          v36 = v45[1];
          v37 = v45[2];
        }
        else if ( (v41 & 4) != 0 )
        {
          v42 = 255;
        }
        else
        {
          v42 = 16711680;
          v37 = 255;
        }
        if ( v39 == v42 && v38 == v36 && v40 == v37 )
LABEL_39:
          *(_DWORD *)(v8 + 4) = v31 | 1;
      }
    }
  }
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v14);
  }
  return v8;
}
