/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C
 * Callers:
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C002F66C (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00DF30C (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00DF6A0 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z @ 0x1C00F624C (-vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0106F1C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C01083BC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015D508 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015D534 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015DC78 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // r10
  struct _SURFOBJ *v12; // r11
  struct tagCOLORADJUSTMENT *v13; // r9
  struct _RECTL *v14; // r15
  struct _RECTL *v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r13
  unsigned int v22; // r14d
  int v23; // eax
  struct _SURFOBJ *v24; // rdx
  unsigned int v25; // ecx
  int v26; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v29; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v32; // edx
  int v33; // eax
  int v34; // ecx
  struct _SURFOBJ *v35; // rax
  LONG v36; // ecx
  LONG v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // ecx
  int v42; // edx
  unsigned int v43; // edx
  int v44; // ecx
  struct _RECTL *v45; // rcx
  LONG v46; // eax
  LONG v47; // ecx
  LONG v48; // edx
  LONG v49; // r8d
  unsigned __int64 v50; // r15
  int v52; // eax
  XCLIPOBJ *v53; // rdi
  int v54; // eax
  __int64 v55; // rax
  _DWORD *v56; // r10
  int v57; // r8d
  XCLIPOBJ *v58; // rax
  struct _RECTL v59; // xmm0
  unsigned int i; // eax
  LONG v61; // eax
  LONG v62; // ecx
  LONG v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // edx
  struct _SURFOBJ *v67; // rax
  struct _SURFOBJ *v68; // r8
  unsigned __int64 v69; // rcx
  unsigned int v70; // r9d
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r11
  int v74; // ecx
  XCLIPOBJ *v75; // rax
  LONG v76; // r9d
  int j; // r8d
  struct _SURFOBJ *v78; // r10
  int v79; // edx
  _DWORD *v80; // rcx
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  unsigned __int64 v83; // r9
  _DWORD *v84; // rbx
  unsigned int v85; // r8d
  unsigned int v86; // r8d
  int v87; // eax
  BOOL (__stdcall *v88)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v89; // r9
  __int64 v90; // r8
  int v91; // eax
  int v92; // ecx
  int v93; // ecx
  int v94; // r9d
  int v95; // ecx
  LONG v96; // r8d
  LONG v97; // edx
  int v98; // edx
  SURFOBJ *v99; // rax
  int v100; // eax
  unsigned int (__fastcall *v101)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, struct _POINTL *, unsigned int); // rax
  LONG v102; // ecx
  LONG v103; // eax
  int v104; // eax
  BOOL (__stdcall *v105)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 p_lDelta; // rdx
  __int64 p_pvScan0; // rax
  __int64 v108; // rax
  XCLIPOBJ *v109; // rbx
  unsigned int v110; // [rsp+70h] [rbp-4C8h]
  int v111; // [rsp+78h] [rbp-4C0h]
  LONG v112; // [rsp+78h] [rbp-4C0h]
  int v113; // [rsp+7Ch] [rbp-4BCh]
  int v114; // [rsp+7Ch] [rbp-4BCh]
  __int16 v115; // [rsp+80h] [rbp-4B8h]
  int v116; // [rsp+80h] [rbp-4B8h]
  int v117; // [rsp+84h] [rbp-4B4h]
  int v118; // [rsp+88h] [rbp-4B0h]
  unsigned int v119; // [rsp+88h] [rbp-4B0h]
  __int64 v120; // [rsp+88h] [rbp-4B0h]
  int v121; // [rsp+88h] [rbp-4B0h]
  unsigned int v122; // [rsp+8Ch] [rbp-4ACh]
  int v123; // [rsp+8Ch] [rbp-4ACh]
  HSURF sizl; // [rsp+90h] [rbp-4A8h]
  SIZEL sizla; // [rsp+90h] [rbp-4A8h]
  SURFOBJ *sizlb; // [rsp+90h] [rbp-4A8h]
  __int64 v127; // [rsp+98h] [rbp-4A0h] BYREF
  struct _SURFOBJ *v128; // [rsp+A0h] [rbp-498h]
  unsigned __int64 v129; // [rsp+A8h] [rbp-490h]
  BOOL (__stdcall *v130)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+B0h] [rbp-488h]
  _DWORD *v131; // [rsp+B8h] [rbp-480h]
  XCLIPOBJ *v132; // [rsp+C0h] [rbp-478h]
  struct _SURFOBJ *v133; // [rsp+C8h] [rbp-470h]
  unsigned __int64 v134; // [rsp+D0h] [rbp-468h]
  XCLIPOBJ *v135; // [rsp+D8h] [rbp-460h]
  unsigned __int64 v136; // [rsp+E0h] [rbp-458h]
  unsigned __int64 v137; // [rsp+E8h] [rbp-450h] BYREF
  char v138; // [rsp+F0h] [rbp-448h]
  int v139; // [rsp+F4h] [rbp-444h]
  LONG v140; // [rsp+F8h] [rbp-440h]
  struct _SURFOBJ *v141; // [rsp+100h] [rbp-438h]
  __int64 v142; // [rsp+108h] [rbp-430h] BYREF
  char v143; // [rsp+110h] [rbp-428h]
  int v144; // [rsp+114h] [rbp-424h]
  __int64 v145; // [rsp+118h] [rbp-420h]
  unsigned __int64 v146; // [rsp+120h] [rbp-418h]
  __int64 v147; // [rsp+128h] [rbp-410h]
  struct tagCOLORADJUSTMENT *v148; // [rsp+130h] [rbp-408h]
  struct _POINTL *v149; // [rsp+138h] [rbp-400h]
  struct REGION *v150[2]; // [rsp+140h] [rbp-3F8h] BYREF
  unsigned int v151; // [rsp+150h] [rbp-3E8h]
  int v152; // [rsp+154h] [rbp-3E4h]
  struct _POINTL *v153; // [rsp+158h] [rbp-3E0h]
  struct _RECTL *v154; // [rsp+160h] [rbp-3D8h]
  __int64 v155; // [rsp+168h] [rbp-3D0h]
  HSURF hsurf; // [rsp+170h] [rbp-3C8h]
  struct REGION *v157[2]; // [rsp+178h] [rbp-3C0h] BYREF
  int v158; // [rsp+188h] [rbp-3B0h]
  __int64 v159; // [rsp+190h] [rbp-3A8h] BYREF
  char v160; // [rsp+198h] [rbp-3A0h]
  int v161; // [rsp+19Ch] [rbp-39Ch]
  struct _SURFOBJ *v162; // [rsp+1A0h] [rbp-398h]
  __int64 v163; // [rsp+1A8h] [rbp-390h]
  unsigned int *v164; // [rsp+1B0h] [rbp-388h]
  unsigned __int64 v165; // [rsp+1B8h] [rbp-380h]
  struct _SURFOBJ *v166; // [rsp+1C0h] [rbp-378h]
  struct _CLIPOBJ *v167; // [rsp+1C8h] [rbp-370h]
  struct _RECTL v168; // [rsp+1D0h] [rbp-368h] BYREF
  struct REGION *v169[2]; // [rsp+1E0h] [rbp-358h] BYREF
  _DWORD v170[4]; // [rsp+1F0h] [rbp-348h] BYREF
  __int64 v171; // [rsp+200h] [rbp-338h]
  int v172; // [rsp+208h] [rbp-330h]
  int v173; // [rsp+20Ch] [rbp-32Ch]
  _DWORD v174[4]; // [rsp+210h] [rbp-328h] BYREF
  __int64 v175; // [rsp+220h] [rbp-318h]
  int v176; // [rsp+228h] [rbp-310h]
  int v177; // [rsp+22Ch] [rbp-30Ch]
  __int64 v178; // [rsp+230h] [rbp-308h] BYREF
  __int64 v179; // [rsp+238h] [rbp-300h] BYREF
  void (*const near *v180)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+240h] [rbp-2F8h]
  __int64 v181; // [rsp+248h] [rbp-2F0h] BYREF
  struct _RECTL v182; // [rsp+250h] [rbp-2E8h] BYREF
  struct _RECTL v183; // [rsp+260h] [rbp-2D8h] BYREF
  struct _RECTL v184; // [rsp+270h] [rbp-2C8h] BYREF
  struct _RECTL v185; // [rsp+280h] [rbp-2B8h] BYREF
  struct _RECTL v186; // [rsp+290h] [rbp-2A8h] BYREF
  int v187; // [rsp+2A0h] [rbp-298h]
  __m128i v188; // [rsp+2A8h] [rbp-290h] BYREF
  __int128 v189; // [rsp+2B8h] [rbp-280h] BYREF
  struct _RECTL v190; // [rsp+2C8h] [rbp-270h] BYREF
  __int128 v191; // [rsp+2D8h] [rbp-260h] BYREF
  struct _RECTL v192; // [rsp+2E8h] [rbp-250h] BYREF
  struct _RECTL v193; // [rsp+2F8h] [rbp-240h] BYREF
  _BYTE v194[160]; // [rsp+310h] [rbp-228h] BYREF
  _BYTE v195[160]; // [rsp+3B0h] [rbp-188h] BYREF
  _BYTE v196[4]; // [rsp+450h] [rbp-E8h] BYREF
  char v197[156]; // [rsp+454h] [rbp-E4h] BYREF

  v132 = (XCLIPOBJ *)a4;
  v141 = a3;
  v11 = a2;
  v128 = a2;
  v12 = a1;
  v133 = a1;
  v136 = (unsigned __int64)a5;
  v166 = a3;
  v162 = a3;
  v167 = a4;
  v13 = a6;
  v148 = a6;
  v149 = a7;
  v14 = a8;
  v15 = a9;
  v153 = a10;
  v110 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v129 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v165 = v129;
  v16 = (unsigned __int64)&a2[-1].pvScan0 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64);
  v131 = (_DWORD *)((unsigned __int64)&a3[-1].pvScan0 & -(__int64)(a3 != 0LL));
  if ( !v129 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0LL;
  v18 = *(_DWORD *)(v16 + 96);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v19 = *(_QWORD *)(((unsigned __int64)&v12[-1].pvScan0 & -(__int64)(v12 != 0LL)) + 0x30);
    v155 = v19;
    v163 = v19;
    v20 = *(_QWORD *)(v16 + 48);
    v159 = 0LL;
    v160 = 0;
    v161 = 0;
    v193 = *a9;
    v21 = v16;
    v22 = 1;
    if ( v11->iType == 1 && v20 && (*(_DWORD *)(v20 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v11, (struct SURFMEM *)&v159, &v193) )
      {
LABEL_240:
        v22 = 0;
        goto LABEL_64;
      }
      if ( !v159 )
        goto LABEL_64;
      v15 = &v193;
      v11 = (struct _SURFOBJ *)(v159 + 24);
      v128 = (struct _SURFOBJ *)(v159 + 24);
      v21 = v159 & -(__int64)(v159 != -24);
      v20 = *(_QWORD *)(v21 + 0x30);
      v12 = v133;
      v13 = v148;
    }
    if ( !v136 || (v23 = 1, (*(_DWORD *)(v136 + 4) & 8) == 0) )
      v23 = 0;
    v111 = v23;
    v158 = v23;
    if ( v23 )
    {
      if ( v11->iType )
        goto LABEL_240;
      if ( v12->iType != 1 )
        goto LABEL_240;
      v24 = v141;
      if ( v141 )
        goto LABEL_240;
    }
    else
    {
      v24 = v141;
    }
    v25 = a11;
    if ( a11 == 4 )
    {
      if ( v23 )
        goto LABEL_240;
      v52 = EngHTBlt(v12, v11, v24, v132, v136, v13, v149, a8, v15, v153, 0, 0LL);
      if ( v52 == -1 )
        goto LABEL_240;
      if ( v52 )
      {
        if ( v52 == 1 )
          goto LABEL_64;
        v25 = 4;
      }
      else
      {
        v25 = 3;
        v110 = 3;
      }
    }
    v26 = 0;
    v113 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v29 = bottom;
    if ( bottom < top )
    {
      v29 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v26 = 2;
      v113 = 2;
      top = bottom;
    }
    right = a8->right;
    left = a8->left;
    v32 = right;
    if ( right < a8->left )
    {
      v32 = a8->left;
      a8->left = right;
      a8->right = left;
      v26 |= 1u;
      v113 = v26;
      left = right;
    }
    if ( v25 < 3 && !v131 )
    {
      v117 = 1;
      if ( v32 - left < v15->right - v15->left )
      {
        v25 = v110;
LABEL_138:
        v33 = 1;
LABEL_25:
        v152 = v33;
        if ( !v33 )
        {
          if ( v25 < 3 )
            v25 = 3;
          v110 = v25;
        }
        v151 = v25;
        v34 = *(_DWORD *)(v129 + 112);
        if ( (v34 & 0x40000) == 0 )
        {
          if ( v136 && (*(_DWORD *)(v136 + 4) & 1) == 0 )
          {
            v35 = v128;
          }
          else
          {
            v35 = v128;
            if ( !v128->iType )
              goto LABEL_33;
          }
          if ( *(_WORD *)(v129 + 100) )
          {
            if ( (v34 & 2) != 0 && !v26 && !v141 )
            {
              v94 = v15->left;
              if ( v15->left >= 0 )
              {
                v95 = v15->top;
                if ( v95 >= 0 )
                {
                  v96 = v15->right;
                  if ( v96 <= v35->sizlBitmap.cx )
                  {
                    v97 = v15->bottom;
                    if ( v97 <= v35->sizlBitmap.cy )
                    {
                      v191 = 0LL;
                      LODWORD(v120) = v96 - v94;
                      sizla.cx = v96 - v94;
                      v98 = v97 - v95;
                      HIDWORD(v120) = v98;
                      sizla.cy = v98;
                      if ( v96 - v94 <= a8->right - a8->left && v98 <= a8->bottom - a8->top )
                      {
                        hsurf = (HSURF)EngCreateBitmap(sizla, 0, v133->iBitmapFormat, 0, 0LL);
                        v99 = EngLockSurface(hsurf);
                        sizlb = v99;
                        if ( v99 )
                        {
                          v99->iUniq = 0;
                          *((_QWORD *)&v191 + 1) = v120;
                          if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
                            v100 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v20 + 2816))(
                                     v99,
                                     v128,
                                     0LL,
                                     v136,
                                     &v191,
                                     v15);
                          else
                            v100 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                     v99,
                                     v128,
                                     0LL,
                                     v136,
                                     &v191,
                                     v15);
                          if ( !v100
                            || (v101 = *(unsigned int (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, struct _POINTL *, unsigned int))(v19 + 2824)) == 0LL
                            || !v101(v133, sizlb, 0LL, v132, 0LL, v148, v149, a8, &v191, v153, v110) )
                          {
                            v22 = 0;
                          }
                          EngUnlockSurface(sizlb);
                          EngDeleteSurface(hsurf);
                          goto LABEL_64;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_33:
        v137 = 0LL;
        v138 = 0;
        v139 = 0;
        v188 = 0LL;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v194);
        v36 = *(_DWORD *)(v21 + 60);
        v37 = *(_DWORD *)(v21 + 56);
        *(_QWORD *)&v182.left = 0LL;
        v182.right = v37;
        v182.bottom = v36;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v150);
        v38 = v129;
        v115 = *(_WORD *)(v129 + 100);
        if ( v115 || *(_QWORD *)(v129 + 32) == *(_QWORD *)(v21 + 32) )
        {
          v188 = *(__m128i *)a8;
          v121 = _mm_cvtsi128_si32(v188);
          v184.left = v121 - 1;
          v184.top = v188.m128i_i32[1] - 1;
          v123 = _mm_cvtsi128_si32(_mm_srli_si128(v188, 8));
          v184.right = v123 + 1;
          v184.bottom = _mm_srli_si128(v188, 8).m128i_i32[1] + 1;
          v102 = *(_DWORD *)(v129 + 60);
          v103 = *(_DWORD *)(v129 + 56);
          *(_QWORD *)&v190.left = 0LL;
          v190.right = v103;
          v190.bottom = v102;
          ERECTL::operator*=(&v184, &v190);
          if ( ERECTL::bEmpty((ERECTL *)&v184) )
            goto LABEL_63;
          if ( v115
            || v184.left <= v15->right && v184.right >= v15->left && v184.top <= v15->bottom && v184.bottom >= v15->top )
          {
            v188.m128i_i32[0] = v121 - v184.left;
            v188.m128i_i32[1] -= v184.top;
            v188.m128i_i32[2] = v123 - v184.left;
            v188.m128i_i32[3] -= v184.top;
            v170[3] = 0;
            v173 = 0;
            v170[1] = v184.right - v184.left + 1;
            v170[2] = v184.bottom - v184.top + 1;
            v171 = 0LL;
            if ( v111 )
              v104 = *(_DWORD *)(v21 + 96);
            else
              v104 = *(_DWORD *)(v129 + 96);
            v170[0] = v104;
            v172 = *(_DWORD *)(v129 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v137, (struct _DEVBITMAPINFO *)v170, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v137 )
              goto LABEL_239;
            v127 = *(_QWORD *)&v184.left;
            if ( !v150[0] )
              goto LABEL_239;
            *(_QWORD *)&v184.left = 0LL;
            v184.right -= v127;
            v184.bottom -= HIDWORD(v127);
            RGNOBJ::vSet((RGNOBJ *)v150, &v184);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v194, v150[0], (struct ERECTL *)&v184, 1);
            v178 = *(_QWORD *)(v129 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v178, (struct _SURFOBJ *)(v129 + 24), 0LL, 0);
            if ( v131 )
            {
              if ( (*(_DWORD *)(v129 + 112) & 0x400) != 0 )
                v105 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2816);
              else
                v105 = EngCopyBits;
              v130 = EngCopyBits;
              ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))v105)(
                (v137 + 24) & -(__int64)(v137 != 0),
                v129 + 24,
                0LL,
                xloIdent,
                &v184,
                &v127);
            }
            else
            {
              v130 = EngCopyBits;
            }
            v146 = v137;
            v14 = (struct _RECTL *)&v188;
            v135 = (XCLIPOBJ *)v194;
LABEL_36:
            v133 = (struct _SURFOBJ *)v14;
            v179 = *(_QWORD *)(v21 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v179, v128, 0LL, 0);
            ERECTL::operator*=(&v182, v15);
            if ( v182.left == v182.right || v182.top == v182.bottom )
              goto LABEL_63;
            v142 = 0LL;
            v143 = 0;
            v144 = 0;
            v189 = 0LL;
            if ( v113 || *(_WORD *)(v21 + 100) || (unsigned int)(*(_DWORD *)(v21 + 96) - 7) <= 1 )
            {
              v174[3] = 0;
              v177 = 0;
              v174[1] = v182.right - v182.left;
              v174[2] = v182.bottom - v182.top;
              v175 = 0LL;
              if ( v111 )
                v87 = *(_DWORD *)(v21 + 96);
              else
                v87 = *(_DWORD *)(v146 + 96);
              v174[0] = v87;
              v176 = *(_DWORD *)(v21 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v142, (struct _DEVBITMAPINFO *)v174, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v142 )
                goto LABEL_238;
              DWORD2(v189) = v182.right - v182.left;
              HIDWORD(v189) = v182.bottom - v182.top;
              if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
                v88 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2816);
              else
                v88 = EngCopyBits;
              v89 = 0LL;
              if ( !v111 )
                v89 = v136;
              ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))v88)(
                v142 + 24,
                v21 + 24,
                0LL,
                v89,
                &v189,
                &v182);
              LODWORD(v189) = v15->left - v182.left;
              DWORD1(v189) = v15->top - v182.top;
              DWORD2(v189) = v15->right - v182.left;
              HIDWORD(v189) = v15->bottom - v182.top;
              v90 = v142;
              v21 = v142;
              v148 = (struct tagCOLORADJUSTMENT *)v142;
              v15 = (struct _RECTL *)&v189;
              v149 = (struct _POINTL *)&v189;
              v134 = 0LL;
              v182.right -= v182.left;
              v91 = v182.bottom - v182.top;
              v182.bottom -= v182.top;
              *(_QWORD *)&v182.left = 0LL;
              if ( (v113 & 2) != 0 )
              {
                v92 = *(_DWORD *)(v142 + 88);
                if ( v92 > 0 )
                  *(_QWORD *)(v142 + 80) = *(_QWORD *)(v142 + 72) + v92 * (v91 - 1);
                else
                  *(_QWORD *)(v142 + 80) = *(_QWORD *)(v142 + 72);
                *(_DWORD *)(v142 + 88) = -*(_DWORD *)(v142 + 88);
                v90 = v142;
              }
              if ( (v113 & 1) != 0 )
              {
                v93 = *(_DWORD *)(v90 + 96);
                if ( (unsigned int)(v93 - 1) > 5 )
                  goto LABEL_238;
                ((void (__fastcall *)(__int64))(&apfnMirror)[v93])(v90);
              }
            }
            else
            {
              v148 = (struct tagCOLORADJUSTMENT *)v21;
              v149 = (struct _POINTL *)v15;
              v39 = 0LL;
              if ( !v111 )
                v39 = v136;
              v134 = v39;
            }
            v40 = v146;
            *(_QWORD *)&v186.left = *(_QWORD *)(v146 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v186, (struct _SURFOBJ *)(v146 + 24), 0LL, 0);
            if ( v15->right - v15->left < 128000000 && v15->bottom - v15->top < 128000000 )
            {
              v41 = v14->right - v14->left;
              if ( v41 < 128000000 )
              {
                v42 = v14->bottom - v14->top;
                if ( v42 < 128000000 && v41 > -128000000 && v42 > -128000000 )
                {
                  if ( v110 == 3 && !v141 && (!v134 || (*(_DWORD *)(v134 + 4) & 1) != 0) )
                  {
                    v43 = *(_DWORD *)(v40 + 96);
                    v44 = *(_DWORD *)(v21 + 96);
                    if ( v43 == v44 && ((v44 - 3) & 0xFFFFFFFC) == 0 && v44 != 5 )
                    {
                      if ( v135 && *((_BYTE *)v135 + 20) == 3 )
                      {
                        v190 = 0LL;
                        *(_QWORD *)&v182.right = 0LL;
                        *(_QWORD *)&v182.left = 0LL;
                        v186 = 0LL;
                        v187 = 0;
                        v53 = v132;
                        XCLIPOBJ::cEnumStart(v132, 0, 0, 4u, 0);
                        do
                        {
                          v54 = XCLIPOBJ::bEnum(v53, 0x14u, (char *)&v186, 0LL);
                          v118 = v54;
                          if ( v186.left )
                          {
                            StretchDIBDirect(
                              *(char **)(v40 + 80),
                              *(_DWORD *)(v40 + 88),
                              *(_DWORD *)(v40 + 56),
                              *(_DWORD *)(v40 + 60),
                              v14,
                              *(char **)(v21 + 80),
                              *(_DWORD *)(v21 + 88),
                              *(_DWORD *)(v21 + 56),
                              *(_DWORD *)(v21 + 60),
                              v15,
                              &v190,
                              (struct _RECTL *)&v186.top,
                              *(_DWORD *)(v40 + 96));
                            ERECTL::operator+=(&v182, &v190);
                            v54 = v118;
                          }
                        }
                        while ( v54 );
                        v19 = v155;
                      }
                      else
                      {
                        v45 = v14;
                        if ( v135 && *((_BYTE *)v135 + 20) == 1 )
                          v45 = (struct _RECTL *)((char *)v135 + 4);
                        StretchDIBDirect(
                          *(char **)(v40 + 80),
                          *(_DWORD *)(v40 + 88),
                          *(_DWORD *)(v40 + 56),
                          *(_DWORD *)(v40 + 60),
                          v14,
                          *(char **)(v21 + 80),
                          *(_DWORD *)(v21 + 88),
                          *(_DWORD *)(v21 + 56),
                          *(_DWORD *)(v21 + 60),
                          v15,
                          &v182,
                          v45,
                          v43);
                      }
                      v46 = v182.left;
                      v185 = v182;
                      v47 = v182.right;
                      v48 = v182.top;
                      v49 = v182.bottom;
LABEL_61:
                      v50 = v129;
                      if ( v40 == v129 )
                        goto LABEL_62;
                      v185.left = v127 + v46;
                      v185.top = HIDWORD(v127) + v48;
                      v185.right = v127 + v47;
                      v185.bottom = HIDWORD(v127) + v49;
                      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v157);
                      if ( v157[0] )
                      {
                        v109 = v132;
                        if ( !v132 )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v157, &v185);
LABEL_229:
                          v192 = (struct _RECTL)*((_OWORD *)v157[0] + 6);
                          if ( !v109 || bIntersect(&v192, (const struct _RECTL *)((char *)v109 + 4), &v192) )
                          {
                            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v196, v157[0], (struct ERECTL *)&v192, 1);
                            if ( !ERECTL::bEmpty((ERECTL *)v197) )
                            {
                              v184.left += v127;
                              v184.top += HIDWORD(v127);
                              v184.right += v127;
                              v184.bottom += HIDWORD(v127);
                              v127 = 0LL;
                              if ( (*(_DWORD *)(v50 + 112) & 0x400) != 0 )
                                v130 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2816);
                              ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v130)(
                                v50 + 24,
                                (v137 + 24) & -(__int64)(v137 != 0),
                                v196,
                                v136 & -(__int64)(v158 != 0),
                                &v184,
                                &v127);
                            }
                          }
                          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v157);
