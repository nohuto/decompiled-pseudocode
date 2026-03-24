/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0087360
 * Callers:
 *     GreDrawStream @ 0x1C0083A60 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0159EB4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C011D6A4 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026CF50 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02C01AC (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02DB90C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *__fastcall CreateXlateObject(
        void *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int16 a10)
{
  unsigned int v13; // r13d
  _DWORD *result; // rax
  _DWORD *v15; // r15
  unsigned int v16; // r12d
  _DWORD *v17; // rdx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r9d
  struct PALETTE *v25; // rbx
  __int16 v26; // cx
  int v27; // eax
  struct _TRANSLATE *v28; // r11
  struct _TRANSLATE *v29; // rdx
  int v30; // eax
  __int64 v31; // rsi
  __int16 v32; // r9
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // eax
  _DWORD *v38; // rcx
  unsigned int v39; // eax
  _DWORD *v40; // rcx
  unsigned int v41; // edx
  struct _TRANSLATE *v42; // r9
  __int64 v43; // rax
  int v44; // eax
  int v45; // r9d
  unsigned int v46; // edi
  unsigned int v47; // esi
  unsigned int v48; // eax
  int NearestIndexFromColorref; // eax
  unsigned int v50; // ebx
  size_t v51; // r8
  __int64 v52; // rdx
  int v53; // eax
  struct _TRANSLATE *v54; // rdx
  unsigned int v55; // eax
  _DWORD *v56; // rcx
  _DWORD *v57; // rsi
  int v58; // eax
  struct _TRANSLATE *v59; // r8
  unsigned int v60; // edx
  struct _TRANSLATE *v61; // r14
  __int64 v62; // rax
  unsigned int v63; // ebx
  __int64 v64; // rdi
  __int64 v65; // r13
  __int64 v66; // r14
  __int64 v67; // rdi
  unsigned int v68; // esi
  __int64 v69; // rbx
  int v70; // eax
  struct _TRANSLATE *v71; // r13
  unsigned int j; // esi
  int v73; // eax
  __int64 v74; // rcx
  int v75; // r9d
  unsigned int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // edx
  int v82; // ebx
  int v83; // r8d
  int *v84; // rdx
  int v85; // r11d
  int v86; // edi
  int v87; // r10d
  int v88; // ecx
  int *v89; // rcx
  int v90; // eax
  __int16 v91; // [rsp+20h] [rbp-71h]
  int v92; // [rsp+20h] [rbp-71h]
  struct PALETTE *i; // [rsp+28h] [rbp-69h] BYREF
  int v94; // [rsp+30h] [rbp-61h]
  struct _TRANSLATE *v95; // [rsp+38h] [rbp-59h]
  struct _TRANSLATE *v96; // [rsp+40h] [rbp-51h]
  __int64 v97; // [rsp+48h] [rbp-49h]
  int v98; // [rsp+50h] [rbp-41h]
  __int64 v99; // [rsp+58h] [rbp-39h]
  _BYTE v100[32]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v101; // [rsp+80h] [rbp-11h]
  char v102; // [rsp+E0h] [rbp+4Fh]
  __int64 v103; // [rsp+E8h] [rbp+57h] BYREF

  v103 = a4;
  v91 = a10;
  v99 = a3;
  if ( a3 )
    v13 = *(_DWORD *)(a3 + 28);
  else
    v13 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v13 + 88, 1953265735LL, 0LL, a4);
  v15 = result;
  if ( !result )
    return result;
  v16 = 0;
  v17 = result + 21;
  v18 = 0;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( !v13 )
  {
    v18 = 512;
    v17 = 0LL;
  }
  v19 = 2;
  if ( !v13 )
    v19 = 0;
  v15[1] = v19;
  *((_QWORD *)v15 + 2) = v17;
  v15[19] = v18;
  v15[2] = 0;
  v15[3] = v13;
  v15[9] = -1;
  *((_QWORD *)v15 + 5) = 0LL;
  *((_QWORD *)v15 + 6) = 0LL;
  *((_QWORD *)v15 + 7) = 0LL;
  v20 = ghsemPalette;
  v97 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v15[18] = 0;
  *((_QWORD *)v15 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v15[18] = a2;
      *((_QWORD *)v15 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v100, a1);
        v22 = v101;
        if ( v101 )
        {
          v15[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v22, v21);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v100);
      }
      else if ( (a2 & 1) != 0 )
      {
        v23 = v15[1] | 0x20;
        v15[1] = v23;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v15[1] = v23 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v15[1] |= 0x20u;
      v15[18] = a2;
    }
  }
  v24 = v15[1] & 8;
  v94 = v24;
  if ( !v103 || (*(_DWORD *)(v103 + 24) & 0x800) != 0 )
  {
    v25 = (struct PALETTE *)a6;
    v102 = 1;
    if ( !*(_QWORD *)(a6 + 72) )
      v25 = ppalDefault;
    v26 = v91;
    if ( (v91 & 0x2000) == 0 )
    {
      v27 = v15[19] | 0x800;
      v15[19] = v27;
      if ( v103 )
        v15[19] = v27 | 0x1000;
    }
  }
  else
  {
    v25 = (struct PALETTE *)a6;
    v26 = v91;
    v102 = 0;
  }
  *((_QWORD *)v15 + 5) = a3;
  *((_QWORD *)v15 + 6) = v103;
  *((_QWORD *)v15 + 7) = v25;
  v28 = (struct _TRANSLATE *)*((_QWORD *)v25 + 9);
  v29 = (struct _TRANSLATE *)*((_QWORD *)v25 + 10);
  v96 = v28;
  v95 = v29;
  if ( a3 )
  {
    v30 = *(_DWORD *)(a3 + 24);
    LODWORD(i) = v30;
    v98 = v30 & 0x800;
    if ( (v30 & 0x800) == 0 || v28 != v29 && (v26 & 0x4000) == 0 )
    {
      v31 = v103;
      if ( (v30 & 0x8000) == 0 )
        goto LABEL_57;
      if ( !v103 )
        goto LABEL_51;
      LODWORD(v97) = *(_DWORD *)(v103 + 24);
      v32 = v97;
      if ( (v97 & 0x8000) != 0 )
      {
        v33 = *(_DWORD *)(v103 + 28);
        if ( *(_DWORD *)(a3 + 28) == v33 && v33 == 256 )
        {
          if ( (v97 & 0x100) == 0 )
          {
LABEL_43:
            LODWORD(v36) = 256;
            while ( 1 )
            {
              v36 = (unsigned int)(v36 - 1);
              if ( ((*(_DWORD *)(*(_QWORD *)(v103 + 112) + 4 * v36) ^ *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v36)) & 0xFFFFFF) != 0 )
                break;
              if ( !(_DWORD)v36 )
                goto LABEL_52;
            }
            v32 = v97;
LABEL_48:
            v29 = v95;
            goto LABEL_49;
          }
          v34 = *(_QWORD *)(v103 + 72);
          if ( v34 )
          {
            LODWORD(v35) = 256;
            while ( 1 )
            {
              v35 = (unsigned int)(v35 - 1);
              if ( *(unsigned __int8 *)(v35 + v34 + 4) != (_DWORD)v35 )
                goto LABEL_48;
              if ( !(_DWORD)v35 )
                goto LABEL_43;
            }
          }
        }
      }
LABEL_49:
      if ( (v32 & 0x800) == 0 || v28 != v29 )
      {
LABEL_56:
        v24 = v94;
LABEL_57:
        if ( v98 && !v31 )
        {
          v39 = 0;
          v40 = v15 + 21;
          do
            *v40++ = v39++;
          while ( v39 < 0x100 );
          v41 = 0;
          if ( *((_DWORD *)v25 + 7) )
          {
            v42 = v95;
            do
            {
              v43 = v41++;
              v15[*((unsigned __int8 *)v42 + v43 + 4) + 21] = *((unsigned __int8 *)v28 + v43 + 4);
            }
            while ( v41 < *((_DWORD *)v25 + 7) );
          }
          v44 = *(_DWORD *)(a3 + 24);
LABEL_65:
          if ( (v44 & 0x1000) != 0 )
          {
            v15[21] = 0;
            v15[276] = 255;
          }
          else if ( (v44 & 0x10000) == 0 )
          {
            v15[21] = 0;
            v15[267] = 246;
            v15[22] = 1;
            v15[268] = 247;
            v15[23] = 2;
            v15[269] = 248;
            v15[24] = 3;
            v15[270] = 249;
            v15[25] = 4;
            v15[271] = 250;
            v15[26] = 5;
            v15[272] = 251;
            v15[27] = 6;
            v15[273] = 252;
            v15[28] = 7;
            v15[274] = 253;
            v15[29] = 8;
            v15[275] = 254;
            v15[30] = 9;
            v15[276] = 255;
          }
          goto LABEL_136;
        }
        if ( ((unsigned __int16)i & 0x2000) != 0 )
        {
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v103) )
          {
            v15[21] = 0;
            v15[22] = 1;
          }
          else
          {
            v46 = a7;
            if ( v45 )
            {
              v47 = a8;
              v48 = a8;
              v15[21] = a7;
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v31, v25, a7, 1LL);
              v47 = a8;
              v15[21] = NearestIndexFromColorref;
              v48 = ulGetNearestIndexFromColorref(v103, v25, v47, 1LL);
            }
            v15[22] = v48;
            v15[19] |= 0x100u;
            v15[7] = v46;
            v15[8] = v47;
          }
          goto LABEL_136;
        }
        if ( !v13 )
        {
          if ( v31 && (*(_DWORD *)(v31 + 24) & 0x2000) != 0 )
          {
            v50 = a9;
            v15[21] = ulGetNearestIndexFromColorref(a3, a5, a9, 1LL);
            v15[1] |= 4u;
            v15[6] = v50;
            *((_QWORD *)v15 + 2) = v15 + 21;
          }
          goto LABEL_136;
        }
        if ( !v31 || (*(_DWORD *)(v31 + 24) & 0x2000) == 0 )
        {
          if ( v24 )
          {
            v52 = v13;
            do
            {
              --v52;
              v15[v52 + 21] = *(_DWORD *)(v52 * 4 + *(_QWORD *)(a3 + 112));
              --v13;
            }
            while ( v13 );
          }
          else
          {
            v53 = v91 & 0x2000;
            v92 = v53;
            if ( !v102 || v53 )
            {
              v25 = (struct PALETTE *)v31;
              if ( v53 )
                v15[19] |= 0x2000u;
            }
            for ( i = v25; ; v25 = i )
            {
              --v13;
              v15[v13 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                                &i,
                                *((unsigned int *)v25 + 24),
                                *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v13));
              if ( !v13 )
                break;
            }
            if ( v102 && !v92 )
            {
              v54 = v95;
              if ( !v103 )
                v54 = v96;
              XLATE::vMapNewXlate((XLATE *)v15, v54);
            }
          }
          goto LABEL_136;
        }
        v51 = 4LL * v13;
        goto LABEL_123;
      }
