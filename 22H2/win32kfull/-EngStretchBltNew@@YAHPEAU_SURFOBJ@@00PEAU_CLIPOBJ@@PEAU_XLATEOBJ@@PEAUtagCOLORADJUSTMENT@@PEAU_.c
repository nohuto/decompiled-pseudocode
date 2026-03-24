/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00B13EC
 * Callers:
 *     EngStretchBlt @ 0x1C00B12F0 (EngStretchBlt.c)
 * Callees:
 *     EngHTBlt @ 0x1C0019E98 (EngHTBlt.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00B3A70 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B94F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00F68A0 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F6C30 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0108DC4 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0119624 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C011B854 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C016995C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0169BBC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016A99C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A1FF8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  __m128i *v14; // r15
  struct _RECTL *v15; // r12
  struct _POINTL *v16; // rdx
  int v17; // ecx
  LONG x; // eax
  __int64 v19; // rdi
  struct _POINTL v20; // rbx
  struct _POINTL *v21; // r13
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v29; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v32; // edx
  BOOL v33; // eax
  int v34; // ecx
  struct _SURFOBJ *v35; // rax
  LONG y; // ecx
  LONG v37; // eax
  unsigned __int64 v38; // rdx
  XCLIPOBJ *v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // ecx
  int v43; // edx
  unsigned int v44; // edx
  LONG v45; // ecx
  struct _RECTL *v46; // rcx
  LONG v47; // eax
  LONG v48; // ecx
  LONG v49; // edx
  LONG v50; // r8d
  unsigned __int64 v51; // r15
  int v53; // eax
  XCLIPOBJ *v54; // rdi
  int v55; // eax
  __int64 v56; // rax
  _DWORD *v57; // r10
  int v58; // r8d
  XCLIPOBJ *v59; // rax
  __m128i v60; // xmm0
  unsigned int i; // eax
  LONG v62; // eax
  LONG v63; // ecx
  LONG v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // ecx
  struct _RECTL *v67; // rax
  struct _RECTL *v68; // r8
  unsigned __int64 v69; // rcx
  unsigned int v70; // r9d
  unsigned int v71; // eax
  __int64 v72; // rcx
  struct _STRRUN *v73; // r11
  int v74; // ecx
  XCLIPOBJ *v75; // rax
  LONG v76; // r9d
  int j; // r8d
  struct _RECTL *v78; // r10
  int v79; // edx
  struct _STRRUN *v80; // rcx
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  unsigned __int64 v83; // r9
  struct _STRRUN *v84; // rbx
  unsigned int v85; // r8d
  unsigned int v86; // r8d
  LONG v87; // eax
  unsigned __int64 v88; // r9
  struct _POINTL *v89; // r8
  int v90; // eax
  char v91; // dl
  int v92; // ecx
  LONG v93; // ecx
  LONG v94; // r9d
  int v95; // ecx
  LONG v96; // r8d
  LONG v97; // edx
  LONG v98; // edx
  SURFOBJ *v99; // rax
  int v100; // eax
  unsigned int (__fastcall *v101)(HSURF, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct _RECTL *, struct _POINTL *, struct _RECTL *, __int128 *, _QWORD *, unsigned int); // rax
  int v102; // ecx
  int v103; // eax
  LONG v104; // eax
  __int64 p_pvScan0; // rax
  __int64 v106; // r8
  __int64 p_lDelta; // rax
  __int64 v108; // rax
  XCLIPOBJ *v109; // rbx
  unsigned __int64 v110; // r9
  int v111; // [rsp+70h] [rbp-4F8h]
  LONG v112; // [rsp+70h] [rbp-4F8h]
  unsigned int v113; // [rsp+78h] [rbp-4F0h]
  int v114; // [rsp+80h] [rbp-4E8h]
  int v115; // [rsp+80h] [rbp-4E8h]
  __int16 v116; // [rsp+84h] [rbp-4E4h]
  int v117; // [rsp+84h] [rbp-4E4h]
  int v118; // [rsp+88h] [rbp-4E0h]
  int v119; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v120; // [rsp+8Ch] [rbp-4DCh]
  __int64 v121; // [rsp+8Ch] [rbp-4DCh]
  int v122; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v123; // [rsp+90h] [rbp-4D8h]
  int v124; // [rsp+90h] [rbp-4D8h]
  __int64 v125; // [rsp+98h] [rbp-4D0h] BYREF
  struct _SURFOBJ *v126; // [rsp+A0h] [rbp-4C8h]
  unsigned __int64 v127; // [rsp+A8h] [rbp-4C0h]
  unsigned __int64 v128; // [rsp+B0h] [rbp-4B8h]
  SURFOBJ *pso; // [rsp+B8h] [rbp-4B0h]
  XCLIPOBJ *v130; // [rsp+C0h] [rbp-4A8h]
  struct _RECTL *v131; // [rsp+C8h] [rbp-4A0h]
  struct _STRRUN *v132; // [rsp+D0h] [rbp-498h]
  unsigned __int64 v133; // [rsp+D8h] [rbp-490h]
  XCLIPOBJ *v134; // [rsp+E0h] [rbp-488h]
  HSURF v135; // [rsp+E8h] [rbp-480h]
  unsigned __int64 v136; // [rsp+F0h] [rbp-478h] BYREF
  char v137; // [rsp+F8h] [rbp-470h]
  int v138; // [rsp+FCh] [rbp-46Ch]
  LONG v139; // [rsp+100h] [rbp-468h]
  struct _SURFOBJ *v140; // [rsp+108h] [rbp-460h]
  struct _POINTL *v141; // [rsp+110h] [rbp-458h] BYREF
  char v142; // [rsp+118h] [rbp-450h]
  int v143; // [rsp+11Ch] [rbp-44Ch]
  unsigned __int64 v144; // [rsp+120h] [rbp-448h]
  __int64 v145; // [rsp+128h] [rbp-440h]
  struct _POINTL *v146; // [rsp+130h] [rbp-438h]
  SIZEL sizl; // [rsp+138h] [rbp-430h]
  struct REGION *v148[2]; // [rsp+140h] [rbp-428h] BYREF
  _QWORD *v149; // [rsp+150h] [rbp-418h]
  unsigned int v150; // [rsp+158h] [rbp-410h]
  BOOL v151; // [rsp+15Ch] [rbp-40Ch]
  struct _RECTL *v152; // [rsp+160h] [rbp-408h]
  HSURF hsurf; // [rsp+168h] [rbp-400h]
  __int64 v154; // [rsp+170h] [rbp-3F8h]
  struct REGION *v155[2]; // [rsp+178h] [rbp-3F0h] BYREF
  int v156; // [rsp+188h] [rbp-3E0h]
  __int64 v157; // [rsp+190h] [rbp-3D8h] BYREF
  char v158; // [rsp+198h] [rbp-3D0h]
  int v159; // [rsp+19Ch] [rbp-3CCh]
  struct _SURFOBJ *v160; // [rsp+1A0h] [rbp-3C8h]
  unsigned int *v161; // [rsp+1A8h] [rbp-3C0h]
  __int64 v162; // [rsp+1B0h] [rbp-3B8h]
  unsigned __int64 v163; // [rsp+1B8h] [rbp-3B0h]
  struct _SURFOBJ *v164; // [rsp+1C0h] [rbp-3A8h]
  struct _CLIPOBJ *v165; // [rsp+1C8h] [rbp-3A0h]
  struct _RECTL v166; // [rsp+1D0h] [rbp-398h] BYREF
  struct REGION *v167[2]; // [rsp+1E0h] [rbp-388h] BYREF
  _QWORD v168[2]; // [rsp+1F0h] [rbp-378h] BYREF
  __int64 v169; // [rsp+200h] [rbp-368h] BYREF
  int v170; // [rsp+208h] [rbp-360h]
  int v171; // [rsp+20Ch] [rbp-35Ch]
  _DWORD v172[4]; // [rsp+210h] [rbp-358h] BYREF
  __int64 v173; // [rsp+220h] [rbp-348h]
  int v174; // [rsp+228h] [rbp-340h]
  int v175; // [rsp+22Ch] [rbp-33Ch]
  _DWORD v176[4]; // [rsp+230h] [rbp-338h] BYREF
  __int64 v177; // [rsp+240h] [rbp-328h]
  int v178; // [rsp+248h] [rbp-320h]
  int v179; // [rsp+24Ch] [rbp-31Ch]
  struct _POINTL v180; // [rsp+250h] [rbp-318h]
  __int64 v181; // [rsp+258h] [rbp-310h] BYREF
  struct _POINTL v182; // [rsp+260h] [rbp-308h] BYREF
  __int64 v183; // [rsp+268h] [rbp-300h] BYREF
  void (*const near *v184)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+270h] [rbp-2F8h]
  __int64 v185; // [rsp+278h] [rbp-2F0h] BYREF
  struct _RECTL v186; // [rsp+280h] [rbp-2E8h] BYREF
  struct _RECTL v187; // [rsp+290h] [rbp-2D8h] BYREF
  struct _RECTL v188; // [rsp+2A0h] [rbp-2C8h] BYREF
  struct _RECTL v189; // [rsp+2B0h] [rbp-2B8h] BYREF
  __m128i v190; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int128 v191; // [rsp+2D0h] [rbp-298h] BYREF
  __int128 v192; // [rsp+2E0h] [rbp-288h] BYREF
  struct _RECTL v193; // [rsp+2F0h] [rbp-278h] BYREF
  struct _RECTL v194; // [rsp+300h] [rbp-268h] BYREF
  int v195; // [rsp+310h] [rbp-258h]
  struct _RECTL v196; // [rsp+318h] [rbp-250h] BYREF
  struct _RECTL v197; // [rsp+328h] [rbp-240h] BYREF
  _BYTE v198[160]; // [rsp+340h] [rbp-228h] BYREF
  _BYTE v199[160]; // [rsp+3E0h] [rbp-188h] BYREF
  _BYTE v200[4]; // [rsp+480h] [rbp-E8h] BYREF
  char v201[156]; // [rsp+484h] [rbp-E4h] BYREF

  v130 = (XCLIPOBJ *)a4;
  v140 = a3;
  v11 = a2;
  v126 = a2;
  v12 = a1;
  v135 = (HSURF)a1;
  v128 = (unsigned __int64)a5;
  v164 = a3;
  v160 = a3;
  v165 = a4;
  v13 = a6;
  v131 = (struct _RECTL *)a6;
  v146 = a7;
  v14 = (__m128i *)a8;
  v15 = a9;
  v149 = a10;
  v113 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v127 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v163 = v127;
  v16 = (struct _POINTL *)((unsigned __int64)&a2[-1].pvScan0 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v132 = (struct _STRRUN *)((unsigned __int64)&a3[-1].pvScan0 & -(__int64)(a3 != 0LL));
  if ( !v127 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0LL;
  x = v16[12].x;
  if ( x == 9 || v17 == 10 || x == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v19 = *(_QWORD *)(((unsigned __int64)&v12[-1].pvScan0 & -(__int64)(v12 != 0LL)) + 0x30);
    v154 = v19;
    v162 = v19;
    v20 = v16[6];
    v180 = v20;
    v157 = 0LL;
    v158 = 0;
    v159 = 0;
    v196 = *a9;
    v21 = v16;
    v22 = 1;
    if ( v11->iType == 1 && *(_QWORD *)&v20 && (*(_DWORD *)(*(_QWORD *)&v20 + 40LL) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v11, (struct SURFMEM *)&v157, &v196) )
      {
LABEL_233:
        v22 = 0;
        goto LABEL_64;
      }
      if ( !v157 )
        goto LABEL_64;
      v15 = &v196;
      v11 = (struct _SURFOBJ *)(v157 + 24);
      v126 = (struct _SURFOBJ *)(v157 + 24);
      v21 = (struct _POINTL *)(v157 & -(__int64)(v157 != -24));
      v20 = v21[6];
      v180 = v20;
      v12 = (struct _SURFOBJ *)v135;
      v13 = (struct tagCOLORADJUSTMENT *)v131;
    }
    if ( !v128 || (v23 = 1, (*(_DWORD *)(v128 + 4) & 8) == 0) )
      v23 = 0;
    v111 = v23;
    v156 = v23;
    if ( v23 )
    {
      if ( v11->iType )
        goto LABEL_233;
      if ( v12->iType != 1 )
        goto LABEL_233;
      v24 = (__int64)v140;
      if ( v140 )
        goto LABEL_233;
    }
    else
    {
      v24 = (__int64)v140;
    }
    v25 = a11;
    if ( a11 == 4 )
    {
      if ( v23 )
        goto LABEL_233;
      v53 = EngHTBlt(
              v12,
              v11,
              v24,
              (CLIPOBJ *)v130,
              (struct XLATE *)v128,
              v13,
              (POINTL)v146,
              a8,
              (struct SURFACE *)v15,
              v149,
              0,
              0LL);
      if ( v53 == -1 )
        goto LABEL_233;
      if ( v53 )
      {
        if ( v53 == 1 )
          goto LABEL_64;
        v25 = 4;
      }
      else
      {
        v25 = 3;
        v113 = 3;
      }
    }
    v26 = 0;
    v114 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v29 = bottom;
    if ( bottom < top )
    {
      v29 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v26 = 2;
      v114 = 2;
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
      v114 = v26;
      left = right;
    }
    if ( v25 >= 3 || v132 )
    {
      v33 = 0;
      v118 = 0;
    }
    else
    {
      v118 = 1;
      v33 = 1;
      if ( v32 - left >= v15->right - v15->left )
      {
        v33 = v29 - top < v15->bottom - v15->top;
        v118 = v33;
      }
      v25 = v113;
    }
    v151 = v33;
    if ( !v33 )
    {
      if ( v25 < 3 )
        v25 = 3;
      v113 = v25;
    }
    v150 = v25;
    v34 = *(_DWORD *)(v127 + 112);
    if ( (v34 & 0x40000) == 0 )
    {
      if ( v128 && (*(_DWORD *)(v128 + 4) & 1) == 0 )
      {
        v35 = v126;
      }
      else
      {
        v35 = v126;
        if ( !v126->iType )
          goto LABEL_33;
      }
      if ( *(_WORD *)(v127 + 100) )
      {
        if ( (v34 & 2) != 0 && !v26 && !v140 )
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
                  v192 = 0LL;
                  LODWORD(v121) = v96 - v94;
                  sizl.cx = v96 - v94;
                  v98 = v97 - v95;
                  HIDWORD(v121) = v98;
                  sizl.cy = v98;
                  if ( v96 - v94 <= a8->right - a8->left && v98 <= a8->bottom - a8->top )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, *((_DWORD *)v135 + 18), 0, 0LL);
                    v99 = EngLockSurface(hsurf);
                    pso = v99;
                    if ( v99 )
                    {
                      v99->iUniq = 0;
                      *((_QWORD *)&v192 + 1) = v121;
                      if ( (v21[14].x & 0x400) != 0 )
                        v100 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(*(_QWORD *)&v20 + 2840LL))(
                                 v99,
                                 v126,
                                 0LL,
                                 v128,
                                 &v192,
                                 v15);
                      else
                        v100 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                 v99,
                                 v126,
                                 0LL,
                                 v128,
                                 &v192,
                                 v15);
                      if ( !v100
                        || (v101 = *(unsigned int (__fastcall **)(HSURF, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct _RECTL *, struct _POINTL *, struct _RECTL *, __int128 *, _QWORD *, unsigned int))(v19 + 2848)) == 0LL
                        || !v101(v135, pso, 0LL, v130, 0LL, v131, v146, a8, &v192, v149, v113) )
                      {
                        v22 = 0;
                      }
                      EngUnlockSurface(pso);
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
    v136 = 0LL;
    v137 = 0;
    v138 = 0;
    v190 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v198);
    y = v21[7].y;
    v37 = v21[7].x;
    *(_QWORD *)&v186.left = 0LL;
    v186.right = v37;
    v186.bottom = y;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
    v38 = v127;
    v116 = *(_WORD *)(v127 + 100);
    if ( v116 || *(_QWORD *)(v127 + 32) == *(_QWORD *)&v21[4] )
    {
      v190 = *(__m128i *)a8;
      v122 = _mm_cvtsi128_si32(v190);
      v188.left = v122 - 1;
      v188.top = v190.m128i_i32[1] - 1;
      v124 = _mm_cvtsi128_si32(_mm_srli_si128(v190, 8));
      v188.right = v124 + 1;
      v188.bottom = _mm_srli_si128(v190, 8).m128i_i32[1] + 1;
      v102 = *(_DWORD *)(v127 + 60);
      v103 = *(_DWORD *)(v127 + 56);
      v169 = 0LL;
      v170 = v103;
      v171 = v102;
      ERECTL::operator*=(&v188.left, (int *)&v169);
      if ( ERECTL::bEmpty((ERECTL *)&v188) )
        goto LABEL_63;
      if ( v116
        || v188.left <= v15->right && v188.right >= v15->left && v188.top <= v15->bottom && v188.bottom >= v15->top )
      {
        v190.m128i_i32[0] = v122 - v188.left;
        v190.m128i_i32[1] -= v188.top;
        v190.m128i_i32[2] = v124 - v188.left;
        v190.m128i_i32[3] -= v188.top;
        v172[3] = 0;
        v175 = 0;
        v172[1] = v188.right - v188.left + 1;
        v172[2] = v188.bottom - v188.top + 1;
        v173 = 0LL;
        if ( v111 )
          v104 = v21[12].x;
        else
          v104 = *(_DWORD *)(v127 + 96);
        v172[0] = v104;
        v174 = *(_DWORD *)(v127 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v136, (struct _DEVBITMAPINFO *)v172, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v136 )
          goto LABEL_232;
        v125 = *(_QWORD *)&v188.left;
        if ( !v148[0] )
          goto LABEL_232;
        *(_QWORD *)&v188.left = 0LL;
        v188.right -= v125;
        v188.bottom -= HIDWORD(v125);
        RGNOBJ::vSet((RGNOBJ *)v148, &v188);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v198, v148[0], (struct ERECTL *)&v188, 1);
        v181 = *(_QWORD *)(v127 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v181, (struct _SURFOBJ *)(v127 + 24), 0LL, 0);
        if ( v132 )
        {
          if ( (*(_DWORD *)(v127 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))(v19 + 2840))(
              (v136 + 24) & -(__int64)(v136 != 0),
              v127 + 24,
              0LL,
              xloIdent,
              &v188,
              &v125);
          else
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
              (v136 + 24) & -(__int64)(v136 != 0),
              v127 + 24,
              0LL,
              xloIdent,
              &v188,
              &v125);
        }
        v144 = v136;
        v14 = &v190;
        v39 = (XCLIPOBJ *)v198;
LABEL_36:
        pso = (SURFOBJ *)v14;
        v134 = v39;
        v182 = v21[6];
        PDEVOBJ::vSync((PDEVOBJ *)&v182, v126, 0LL, 0);
        ERECTL::operator*=(&v186.left, &v15->left);
        if ( v186.left == v186.right || v186.top == v186.bottom )
          goto LABEL_63;
        v141 = 0LL;
        v142 = 0;
        v143 = 0;
        v191 = 0LL;
        if ( v114 || LOWORD(v21[12].y) || (unsigned int)(v21[12].x - 7) <= 1 )
        {
          v176[3] = 0;
          v179 = 0;
          v176[1] = v186.right - v186.left;
          v176[2] = v186.bottom - v186.top;
          v177 = 0LL;
          if ( v111 )
            v87 = v21[12].x;
          else
            v87 = *(_DWORD *)(v144 + 96);
          v176[0] = v87;
          v178 = v21[14].x & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v141, (struct _DEVBITMAPINFO *)v176, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v141 )
            goto LABEL_231;
          DWORD2(v191) = v186.right - v186.left;
          HIDWORD(v191) = v186.bottom - v186.top;
          v88 = 0LL;
          if ( !v111 )
            v88 = v128;
          if ( (v21[14].x & 0x400) != 0 )
            (*(void (__fastcall **)(struct _POINTL *, struct _POINTL *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(*(_QWORD *)&v20 + 2840LL))(
              v141 + 3,
              v21 + 3,
              0LL,
              v88,
              &v191,
              &v186);
          else
            ((void (__fastcall *)(struct _POINTL *, struct _POINTL *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
              &v141[3],
              &v21[3],
              0LL,
              v88,
              &v191,
              &v186);
          LODWORD(v191) = v15->left - v186.left;
          DWORD1(v191) = v15->top - v186.top;
          DWORD2(v191) = v15->right - v186.left;
          HIDWORD(v191) = v15->bottom - v186.top;
          v89 = v141;
          v21 = v141;
          v146 = v141;
          v15 = (struct _RECTL *)&v191;
          sizl = (SIZEL)&v191;
          v133 = 0LL;
          v186.right -= v186.left;
          v90 = v186.bottom - v186.top;
          v186.bottom -= v186.top;
          *(_QWORD *)&v186.left = 0LL;
          v91 = v114;
          if ( (v114 & 2) != 0 )
          {
            v92 = v141[11].x;
            if ( v92 > 0 )
            {
              v141[10] = (struct _POINTL)(*(_QWORD *)&v141[9] + v92 * (v90 - 1));
              v91 = v114;
            }
            else
            {
              v141[10] = v141[9];
            }
            v141[11].x = -v141[11].x;
            v89 = v141;
          }
          if ( (v91 & 1) != 0 )
          {
            v93 = v89[12].x;
            if ( (unsigned int)(v93 - 1) > 5 )
              goto LABEL_231;
            ((void (__fastcall *)(struct _POINTL *))(&apfnMirror)[v93])(v89);
          }
        }
        else
        {
          v146 = v21;
          sizl = (SIZEL)v15;
          v40 = 0LL;
          if ( !v111 )
            v40 = v128;
          v133 = v40;
        }
        v41 = v144;
        v183 = *(_QWORD *)(v144 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v183, (struct _SURFOBJ *)(v144 + 24), 0LL, 0);
        if ( v15->right - v15->left < 128000000 && v15->bottom - v15->top < 128000000 )
        {
          v42 = v14->m128i_i32[2] - v14->m128i_i32[0];
          if ( v42 < 128000000 )
          {
            v43 = v14->m128i_i32[3] - v14->m128i_i32[1];
            if ( v43 < 128000000 && v42 > -128000000 && v43 > -128000000 )
            {
              if ( v113 == 3 && !v140 && (!v133 || (*(_DWORD *)(v133 + 4) & 1) != 0) )
              {
                v44 = *(_DWORD *)(v41 + 96);
                v45 = v21[12].x;
                if ( v44 == v45 && ((v45 - 3) & 0xFFFFFFFC) == 0 && v45 != 5 )
                {
                  if ( v134 && *((_BYTE *)v134 + 20) == 3 )
                  {
                    v197 = 0LL;
                    *(_QWORD *)&v186.right = 0LL;
                    *(_QWORD *)&v186.left = 0LL;
                    v194 = 0LL;
                    v195 = 0;
                    v54 = v130;
                    XCLIPOBJ::cEnumStart(v130, 0, 0, 4u, 0);
                    do
                    {
                      v55 = XCLIPOBJ::bEnum(v54, 0x14u, &v194, 0LL);
                      v119 = v55;
                      if ( v194.left )
                      {
                        StretchDIBDirect(
                          *(void **)(v41 + 80),
                          *(_DWORD *)(v41 + 88),
                          *(_DWORD *)(v41 + 56),
                          *(_DWORD *)(v41 + 60),
                          (struct _RECTL *)v14,
                          *(void **)&v21[10],
                          v21[11].x,
                          v21[7].x,
                          v21[7].y,
                          v15,
                          &v197,
                          (struct _RECTL *)&v194.top,
                          *(_DWORD *)(v41 + 96));
                        ERECTL::operator+=(&v186, &v197);
                        v55 = v119;
                      }
                    }
                    while ( v55 );
                    v19 = v154;
                  }
                  else
                  {
                    v46 = (struct _RECTL *)v14;
                    if ( v134 && *((_BYTE *)v134 + 20) == 1 )
                      v46 = (struct _RECTL *)((char *)v134 + 4);
                    StretchDIBDirect(
                      *(void **)(v41 + 80),
                      *(_DWORD *)(v41 + 88),
                      *(_DWORD *)(v41 + 56),
                      *(_DWORD *)(v41 + 60),
                      (struct _RECTL *)v14,
                      *(void **)&v21[10],
                      v21[11].x,
                      v21[7].x,
                      v21[7].y,
                      v15,
                      &v186,
                      v46,
                      v44);
                  }
                  v47 = v186.left;
                  v189 = v186;
                  v48 = v186.right;
                  v49 = v186.top;
                  v50 = v186.bottom;
LABEL_61:
                  v51 = v127;
                  if ( v41 == v127 )
                    goto LABEL_62;
                  v189.left = v125 + v47;
                  v189.top = HIDWORD(v125) + v49;
                  v189.right = v125 + v48;
                  v189.bottom = HIDWORD(v125) + v50;
                  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v155);
                  if ( v155[0] )
                  {
                    v109 = v130;
                    if ( !v130 )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v155, &v189);
                      goto LABEL_222;
                    }
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v168);
                    if ( v168[0] )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v168, &v189);
                      if ( RGNOBJ::bMerge((RGNOBJ *)v155, (struct RGNOBJ *)v168, (XCLIPOBJ *)((char *)v109 + 56), 8u) )
                      {
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v168);
LABEL_222:
                        v193 = (struct _RECTL)*((_OWORD *)v155[0] + 6);
                        if ( !v109 || bIntersect(&v193, (const struct _RECTL *)((char *)v109 + 4), &v193) )
                        {
                          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v200, v155[0], (struct ERECTL *)&v193, 1);
                          if ( !ERECTL::bEmpty((ERECTL *)v201) )
                          {
                            v188.left += v125;
                            v188.top += HIDWORD(v125);
                            v188.right += v125;
                            v188.bottom += HIDWORD(v125);
                            v125 = 0LL;
                            v110 = v128 & -(__int64)(v156 != 0);
                            if ( (*(_DWORD *)(v51 + 112) & 0x400) != 0 )
                              (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))(v19 + 2840))(
                                v51 + 24,
                                (v136 + 24) & -(__int64)(v136 != 0),
                                v200,
                                v110,
                                &v188,
                                &v125);
                            else
                              ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))EngCopyBits)(
                                v51 + 24,
                                (v136 + 24) & -(__int64)(v136 != 0),
                                v200,
                                v110,
                                &v188,
                                &v125);
                          }
                        }
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v155);
LABEL_62:
                        SURFMEM::~SURFMEM((SURFMEM *)&v141);