LABEL_62:
                          SURFMEM::~SURFMEM((SURFMEM *)&v142);
LABEL_63:
                          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v150);
                          SURFMEM::~SURFMEM((SURFMEM *)&v137);
LABEL_64:
                          SURFMEM::~SURFMEM((SURFMEM *)&v159);
                          return v22;
                        }
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v186);
                        if ( *(_QWORD *)&v186.left )
                        {
                          RGNOBJ::vSet((RGNOBJ *)&v186, &v185);
                          if ( RGNOBJ::bMerge(
                                 (RGNOBJ *)v157,
                                 (struct RGNOBJ *)&v186,
                                 (XCLIPOBJ *)((char *)v109 + 56),
                                 8u) )
                          {
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v186);
                            goto LABEL_229;
                          }
                        }
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v186);
                      }
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v157);
                      goto LABEL_238;
                    }
                  }
                  v55 = AllocFreeTmpBuffer(324LL);
                  v56 = (_DWORD *)v55;
                  v164 = (unsigned int *)v55;
                  if ( v55 )
                  {
                    v181 = v55;
                    v57 = 0;
                    v116 = 0;
                    v58 = v135;
                    if ( v135 && *((_BYTE *)v135 + 20) )
                    {
                      if ( *((_BYTE *)v135 + 20) != 1 )
                      {
                        if ( *((_BYTE *)v135 + 20) == 3 )
                        {
                          v116 = 1;
                          XCLIPOBJ::cEnumStart(v135, 0, 0, 4u, 0x14u);
                          v58 = v135;
                          v57 = 1;
                          v56 = v164;
                        }
LABEL_89:
                        *(_QWORD *)&v185.right = 0LL;
                        *(_QWORD *)&v185.left = 0LL;
                        if ( v57 )
                          goto LABEL_211;
                        while ( 1 )
                        {
                          for ( i = 0; ; i = v119 + 1 )
                          {
                            v119 = i;
                            v56 = v164;
                            if ( i >= *v164 )
                              break;
                            v154 = (struct _RECTL *)&v164[4 * i + 1];
                            v183 = 0LL;
                            vInitStrDDAClip(&v182, v15, v14, v154, &v183);
                            if ( !ERECTL::bEmpty((ERECTL *)&v183) )
                            {
                              --v183.left;
                              --v183.top;
                              ++v183.right;
                              ++v183.bottom;
                              ERECTL::operator*=(&v183, &v182);
                              v61 = v15->right;
                              if ( v61 >= v15->left )
                              {
                                v62 = v15->bottom;
                                v63 = v15->top;
                                if ( v62 >= v63 )
                                {
                                  v64 = v61 - v15->left;
                                  v65 = v62 - v63 + v64;
                                  if ( v65 >= v64 && v65 < 0x3FFFFFF5 )
                                  {
                                    v66 = 4 * v65 + 40;
                                    v67 = v66 ? (struct _SURFOBJ *)Win32AllocPool(v66, 1752462151LL) : 0LL;
                                    v128 = v67;
                                    if ( v67 )
                                    {
                                      vInitStrDDA((struct _STRDDA *)v67, &v183, v15, v14);
                                      v68 = v128;
                                      v168 = *(struct _RECTL *)&v128->dhsurf;
                                      v69 = v134;
                                      if ( v134 )
                                      {
                                        if ( (*(_BYTE *)(v134 + 4) & 1) != 0 )
                                          v69 = 0LL;
                                        v134 = v69;
                                      }
                                      v180 = (&apfnWrite)[*(unsigned int *)(v40 + 96)];
                                      if ( v117 )
                                        HIDWORD(v128->dhpdev) = (v151 != 1) - 1;
                                      sizl = (HSURF)*(&apfnRead + 3 * *(unsigned int *)(v21 + 96) + v110 - 1);
                                      hsurf = sizl;
                                      v70 = v168.right - v168.left;
                                      if ( v15->right - v15->left > v14->right - v14->left )
                                      {
                                        if ( v70 >= 0x15555553 )
                                          goto LABEL_222;
                                        v71 = v168.right - v168.left;
                                      }
                                      else
                                      {
                                        if ( v70 + 3 < v70 )
                                          goto LABEL_222;
                                        v71 = (v70 + 3) >> 1;
                                        if ( v71 >= 0x15555553 )
                                          goto LABEL_222;
                                      }
                                      v72 = 12 * (v71 + 2);
                                      if ( v70 > 0x5F5E100 || (unsigned int)v72 > 0x2710000 )
                                        goto LABEL_222;
                                      v73 = AllocFreeTmpBuffer(v72);
                                      v131 = (_DWORD *)v73;
                                      if ( !v73 )
                                      {
                                        v68 = v128;
LABEL_222:
                                        Win32FreePool(v68);
                                        continue;
                                      }
                                      v112 = v183.top;
                                      v147 = *(_QWORD *)(v21 + 80) + v183.top * *(_DWORD *)(v21 + 88);
                                      v155 = 0LL;
                                      if ( v141 )
                                      {
                                        LODWORD(v155) = v183.left + v153->x - v15->left;
                                        p_lDelta = (__int64)&v162->lDelta;
                                        if ( !v162 )
                                          p_lDelta = 88LL;
                                        p_pvScan0 = (__int64)&v162->pvScan0;
                                        if ( !v162 )
                                          p_pvScan0 = 80LL;
                                        v145 = *(_QWORD *)p_pvScan0
                                             + (v183.top + v153->y - v15->top) * *(_DWORD *)p_lDelta;
                                      }
                                      else
                                      {
                                        v145 = 0LL;
                                      }
                                      v122 = 0;
                                      if ( v117 )
                                      {
                                        v85 = -1;
                                        if ( v151 != 1 )
                                          v85 = 0;
                                        vInitBuffer((struct _XRUNLEN *)(v73 + 8), &v168, v85);
                                        v122 = v86;
                                      }
                                      *(_DWORD *)v73 = HIDWORD(v128->dhsurf);
                                      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v169);
                                      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v195);
                                      v74 = 0;
                                      v75 = v135;
                                      if ( v135 && v169[0] )
                                      {
                                        RGNOBJ::vSet((RGNOBJ *)v169, v154);
                                        XCLIPOBJ::vSetup((XCLIPOBJ *)v195, v169[0], (struct ERECTL *)v154, 1);
                                        v74 = 1;
                                        v75 = v135;
                                      }
                                      LODWORD(v154) = v74;
                                      if ( !v75 || v169[0] )
                                      {
                                        v76 = v112;
                                        for ( j = 0; ; ++j )
                                        {
                                          v114 = j;
                                          v140 = v76;
                                          if ( v76 >= v183.bottom )
                                            break;
                                          v78 = v128;
                                          v79 = *((_DWORD *)v128->hdev + j);
                                          v80 = v131;
                                          v131[1] = v79;
                                          if ( v79 )
                                          {
                                            v81 = (unsigned __int64)v195 & -(__int64)((_DWORD)v154 != 0);
                                            v82 = ((__int64 (__fastcall *)(struct _SURFOBJ *, _DWORD *, __int64, __int64, unsigned __int64, LONG, LONG, _DWORD))sizl)(
                                                    v78,
                                                    v80,
                                                    v147,
                                                    v145,
                                                    v134,
                                                    v183.left,
                                                    v183.right,
                                                    v155);
                                            v83 = v81;
                                            v84 = v131;
                                            ((void (__fastcall *)(_DWORD *, __int64, unsigned __int64, unsigned __int64))v180)(
                                              v131,
                                              v82,
                                              v146,
                                              v83);
                                            v76 = v112;
                                            if ( v117 )
                                            {
                                              vInitBuffer((struct _XRUNLEN *)(v84 + 2), &v168, v122);
                                              v76 = v112;
                                            }
                                            j = v114;
                                          }
                                          else if ( v117 )
                                          {
                                            ((void (__fastcall *)(struct _SURFOBJ *, _DWORD *, __int64, _QWORD, unsigned __int64, LONG, LONG, _DWORD))sizl)(
                                              v78,
                                              v80,
                                              v147,
                                              0LL,
                                              v134,
                                              v183.left,
                                              v183.right,
                                              0);
                                            j = v114;
                                            v76 = v112;
                                          }
                                          v147 += *(int *)(v21 + 88);
                                          *v131 += v131[1];
                                          if ( v145 )
                                          {
                                            v108 = (__int64)&v162->lDelta;
                                            if ( !v162 )
                                              v108 = 88LL;
                                            v145 += *(int *)v108;
                                          }
                                          v112 = ++v76;
                                        }
                                        v40 = v146;
                                      }
                                      FreeTmpBuffer(v131);
                                      Win32FreePool(v128);
                                      ERECTL::operator+=(&v185, &v168);
                                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v169);
                                    }
                                  }
                                }
                              }
                            }
                          }
                          v58 = v135;
                          if ( !v116 )
                          {
                            AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v181);
                            v49 = v185.bottom;
                            v47 = v185.right;
                            v48 = v185.top;
                            v46 = v185.left;
                            goto LABEL_61;
                          }
LABEL_211:
                          v116 = XCLIPOBJ::bEnum(v58, 0x144u, (char *)v56, 0LL);
                        }
                      }
                      *v56 = 1;
                      v59 = *(struct _RECTL *)((char *)v58 + 4);
                    }
                    else
                    {
                      *v56 = 1;
                      v59 = *v14;
                    }
                    v116 = 0;
                    *(struct _RECTL *)(v56 + 1) = v59;
                    goto LABEL_89;
                  }
                }
              }
            }
LABEL_238:
            SURFMEM::~SURFMEM((SURFMEM *)&v142);
LABEL_239:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v150);
            SURFMEM::~SURFMEM((SURFMEM *)&v137);
            goto LABEL_240;
          }
          v38 = v129;
        }
        v146 = v38;
        v135 = v132;
        v130 = EngCopyBits;
        goto LABEL_36;
      }
      v25 = v110;
      if ( v29 - top < v15->bottom - v15->top )
        goto LABEL_138;
    }
    v33 = 0;
    v117 = 0;
    goto LABEL_25;
  }
  return 1LL;
}