LABEL_51:
      if ( (unsigned int)bEqualRGB_In_Palette(a3, v25) )
      {
LABEL_52:
        v37 = 0;
        v38 = v15 + 21;
        do
          *v38++ = v37++;
        while ( v37 < 0x100 );
        v15[1] |= 1u;
        goto LABEL_136;
      }
      v28 = v96;
      goto LABEL_56;
    }
  }
  if ( !v28 )
  {
    v96 = (struct _TRANSLATE *)&defaultTranslate;
    v95 = (struct _TRANSLATE *)&defaultTranslate;
    v25 = ppalDefault;
    *((_QWORD *)v15 + 7) = ppalDefault;
  }
  v55 = 0;
  v56 = v15 + 21;
  do
    *v56++ = v55++;
  while ( v55 < 0x100 );
  v57 = (_DWORD *)v103;
  if ( v103 )
  {
    LODWORD(i) = *(_DWORD *)(v103 + 24);
    v58 = (unsigned __int16)i & 0x8000;
    if ( ((unsigned __int16)i & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v103, v25) )
      {
        v15[1] |= 1u;
        goto LABEL_136;
      }
      v58 = (unsigned __int16)i & 0x8000;
    }
    if ( v58 && a3 && (unsigned int)bEqualRGB_In_Palette(v57, a3) )
    {
      v15[1] |= 1u;
    }
    else
    {
      if ( ((unsigned __int16)i & 0x800) == 0 )
      {
        if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v103) )
        {
          if ( v57[7] != 256 )
          {
            memset(v15 + 21, 0, 0x400uLL);
            v57 = (_DWORD *)v103;
          }
          v64 = 10LL;
          v65 = 0LL;
          v66 = 10LL;
          while ( 1 )
          {
            v15[v65 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                              &v103,
                              (unsigned int)v57[24],
                              *(unsigned int *)(logDefaultPal + v65 * 4 + 4));
            v15[v66 + 257] = XEPALOBJ::ulDispatchGFPEFunction(
                               &v103,
                               *(unsigned int *)(v103 + 96),
                               *(unsigned int *)(v66 * 4 + logDefaultPal + 4));
            ++v66;
            ++v65;
            if ( !--v64 )
              break;
            v57 = (_DWORD *)v103;
          }
          v67 = v99;
          v20 = v97;
          if ( (v91 & 0x2000) != 0 )
          {
            v68 = 0;
            if ( *(_DWORD *)(v99 + 28) )
            {
              do
              {
                v69 = v68;
                v70 = XEPALOBJ::ulDispatchGFPEFunction(
                        &v103,
                        *(unsigned int *)(v103 + 96),
                        *(unsigned int *)(*(_QWORD *)(v67 + 112) + 4LL * v68++));
                v15[v69 + 21] = v70;
              }
              while ( v68 < *(_DWORD *)(v67 + 28) );
            }
            v15[19] |= 0x2000u;
          }
          else
          {
            v71 = v96;
            if ( v96 )
            {
              for ( j = 0; j < *((_DWORD *)v25 + 7); v15[v74 + 21] = v73 )
              {
                v73 = XEPALOBJ::ulDispatchGFPEFunction(
                        &v103,
                        *(unsigned int *)(v103 + 96),
                        *(unsigned int *)(*((_QWORD *)v25 + 14) + 4LL * j));
                v74 = *((unsigned __int8 *)v71 + j++ + 4);
              }
            }
          }
          goto LABEL_136;
        }
        v51 = 1024LL;