LABEL_63:
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
                        SURFMEM::~SURFMEM((SURFMEM *)&v136);
LABEL_64:
                        SURFMEM::~SURFMEM((SURFMEM *)&v157);
                        return v22;
                      }
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v168);
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v155);
                  goto LABEL_231;
                }
              }
              v56 = AllocFreeTmpBuffer(324LL);
              v57 = (_DWORD *)v56;
              v161 = (unsigned int *)v56;
              if ( v56 )
              {
                v185 = v56;
                v58 = 0;
                v117 = 0;
                v59 = v134;
                if ( v134 && *((_BYTE *)v134 + 20) )
                {
                  if ( *((_BYTE *)v134 + 20) != 1 )
                  {
                    if ( *((_BYTE *)v134 + 20) == 3 )
                    {
                      v117 = 1;
                      XCLIPOBJ::cEnumStart(v134, 0, 0, 4u, 0x14u);
                      v59 = v134;
                      v58 = 1;
                      v57 = v161;
                    }
LABEL_85:
                    *(_QWORD *)&v189.right = 0LL;
                    *(_QWORD *)&v189.left = 0LL;
                    if ( v58 )
                      goto LABEL_205;
                    while ( 1 )
                    {
                      for ( i = 0; ; i = v120 + 1 )
                      {
                        v120 = i;
                        v57 = v161;
                        if ( i >= *v161 )
                          break;
                        v152 = (struct _RECTL *)&v161[4 * i + 1];
                        v187 = 0LL;
                        vInitStrDDAClip(&v186, v15, (struct _RECTL *)v14, v152, &v187);
                        if ( !ERECTL::bEmpty((ERECTL *)&v187) )
                        {
                          --v187.left;
                          --v187.top;
                          ++v187.right;
                          ++v187.bottom;
                          ERECTL::operator*=(&v187.left, &v186.left);
                          v62 = v15->right;
                          if ( v62 >= v15->left )
                          {
                            v63 = v15->bottom;
                            v64 = v15->top;
                            if ( v63 >= v64 )
                            {
                              v65 = v62 - v15->left;
                              v66 = v65 + v63 - v64;
                              if ( v66 >= v65 && v66 < 0x3FFFFFF5 )
                              {
                                v67 = (struct _RECTL *)PALLOCMEM2(4 * v66 + 40, 1752462151LL, 0);
                                v131 = v67;
                                if ( v67 )
                                {
                                  vInitStrDDA((struct _STRDDA *)v67, &v187, v15, (struct _RECTL *)v14);
                                  v68 = v131;
                                  v166 = *v131;
                                  v69 = v133;
                                  if ( v133 )
                                  {
                                    if ( (*(_BYTE *)(v133 + 4) & 1) != 0 )
                                      v69 = 0LL;
                                    v133 = v69;
                                  }
                                  v184 = (&apfnWrite)[*(unsigned int *)(v41 + 96)];
                                  if ( v118 )
                                    v131[1].top = (v150 != 1) - 1;
                                  v135 = (HSURF)*(&apfnRead + 3 * v21[12].x + v113 - 1);
                                  hsurf = v135;
                                  v70 = v166.right - v166.left;
                                  if ( v15->right - v15->left > v14->m128i_i32[2] - v14->m128i_i32[0] )
                                  {
                                    if ( v70 >= 0x15555553 )
                                      goto LABEL_215;
                                    v71 = v166.right - v166.left;
                                  }
                                  else
                                  {
                                    if ( v70 + 3 < v70 )
                                      goto LABEL_215;
                                    v71 = (v70 + 3) >> 1;
                                    if ( v71 >= 0x15555553 )
                                      goto LABEL_215;
                                  }
                                  v72 = 12 * (v71 + 2);
                                  if ( v70 > 0x5F5E100 || (unsigned int)v72 > 0x2710000 )
                                    goto LABEL_215;
                                  v73 = (struct _STRRUN *)AllocFreeTmpBuffer(v72);
                                  v132 = v73;
                                  if ( !v73 )
                                  {
                                    v68 = v131;
LABEL_215:
                                    Win32FreePool(v68);
                                    continue;
                                  }
                                  v112 = v187.top;
                                  v145 = *(_QWORD *)&v21[10] + v21[11].x * v187.top;
                                  v154 = 0LL;
                                  if ( v140 )
                                  {
                                    LODWORD(v154) = *(_DWORD *)v149 + v187.left - v15->left;
                                    p_pvScan0 = (__int64)&v160->pvScan0;
                                    if ( !v160 )
                                      p_pvScan0 = 80LL;
                                    v106 = *(_QWORD *)p_pvScan0;
                                    p_lDelta = (__int64)&v160->lDelta;
                                    if ( !v160 )
                                      p_lDelta = 88LL;
                                    v126 = (struct _SURFOBJ *)(v106
                                                             + *(_DWORD *)p_lDelta
                                                             * (v187.top + *((_DWORD *)v149 + 1) - v15->top));
                                  }
                                  else
                                  {
                                    v126 = 0LL;
                                  }
                                  v123 = 0;
                                  if ( v118 )
                                  {
                                    v85 = -1;
                                    if ( v150 != 1 )
                                      v85 = 0;
                                    vInitBuffer(v73, &v166, v85);
                                    v123 = v86;
                                  }
                                  *(_DWORD *)v73 = v131->top;
                                  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v167);
                                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v199);
                                  v74 = 0;
                                  v75 = v134;
                                  if ( v134 && v167[0] )
                                  {
                                    RGNOBJ::vSet((RGNOBJ *)v167, v152);
                                    XCLIPOBJ::vSetup((XCLIPOBJ *)v199, v167[0], (struct ERECTL *)v152, 1);
                                    v74 = 1;
                                    v75 = v134;
                                  }
                                  LODWORD(v152) = v74;
                                  if ( !v75 || v167[0] )
                                  {
                                    v76 = v112;
                                    for ( j = 0; ; ++j )
                                    {
                                      v115 = j;
                                      v139 = v76;
                                      if ( v76 >= v187.bottom )
                                        break;
                                      v78 = v131;
                                      v79 = *(_DWORD *)(*(_QWORD *)&v131[1].right + 4LL * j);
                                      v80 = v132;
                                      *((_DWORD *)v132 + 1) = v79;
                                      if ( v79 )
                                      {
                                        v81 = (unsigned __int64)v199 & -(__int64)((_DWORD)v152 != 0);
                                        v82 = ((__int64 (__fastcall *)(struct _RECTL *, struct _STRRUN *, __int64, struct _SURFOBJ *, unsigned __int64, LONG, LONG, _DWORD))v135)(
                                                v78,
                                                v80,
                                                v145,
                                                v126,
                                                v133,
                                                v187.left,
                                                v187.right,
                                                v154);
                                        v83 = v81;
                                        v84 = v132;
                                        ((void (__fastcall *)(struct _STRRUN *, __int64, unsigned __int64, unsigned __int64))v184)(
                                          v132,
                                          v82,
                                          v144,
                                          v83);
                                        v76 = v112;
                                        if ( v118 )
                                        {
                                          vInitBuffer(v84, &v166, v123);
                                          v76 = v112;
                                        }
                                        j = v115;
                                      }
                                      else if ( v118 )
                                      {
                                        ((void (__fastcall *)(struct _RECTL *, struct _STRRUN *, __int64, _QWORD, unsigned __int64, LONG, LONG, _DWORD))v135)(
                                          v78,
                                          v80,
                                          v145,
                                          0LL,
                                          v133,
                                          v187.left,
                                          v187.right,
                                          0);
                                        j = v115;
                                        v76 = v112;
                                      }
                                      v145 += v21[11].x;
                                      *(_DWORD *)v132 += *((_DWORD *)v132 + 1);
                                      if ( v126 )
                                      {
                                        v108 = (__int64)&v160->lDelta;
                                        if ( !v160 )
                                          v108 = 88LL;
                                        v126 = (struct _SURFOBJ *)((char *)v126 + *(int *)v108);
                                      }
                                      v112 = ++v76;
                                    }
                                    v41 = v144;
                                  }
                                  FreeTmpBuffer(v132);
                                  Win32FreePool(v131);
                                  ERECTL::operator+=(&v189, &v166);
                                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v167);
                                }
                              }
                            }
                          }
                        }
                      }
                      v59 = v134;
                      if ( !v117 )
                      {
                        AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v185);
                        v50 = v189.bottom;
                        v48 = v189.right;
                        v49 = v189.top;
                        v47 = v189.left;
                        goto LABEL_61;
                      }
LABEL_205:
                      v117 = XCLIPOBJ::bEnum(v59, 0x144u, v57, 0LL);
                    }
                  }
                  *v57 = 1;
                  v60 = *(__m128i *)((char *)v59 + 4);
                }
                else
                {
                  *v57 = 1;
                  v60 = *v14;
                }
                v117 = 0;
                *(__m128i *)(v57 + 1) = v60;
                goto LABEL_85;
              }
            }
          }
        }
LABEL_231:
        SURFMEM::~SURFMEM((SURFMEM *)&v141);
LABEL_232:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
        SURFMEM::~SURFMEM((SURFMEM *)&v136);
        goto LABEL_233;
      }
      v38 = v127;
    }
    v144 = v38;
    v39 = v130;
    goto LABEL_36;
  }
  return 1LL;
}