LABEL_123:
        memset(v15 + 21, 0, v51);
        v63 = a9;
        v15[(unsigned int)ulGetNearestIndexFromColorref(a3, a5, a9, 1LL) + 21] = 1;
        v15[1] |= 4u;
        v15[6] = v63;
        goto LABEL_136;
      }
      v59 = v96;
      if ( v95 != v96 )
      {
        v60 = 0;
        if ( *((_DWORD *)v25 + 7) )
        {
          v61 = v95;
          do
          {
            v62 = v60++;
            v15[*((unsigned __int8 *)v59 + v62 + 4) + 21] = *((unsigned __int8 *)v61 + v62 + 4);
          }
          while ( v60 < *((_DWORD *)v25 + 7) );
          v57 = (_DWORD *)v103;
          v20 = v97;
        }
        v44 = v57[6];
        goto LABEL_65;
      }
      v15[1] |= 1u;
    }
  }
  else
  {
    v15[1] |= 1u;
  }
LABEL_136:
  v75 = v15[1];
  if ( (v75 & 9) == 0 )
  {
    v76 = v15[3];
    if ( v76 )
    {
      v77 = *((_QWORD *)v15 + 5);
      if ( !v77 || (v78 = *((_QWORD *)v15 + 6)) == 0 || *(_DWORD *)(v77 + 28) == *(_DWORD *)(v78 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)v15 + 2) + 4LL * v16) == v16 )
        {
          if ( ++v16 >= v76 )
            goto LABEL_160;
        }
      }
    }
    else
    {
      v79 = *((_QWORD *)v15 + 5);
      v80 = *((_QWORD *)v15 + 6);
      if ( v79 && v80 && !*(_DWORD *)(v80 + 28) )
      {
        v81 = *(_DWORD *)(v79 + 24);
        v82 = 65280;
        v83 = 16711680;
        if ( (v81 & 2) != 0 )
        {
          v84 = *(int **)(v79 + 112);
          v85 = *v84;
          v86 = v84[1];
          v87 = v84[2];
        }
        else
        {
          v86 = 65280;
          if ( (v81 & 4) != 0 )
          {
            v85 = 255;
            v87 = 16711680;
          }
          else
          {
            v85 = 16711680;
            v87 = 255;
          }
        }
        v88 = *(_DWORD *)(v80 + 24);
        if ( (v88 & 2) != 0 )
        {
          v89 = *(int **)(v80 + 112);
          v90 = *v89;
          v82 = v89[1];
          v83 = v89[2];
        }
        else if ( (v88 & 4) != 0 )
        {
          v90 = 255;
        }
        else
        {
          v90 = 16711680;
          v83 = 255;
        }
        if ( v85 == v90 && v86 == v82 && v87 == v83 )
LABEL_160:
          v15[1] = v75 | 1;
      }
    }
  }
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v20);
    GreReleaseSemaphoreInternal(v20);
  }
  return v15;
}
