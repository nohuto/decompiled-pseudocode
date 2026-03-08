/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C004DE20
 * Callers:
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C0082380 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00825B0 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00CC6E4 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z @ 0x1C00E6014 (-vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C012F6AC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C012F6D8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C012FB90 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02B121C (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
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
  struct tagCOLORADJUSTMENT *v13; // rdx
  struct _POINTL *v14; // r8
  struct _RECTL *v15; // r10
  struct _RECTL *v16; // r9
  int v17; // r13d
  PVOID *v18; // r11
  int *v19; // r12
  int v20; // ecx
  int v21; // eax
  __int64 *v22; // r15
  PVOID v23; // rdi
  int v24; // esi
  unsigned int v25; // ecx
  LONG bottom; // eax
  LONG top; // edx
  LONG v28; // r11d
  LONG right; // eax
  LONG left; // r8d
  LONG v31; // r10d
  BOOL v32; // eax
  struct _RECTL *v33; // r8
  int v34; // ecx
  LONG v35; // ecx
  LONG v36; // eax
  __int16 v37; // r14
  PVOID *v38; // r14
  struct _RECTL *v39; // r15
  struct _RECTL *v40; // rbx
  LONG v41; // r9d
  LONG v42; // edx
  LONG v43; // r8d
  LONG v44; // ecx
  struct _XLATEOBJ *v46; // rdi
  PVOID *v47; // rsi
  int v48; // edx
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // ecx
  struct _RECTL *v52; // rax
  LONG v53; // eax
  LONG v54; // edx
  LONG v55; // edi
  LONG v56; // r8d
  __int64 v58; // rax
  __int64 v59; // rdx
  char *v60; // r8
  XCLIPOBJ *v61; // rdi
  struct _RECTL v62; // xmm0
  struct _RECTL *v63; // rsi
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int v67; // eax
  unsigned int v68; // eax
  struct _STRDDA *v69; // rax
  struct _STRDDA *v70; // r13
  unsigned int v71; // r8d
  unsigned int v72; // eax
  __int64 v73; // rcx
  HSURF v74; // r14
  LONG v75; // ebx
  struct tagCOLORADJUSTMENT *v76; // r15
  __int64 v77; // rdx
  unsigned __int64 v78; // r8
  int v79; // ecx
  int v80; // esi
  _BYTE *v81; // rdi
  __int64 v82; // rax
  LONG v83; // ecx
  unsigned int *v84; // r9
  unsigned int v85; // r10d
  LONG v86; // eax
  LONG v87; // ecx
  int v88; // r10d
  int v89; // eax
  unsigned int v90; // eax
  __int64 v91; // rax
  int v92; // eax
  int v93; // ecx
  int v94; // eax
  LONG v95; // r8d
  LONG v96; // edx
  LONG v97; // edx
  SURFOBJ *v98; // rax
  int v99; // eax
  unsigned int (__fastcall *v100)(struct _SURFOBJ *, SIZEL, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, struct _POINTL *, unsigned int); // rax
  LONG v101; // ecx
  LONG v102; // eax
  LONG v103; // ecx
  LONG v104; // edx
  LONG v105; // eax
  int v106; // eax
  _DWORD *v107; // r14
  __int64 v108; // rax
  LONG v109; // edx
  PVOID *v110; // r15
  Gre::Base *v111; // rcx
  struct Gre::Base::SESSION_GLOBALS *v112; // r9
  BOOL (__stdcall *v113)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v114; // r9
  PVOID *v115; // rcx
  int v116; // eax
  BOOL (__stdcall *v117)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _XLATEOBJ *v118; // r9
  __int64 v119; // rdi
  int v120; // eax
  int v121; // ecx
  __int64 v122; // rcx
  int v123; // ecx
  int v124; // ebx
  LONG v125; // edx
  LONG v126; // edi
  LONG v127; // ecx
  LONG v128; // edx
  struct REGION *v129; // rdx
  struct _XLATEOBJ *v130; // r9
  PVOID *v131; // rdx
  unsigned int v132; // [rsp+70h] [rbp-518h]
  BOOL v133; // [rsp+78h] [rbp-510h]
  XCLIPOBJ *v134; // [rsp+80h] [rbp-508h]
  unsigned int v135; // [rsp+88h] [rbp-500h]
  LONG v136; // [rsp+88h] [rbp-500h]
  PVOID *v137; // [rsp+90h] [rbp-4F8h]
  int v138; // [rsp+98h] [rbp-4F0h]
  LONG v139; // [rsp+9Ch] [rbp-4ECh]
  int v140; // [rsp+9Ch] [rbp-4ECh]
  unsigned int i; // [rsp+A0h] [rbp-4E8h]
  int v142; // [rsp+A0h] [rbp-4E8h]
  int v143; // [rsp+A0h] [rbp-4E8h]
  struct _RECTL *v144; // [rsp+A8h] [rbp-4E0h]
  struct _XLATEOBJ *v145; // [rsp+B0h] [rbp-4D8h]
  struct _RECTL *v146; // [rsp+B8h] [rbp-4D0h]
  struct REGION *v147; // [rsp+C0h] [rbp-4C8h] BYREF
  struct _SURFOBJ *v148; // [rsp+C8h] [rbp-4C0h] BYREF
  SIZEL sizl; // [rsp+D0h] [rbp-4B8h]
  PVOID *v150; // [rsp+D8h] [rbp-4B0h]
  unsigned int v151; // [rsp+E0h] [rbp-4A8h]
  LONG v152; // [rsp+F0h] [rbp-498h]
  XCLIPOBJ *v153; // [rsp+100h] [rbp-488h]
  struct REGION *v154; // [rsp+108h] [rbp-480h] BYREF
  __int64 v155; // [rsp+110h] [rbp-478h] BYREF
  BOOL (__stdcall *v156)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+118h] [rbp-470h]
  PVOID *v157; // [rsp+120h] [rbp-468h] BYREF
  char v158; // [rsp+128h] [rbp-460h]
  int v159; // [rsp+12Ch] [rbp-45Ch]
  __int64 v160; // [rsp+130h] [rbp-458h] BYREF
  char v161; // [rsp+138h] [rbp-450h]
  int v162; // [rsp+13Ch] [rbp-44Ch]
  LONG v163; // [rsp+140h] [rbp-448h]
  __int64 v164; // [rsp+148h] [rbp-440h]
  PVOID *v165; // [rsp+150h] [rbp-438h]
  __int64 v166; // [rsp+158h] [rbp-430h] BYREF
  char v167; // [rsp+160h] [rbp-428h]
  int v168; // [rsp+164h] [rbp-424h]
  struct _POINTL *v169; // [rsp+168h] [rbp-420h]
  struct tagCOLORADJUSTMENT *v170; // [rsp+170h] [rbp-418h]
  __int64 v171; // [rsp+178h] [rbp-410h]
  struct _XLATEOBJ *v172; // [rsp+180h] [rbp-408h]
  struct REGION *v173; // [rsp+188h] [rbp-400h] BYREF
  BOOL v174; // [rsp+190h] [rbp-3F8h]
  struct _RECTL *v175; // [rsp+198h] [rbp-3F0h]
  PVOID *v176; // [rsp+1A0h] [rbp-3E8h]
  HSURF hsurf; // [rsp+1A8h] [rbp-3E0h]
  struct _RECTL v178; // [rsp+1B0h] [rbp-3D8h] BYREF
  PVOID v179; // [rsp+1C0h] [rbp-3C8h]
  int v180; // [rsp+1C8h] [rbp-3C0h]
  int v181; // [rsp+1CCh] [rbp-3BCh]
  struct _POINTL *v182; // [rsp+1D0h] [rbp-3B8h]
  PVOID *v183; // [rsp+1D8h] [rbp-3B0h]
  struct _RECTL *v184; // [rsp+1E0h] [rbp-3A8h]
  LONG *p_right; // [rsp+1E8h] [rbp-3A0h]
  _DWORD *v186; // [rsp+1F0h] [rbp-398h]
  struct _XLATEOBJ *v187; // [rsp+1F8h] [rbp-390h]
  LONG *p_top; // [rsp+200h] [rbp-388h]
  __int64 v189; // [rsp+208h] [rbp-380h]
  struct _STRDDA *v190; // [rsp+210h] [rbp-378h]
  SIZEL v191; // [rsp+218h] [rbp-370h]
  _DWORD v192[4]; // [rsp+220h] [rbp-368h] BYREF
  __int64 v193; // [rsp+230h] [rbp-358h]
  int v194; // [rsp+238h] [rbp-350h]
  int v195; // [rsp+23Ch] [rbp-34Ch]
  _DWORD v196[4]; // [rsp+240h] [rbp-348h] BYREF
  __int64 v197; // [rsp+250h] [rbp-338h]
  int v198; // [rsp+258h] [rbp-330h]
  int v199; // [rsp+25Ch] [rbp-32Ch]
  __int64 v200; // [rsp+260h] [rbp-328h] BYREF
  PVOID v201; // [rsp+268h] [rbp-320h] BYREF
  PVOID v202; // [rsp+270h] [rbp-318h] BYREF
  LONG *p_bottom; // [rsp+278h] [rbp-310h]
  LONG *v204; // [rsp+280h] [rbp-308h]
  void (*const near *v205)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+288h] [rbp-300h]
  int *v206; // [rsp+290h] [rbp-2F8h]
  _DWORD *v207; // [rsp+298h] [rbp-2F0h]
  struct _RECTL v208; // [rsp+2A0h] [rbp-2E8h] BYREF
  struct _RECTL v209; // [rsp+2B0h] [rbp-2D8h] BYREF
  struct _RECTL v210; // [rsp+2C0h] [rbp-2C8h] BYREF
  struct _RECTL v211; // [rsp+2D0h] [rbp-2B8h] BYREF
  struct _RECTL v212; // [rsp+2E0h] [rbp-2A8h] BYREF
  __m128i v213; // [rsp+2F0h] [rbp-298h] BYREF
  __int128 v214; // [rsp+300h] [rbp-288h] BYREF
  struct _RECTL v215; // [rsp+310h] [rbp-278h] BYREF
  int v216; // [rsp+320h] [rbp-268h]
  __int128 v217; // [rsp+328h] [rbp-260h] BYREF
  struct _RECTL v218; // [rsp+338h] [rbp-250h] BYREF
  struct _RECTL v219; // [rsp+348h] [rbp-240h] BYREF
  _BYTE v220[160]; // [rsp+360h] [rbp-228h] BYREF
  _BYTE v221[160]; // [rsp+400h] [rbp-188h] BYREF
  _BYTE v222[4]; // [rsp+4A0h] [rbp-E8h] BYREF
  char v223[156]; // [rsp+4A4h] [rbp-E4h] BYREF

  v145 = a5;
  v187 = a5;
  v148 = a3;
  v153 = (XCLIPOBJ *)a4;
  v13 = a6;
  v170 = a6;
  v14 = a7;
  v169 = a7;
  v15 = a8;
  v146 = a8;
  v16 = a9;
  v144 = a9;
  v182 = a10;
  v132 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v17 = 0;
  v150 = a1 ? &a1[-1].pvScan0 : 0LL;
  v18 = a2 ? &a2[-1].pvScan0 : 0LL;
  v137 = v18;
  v164 = v148 ? (__int64)&v148[-1].pvScan0 : 0LL;
  if ( !v150 )
    return 0LL;
  if ( !v18 )
    return 0LL;
  v19 = (int *)(v150 + 12);
  v20 = *((_DWORD *)v150 + 24);
  if ( (unsigned int)(v20 - 7) <= 2 )
    return 0LL;
  v21 = *((_DWORD *)v18 + 24);
  if ( v21 == 9 || v20 == 10 || v21 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v22 = (__int64 *)(v150 + 6);
  v179 = v150[6];
  v23 = v18[6];
  v160 = 0LL;
  v161 = 0;
  v162 = 0;
  v219 = *a9;
  if ( a2->iType == 1 && v23 && (*((_DWORD *)v23 + 10) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v160, &v219) )
    {
LABEL_311:
      SURFMEM::~SURFMEM((SURFMEM *)&v160);
      return 0LL;
    }
    if ( !v160 )
      goto LABEL_87;
    v16 = &v219;
    v144 = &v219;
    a2 = (struct _SURFOBJ *)(v160 + 24);
    v91 = v160;
    if ( v160 == -24 )
      v91 = 0LL;
    v137 = (PVOID *)v91;
    v23 = *(PVOID *)(v91 + 48);
    v13 = v170;
    v14 = v169;
    v15 = a8;
  }
  if ( a5 && (a5->flXlate & 8) != 0 )
  {
    v135 = 1;
    v24 = 1;
  }
  else
  {
    v24 = 0;
    v135 = 1;
  }
  v181 = v24;
  if ( v24 && (a2->iType || a1->iType != 1 || v148) )
    goto LABEL_311;
  v25 = a11;
  if ( a11 == 4 )
  {
    if ( v24 )
      goto LABEL_311;
    v92 = EngHTBlt(a1, a2, v148, v153, a5, v13, v14, v15, v16, v182, 0, 0LL);
    if ( v92 == -1 )
      goto LABEL_311;
    if ( v92 )
    {
      if ( v92 == 1 )
        goto LABEL_87;
      v15 = a8;
      v25 = 4;
    }
    else
    {
      v25 = 3;
      v132 = 3;
      v15 = a8;
    }
  }
  bottom = v15->bottom;
  top = v15->top;
  v28 = bottom;
  if ( bottom < top )
  {
    v28 = v15->top;
    v15->top = bottom;
    v15->bottom = top;
    v17 = 2;
    top = bottom;
  }
  right = v15->right;
  left = v15->left;
  v31 = right;
  if ( right < left )
  {
    v31 = left;
    a8->left = right;
    a8->right = left;
    v17 |= 1u;
    left = right;
    v25 = v132;
  }
  v32 = v25 < 3 && !v164;
  v133 = v32;
  if ( v32 )
  {
    v88 = v31 - left;
    v33 = v144;
    if ( v88 < v144->right - v144->left )
    {
      v25 = v132;
    }
    else
    {
      v25 = v132;
      if ( v28 - top >= v144->bottom - v144->top )
      {
        v32 = 0;
        v133 = 0;
      }
    }
  }
  else
  {
    v33 = v144;
  }
  v174 = v32;
  if ( !v32 )
  {
    if ( v25 < 3 )
      v25 = 3;
    v132 = v25;
  }
  v186 = v150 + 14;
  v34 = *((_DWORD *)v150 + 28);
  if ( (v34 & 0x40000) != 0 || (!a5 || (a5->flXlate & 1) != 0) && !a2->iType )
    goto LABEL_40;
  if ( !*((_WORD *)v150 + 50) )
    goto LABEL_40;
  if ( (v34 & 2) == 0 )
    goto LABEL_40;
  if ( v17 )
    goto LABEL_40;
  if ( v148 )
    goto LABEL_40;
  v93 = v33->left;
  if ( v33->left < 0 )
    goto LABEL_40;
  v94 = v33->top;
  if ( v94 < 0 )
    goto LABEL_40;
  v95 = v33->right;
  if ( v95 > a2->sizlBitmap.cx )
    goto LABEL_40;
  v96 = v144->bottom;
  if ( v96 > a2->sizlBitmap.cy )
    goto LABEL_40;
  v217 = 0LL;
  v142 = v95 - v93;
  sizl.cx = v95 - v93;
  v97 = v96 - v94;
  v139 = v97;
  sizl.cy = v97;
  if ( v95 - v93 > a8->right - a8->left
    || v97 > a8->bottom - a8->top
    || (hsurf = (HSURF)EngCreateBitmap(sizl, 0, a1->iBitmapFormat, 0, 0LL),
        v98 = EngLockSurface(hsurf),
        (sizl = (SIZEL)v98) == 0LL) )
  {
LABEL_40:
    v157 = 0LL;
    v158 = 0;
    v159 = 0;
    v213 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v220);
    v35 = *((_DWORD *)v137 + 15);
    v36 = *((_DWORD *)v137 + 14);
    *(_QWORD *)&v208.left = 0LL;
    v208.right = v36;
    v208.bottom = v35;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v147);
    v165 = v150;
    v37 = *((_WORD *)v150 + 50);
    if ( !v37 && v150[4] != v137[4] )
    {
      v38 = v150;
      v176 = v150;
      v39 = a8;
      v134 = v153;
      v156 = EngCopyBits;
      goto LABEL_43;
    }
    v213 = *(__m128i *)a8;
    v143 = _mm_cvtsi128_si32(v213);
    v210.left = v143 - 1;
    v210.top = v213.m128i_i32[1] - 1;
    v140 = _mm_cvtsi128_si32(_mm_srli_si128(v213, 8));
    v210.right = v140 + 1;
    v210.bottom = _mm_srli_si128(v213, 8).m128i_i32[1] + 1;
    v101 = *((_DWORD *)v150 + 15);
    v102 = *((_DWORD *)v150 + 14);
    *(_QWORD *)&v215.left = 0LL;
    v215.right = v102;
    v215.bottom = v101;
    ERECTL::operator*=(&v210, &v215);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v210) )
      goto LABEL_86;
    if ( v37 )
    {
      v105 = v210.bottom;
      v103 = v210.right;
      v104 = v210.top;
    }
    else if ( v210.left > v144->right
           || (v103 = v210.right, v210.right < v144->left)
           || (v104 = v210.top, v210.top > v144->bottom)
           || (v105 = v210.bottom, v210.bottom < v144->top) )
    {
      v38 = v150;
      v39 = a8;
      v134 = v153;
      v156 = EngCopyBits;
LABEL_230:
      v146 = v39;
      v176 = v38;
      v165 = v38;
LABEL_43:
      v175 = v39;
      v201 = v137[6];
      PDEVOBJ::vSync((PDEVOBJ *)&v201, a2, 0LL, 0);
      v40 = v144;
      v41 = v208.left;
      if ( v144->left > v208.left )
        v41 = v144->left;
      v208.left = v41;
      v42 = v208.top;
      if ( v144->top > v208.top )
        v42 = v144->top;
      v208.top = v42;
      v43 = v208.right;
      if ( v144->right < v208.right )
        v43 = v144->right;
      v208.right = v43;
      v44 = v208.bottom;
      if ( v144->bottom < v208.bottom )
        v44 = v144->bottom;
      v208.bottom = v44;
      if ( v43 < v41 )
      {
        v41 = v43;
        v208.left = v43;
      }
      else if ( v44 < v42 )
      {
        v42 = v44;
        v208.top = v44;
      }
      if ( v41 == v43 || v42 == v44 )
        goto LABEL_86;
      v166 = 0LL;
      v167 = 0;
      v168 = 0;
      v214 = 0LL;
      if ( v17 || *((_WORD *)v137 + 50) || (unsigned int)(*((_DWORD *)v137 + 24) - 7) <= 1 )
      {
        v196[3] = 0;
        v199 = 0;
        v196[1] = v43 - v41;
        v196[2] = v44 - v42;
        v197 = 0LL;
        if ( v24 )
          v116 = *((_DWORD *)v137 + 24);
        else
          v116 = *((_DWORD *)v38 + 24);
        v196[0] = v116;
        v198 = (_DWORD)v137[14] & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v166, (struct _DEVBITMAPINFO *)v196, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v166 )
          goto LABEL_309;
        DWORD2(v214) = v208.right - v208.left;
        HIDWORD(v214) = v208.bottom - v208.top;
        if ( ((_DWORD)v137[14] & 0x400) != 0 )
          v117 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v23 + 352);
        else
          v117 = EngCopyBits;
        v118 = 0LL;
        if ( !v24 )
          v118 = v187;
        ((void (__fastcall *)(__int64, PVOID *, _QWORD, struct _XLATEOBJ *, __int128 *, struct _RECTL *))v117)(
          v166 + 24,
          v137 + 3,
          0LL,
          v118,
          &v214,
          &v208);
        LODWORD(v214) = v144->left - v208.left;
        DWORD1(v214) = v144->top - v208.top;
        DWORD2(v214) = v144->right - v208.left;
        HIDWORD(v214) = v144->bottom - v208.top;
        v119 = v166;
        v47 = (PVOID *)v166;
        v137 = (PVOID *)v166;
        v183 = (PVOID *)v166;
        v40 = (struct _RECTL *)&v214;
        v144 = (struct _RECTL *)&v214;
        v184 = (struct _RECTL *)&v214;
        v145 = 0LL;
        v172 = 0LL;
        v208.right -= v208.left;
        v120 = v208.bottom - v208.top;
        v208.bottom -= v208.top;
        *(_QWORD *)&v208.left = 0LL;
        if ( (v17 & 2) != 0 )
        {
          v121 = *(_DWORD *)(v166 + 88);
          if ( v121 <= 0 )
            v122 = *(_QWORD *)(v166 + 72);
          else
            v122 = *(_QWORD *)(v166 + 72) + v121 * (v120 - 1);
          *(_QWORD *)(v166 + 80) = v122;
          *(_DWORD *)(v166 + 88) = -*(_DWORD *)(v166 + 88);
          v119 = v166;
        }
        if ( (v17 & 1) != 0 )
        {
          v123 = *(_DWORD *)(v119 + 96);
          if ( (unsigned int)(v123 - 1) > 5 )
            goto LABEL_309;
          ((void (__fastcall *)(__int64))(&apfnMirror)[v123])(v119);
        }
        v46 = 0LL;
      }
      else
      {
        v183 = v137;
        if ( v24 )
        {
          v46 = 0LL;
          v145 = 0LL;
        }
        else
        {
          v46 = a5;
        }
        v172 = v46;
        v184 = v144;
        v47 = v137;
      }
      v202 = v38[6];
      PDEVOBJ::vSync((PDEVOBJ *)&v202, (struct _SURFOBJ *)(v38 + 3), 0LL, 0);
      p_right = &v40->right;
      if ( v40->right - v40->left < 128000000 )
      {
        p_bottom = &v40->bottom;
        p_top = &v40->top;
        if ( v40->bottom - v40->top < 128000000 )
        {
          v204 = &v39->right;
          v48 = v39->right - v39->left;
          if ( v48 < 128000000 )
          {
            v49 = v39->bottom - v39->top;
            if ( v49 < 128000000 && v48 > -128000000 && v49 > -128000000 )
            {
              if ( v132 == 3 && !v148 && (!v46 || (v46->flXlate & 1) != 0) )
              {
                v50 = *((_DWORD *)v38 + 24);
                v51 = *((_DWORD *)v47 + 24);
                if ( v50 == v51 && ((v51 - 3) & 0xFFFFFFFC) == 0 && v51 != 5 )
                {
                  if ( v134 && *((_BYTE *)v134 + 20) == 3 )
                  {
                    v212 = 0LL;
                    *(_QWORD *)&v208.right = 0LL;
                    *(_QWORD *)&v208.left = 0LL;
                    v215 = 0LL;
                    v216 = 0;
                    XCLIPOBJ::cEnumStart(v153, 0, 0, 4u, 0);
                    do
                    {
                      v124 = XCLIPOBJ::bEnum(v153, 0x14u, (char *)&v215, 0LL);
                      if ( v215.left )
                      {
                        StretchDIBDirect(
                          v38[10],
                          *((_DWORD *)v38 + 22),
                          *((_DWORD *)v38 + 14),
                          *((_DWORD *)v38 + 15),
                          v39,
                          v47[10],
                          *((_DWORD *)v47 + 22),
                          *((_DWORD *)v47 + 14),
                          *((_DWORD *)v47 + 15),
                          v144,
                          &v212,
                          (struct _RECTL *)&v215.top,
                          *((_DWORD *)v38 + 24));
                        v125 = v208.left;
                        v126 = v208.right;
                        if ( v208.left == v208.right || (v127 = v208.top, v208.top == v208.bottom) )
                        {
                          v208 = v212;
                        }
                        else
                        {
                          if ( v212.left < v208.left )
                            v125 = v212.left;
                          v208.left = v125;
                          if ( v212.top < v208.top )
                            v127 = v212.top;
                          v208.top = v127;
                          if ( v212.right > v208.right )
                            v126 = v212.right;
                          v208.right = v126;
                          if ( v212.bottom > v208.bottom )
                            v208.bottom = v212.bottom;
                        }
                      }
                    }
                    while ( v124 );
                  }
                  else
                  {
                    v52 = v39;
                    if ( v134 && *((_BYTE *)v134 + 20) == 1 )
                      v52 = (struct _RECTL *)((char *)v134 + 4);
                    StretchDIBDirect(
                      v38[10],
                      *((_DWORD *)v38 + 22),
                      *((_DWORD *)v38 + 14),
                      *((_DWORD *)v38 + 15),
                      v39,
                      v47[10],
                      *((_DWORD *)v47 + 22),
                      *((_DWORD *)v47 + 14),
                      *((_DWORD *)v47 + 15),
                      v40,
                      &v208,
                      v52,
                      v50);
                  }
                  v53 = v208.left;
                  v211 = v208;
                  v54 = v208.right;
                  v55 = v208.top;
                  v56 = v208.bottom;
                  goto LABEL_84;
                }
              }
              v58 = AllocFreeTmpBuffer(324LL);
              v60 = (char *)v58;
              v169 = (struct _POINTL *)v58;
              if ( v58 )
              {
                *(_QWORD *)&v212.left = v58;
                v138 = 0;
                v61 = v134;
                if ( v134 && (v59 = *((unsigned __int8 *)v134 + 20), *((_BYTE *)v134 + 20)) )
                {
                  v59 = (unsigned int)(v59 - 1);
                  if ( (_DWORD)v59 )
                  {
                    if ( (_DWORD)v59 == 2 )
                    {
                      v138 = 1;
                      XCLIPOBJ::cEnumStart(v134, 0, 0, 4u, 0x14u);
                      v60 = (char *)v169;
                    }
LABEL_93:
                    v211 = (struct _RECTL)0LL;
                    if ( v138 )
                      goto LABEL_271;
                    while ( 1 )
                    {
                      for ( i = 0; i < *(_DWORD *)v60; ++i )
                      {
                        v63 = (struct _RECTL *)&v60[16 * i + 4];
                        v209 = 0LL;
                        vInitStrDDAClip(&v208, v40, v39, v63, &v209);
                        v59 = (unsigned int)v209.left;
                        if ( v209.left == v209.right || v209.top == v209.bottom )
                          goto LABEL_287;
                        --v209.left;
                        --v209.top;
                        ++v209.right;
                        ++v209.bottom;
                        ERECTL::operator*=(&v209, &v208);
                        v59 = (unsigned int)*p_right;
                        if ( (int)v59 < v40->left )
                          goto LABEL_287;
                        if ( *p_bottom < *p_top )
                          goto LABEL_287;
                        v59 = (unsigned int)(v59 - v40->left);
                        v67 = *p_bottom - *p_top + v59;
                        if ( v67 < (unsigned int)v59 )
                          goto LABEL_287;
                        if ( v67 >= 0x3FFFFFF5 )
                          goto LABEL_287;
                        v68 = 4 * v67 + 40;
                        if ( !v68 )
                          goto LABEL_287;
                        v69 = (struct _STRDDA *)Win32AllocPool(v68, 1752462151LL, v65, v66);
                        v70 = v69;
                        v190 = v69;
                        if ( !v69 )
                          goto LABEL_287;
                        vInitStrDDA(v69, &v209, v40, v39);
                        v178 = *(struct _RECTL *)v70;
                        if ( v145 && (v145->flXlate & 1) != 0 )
                        {
                          v145 = 0LL;
                          v172 = 0LL;
                        }
                        v205 = (&apfnWrite)[*((unsigned int *)v38 + 24)];
                        if ( v133 )
                        {
                          if ( v132 == 1 )
                            v89 = -1;
                          else
                            v89 = 0;
                          *((_DWORD *)v70 + 5) = v89;
                        }
                        sizl = (SIZEL)*(&apfnRead + 3 * *((unsigned int *)v137 + 24) + v132 - 1);
                        v191 = sizl;
                        v136 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v178, 8));
                        v152 = _mm_cvtsi128_si32((__m128i)v178);
                        v71 = v136 - v152;
                        if ( *p_right - v40->left > *v204 - v39->left )
                        {
                          if ( v71 < 0x15555553 )
                          {
                            v72 = v136 - v152;
LABEL_111:
                            v73 = 12 * (v72 + 2);
                            if ( v71 <= 0x5F5E100 && (unsigned int)v73 <= 0x2710000 )
                            {
                              v74 = (HSURF)AllocFreeTmpBuffer(v73);
                              hsurf = v74;
                              if ( v74 )
                              {
                                v206 = (int *)(v137 + 11);
                                v75 = v209.top;
                                v76 = (struct tagCOLORADJUSTMENT *)((char *)v137[10] + *((_DWORD *)v137 + 22) * v209.top);
                                v170 = v76;
                                v189 = 0LL;
                                if ( v148 )
                                {
                                  LODWORD(v189) = v182->x + v209.left - v144->left;
                                  v171 = *(_QWORD *)(v164 + 80) + *(_DWORD *)(v164 + 88) * (v209.top + v182->y - *p_top);
                                }
                                else
                                {
                                  v171 = 0LL;
                                }
                                v151 = 0;
                                if ( v133 )
                                {
                                  if ( v132 == 1 )
                                    v90 = -1;
                                  else
                                    v90 = 0;
                                  v151 = v90;
                                  vInitBuffer((struct _XRUNLEN *)(v74 + 2), &v178, v90);
                                }
                                *(_DWORD *)v74 = *(_DWORD *)(HSURF)((int)v70 + 4);
                                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v173);
                                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v221);
                                v79 = 0;
                                v61 = v134;
                                if ( v134 && v173 )
                                {
                                  RGNOBJ::vSet((RGNOBJ *)&v173, v63);
                                  XCLIPOBJ::vSetup((XCLIPOBJ *)v221, v173, (struct ERECTL *)v63, 1);
                                  v79 = 1;
                                }
                                v180 = v79;
                                if ( v134 && !v173 )
                                {
LABEL_135:
                                  FreeTmpBuffer(v74, v77, v78);
                                  Win32FreePool(v70);
                                  v86 = v211.left;
                                  v87 = v211.right;
                                  if ( v211.left == v211.right )
                                    goto LABEL_136;
                                  v128 = v211.top;
                                  if ( v211.top == v211.bottom )
                                  {
                                    v61 = v134;
LABEL_136:
                                    v211 = v178;
                                  }
                                  else
                                  {
                                    if ( v152 < v211.left )
                                      v86 = v152;
                                    v211.left = v86;
                                    if ( v178.top < v211.top )
                                      v128 = v178.top;
                                    v211.top = v128;
                                    if ( v136 > v211.right )
                                      v87 = v136;
                                    v211.right = v87;
                                    v61 = v134;
                                    if ( v178.bottom > v211.bottom )
                                      v211.bottom = v178.bottom;
                                  }
                                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v173);
                                  v39 = v146;
                                  v40 = v144;
                                  goto LABEL_138;
                                }
                                v80 = 0;
                                while ( 2 )
                                {
                                  v163 = v75;
                                  if ( v75 >= v209.bottom )
                                  {
                                    v61 = v134;
                                    goto LABEL_135;
                                  }
                                  v207 = v74 + 1;
                                  v77 = *(unsigned int *)(*((_QWORD *)v70 + 3) + 4LL * v80);
                                  *((_DWORD *)v74 + 1) = v77;
                                  if ( (_DWORD)v77 )
                                  {
                                    v81 = v221;
                                    if ( !v180 )
                                      v81 = 0LL;
                                    v82 = (*(__int64 (__fastcall **)(struct _STRDDA *, HSURF, struct tagCOLORADJUSTMENT *, __int64, struct _XLATEOBJ *, LONG, LONG, _DWORD))&sizl)(
                                            v70,
                                            v74,
                                            v76,
                                            v171,
                                            v145,
                                            v209.left,
                                            v209.right,
                                            v189);
                                    ((void (__fastcall *)(HSURF, __int64, PVOID *, _BYTE *))v205)(v74, v82, v165, v81);
                                    if ( v133 )
                                    {
                                      v83 = v152;
                                      *((_DWORD *)v74 + 2) = v152;
                                      *((_DWORD *)v74 + 3) = v136 - v83;
                                      v84 = (unsigned int *)(v74 + 4);
                                      v78 = (v136 - v83) & 0x3FFFFFFFFFFFFFFFLL;
                                      if ( v78 )
                                      {
                                        v85 = v151;
                                        if ( ((unsigned __int8)v84 & 4) != 0 )
                                        {
                                          *v84 = v151;
                                          if ( --v78 )
                                          {
                                            v84 = (unsigned int *)(v74 + 5);
                                            goto LABEL_132;
                                          }
                                        }
                                        else
                                        {
LABEL_132:
                                          v77 = v85;
                                          memset64(v84, v85 | ((unsigned __int64)v85 << 32), v78 >> 1);
                                          if ( (v78 & 1) != 0 )
                                            v84[v78 - 1] = v85;
                                        }
                                      }
                                    }
                                  }
                                  else if ( v133 )
                                  {
                                    (*(void (__fastcall **)(struct _STRDDA *, HSURF, struct tagCOLORADJUSTMENT *, _QWORD, struct _XLATEOBJ *, LONG, LONG, _DWORD))&sizl)(
                                      v70,
                                      v74,
                                      v76,
                                      0LL,
                                      v145,
                                      v209.left,
                                      v209.right,
                                      0);
                                  }
                                  v76 = (struct tagCOLORADJUSTMENT *)((char *)v76 + *v206);
                                  v170 = v76;
                                  *(_DWORD *)v74 += *v207;
                                  if ( v171 )
                                    v171 += *(int *)(v164 + 88);
                                  ++v75;
                                  ++v80;
                                  continue;
                                }
                              }
                            }
                          }
                        }
                        else if ( v71 + 3 >= v71 )
                        {
                          v72 = (v71 + 3) >> 1;
                          if ( v72 < 0x15555553 )
                            goto LABEL_111;
                        }
                        Win32FreePool(v70);
LABEL_287:
                        v61 = v134;
LABEL_138:
                        v38 = v165;
                        v60 = (char *)v169;
                      }
                      if ( !v138 )
                      {
                        FreeTmpBuffer(*(_QWORD *)&v212.left, v59, v60);
                        v56 = v211.bottom;
                        v54 = v211.right;
                        v55 = v211.top;
                        v53 = v211.left;
LABEL_84:
                        if ( v38 == v150 )
                        {
                          SURFMEM::~SURFMEM((SURFMEM *)&v166);
LABEL_86:
                          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v147);
                          SURFMEM::~SURFMEM((SURFMEM *)&v157);
LABEL_87:
                          SURFMEM::~SURFMEM((SURFMEM *)&v160);
                          return 1LL;
                        }
                        v211.left = v155 + v53;
                        v211.top = HIDWORD(v155) + v55;
                        v211.right = v155 + v54;
                        v211.bottom = HIDWORD(v155) + v56;
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v154);
                        if ( v154 )
                        {
                          if ( !v153 )
                          {
                            RGNOBJ::vSet((RGNOBJ *)&v154, &v211);
                            goto LABEL_294;
                          }
                          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v148);
                          if ( v148 )
                          {
                            RGNOBJ::vSet((RGNOBJ *)&v148, &v211);
                            if ( RGNOBJ::bMerge(
                                   (RGNOBJ *)&v154,
                                   (struct RGNOBJ *)&v148,
                                   (XCLIPOBJ *)((char *)v153 + 56),
                                   8u) )
                            {
                              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v148);
LABEL_294:
                              v129 = v154;
                              v218 = *(struct _RECTL *)((char *)v154 + 56);
                              if ( v153 )
                              {
                                if ( !bIntersect(&v218, (const struct _RECTL *)((char *)v153 + 4), &v218) )
                                {
LABEL_305:
                                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v154);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v166);
                                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v147);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v157);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v160);
                                  return 1LL;
                                }
                                v129 = v154;
                              }
                              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v222, v129, (struct ERECTL *)&v218, 1);
                              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v223) )
                              {
                                v210.left += v155;
                                v210.top += HIDWORD(v155);
                                v210.right += v155;
                                v210.bottom += HIDWORD(v155);
                                v155 = 0LL;
                                if ( (*v186 & 0x400) != 0 )
                                  v156 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v179 + 352);
                                v130 = v187;
                                if ( !v181 )
                                  v130 = 0LL;
                                v131 = v157 + 3;
                                if ( !v157 )
                                  v131 = 0LL;
                                ((void (__fastcall *)(PVOID *, PVOID *, _BYTE *, struct _XLATEOBJ *, struct _RECTL *, __int64 *))v156)(
                                  v150 + 3,
                                  v131,
                                  v222,
                                  v130,
                                  &v210,
                                  &v155);
                              }
                              goto LABEL_305;
                            }
                          }
                          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v148);
                        }
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v154);
                        goto LABEL_309;
                      }
LABEL_271:
                      v138 = XCLIPOBJ::bEnum(v61, 0x144u, v60, 0LL);
                      v60 = (char *)v169;
                    }
                  }
                  *(_DWORD *)v58 = 1;
                  v62 = *(struct _RECTL *)((char *)v134 + 4);
                }
                else
                {
                  *(_DWORD *)v58 = 1;
                  v62 = *v39;
                }
                v138 = 0;
                *(struct _RECTL *)(v58 + 4) = v62;
                goto LABEL_93;
              }
            }
          }
        }
      }
LABEL_309:
      SURFMEM::~SURFMEM((SURFMEM *)&v166);
LABEL_310:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v147);
      SURFMEM::~SURFMEM((SURFMEM *)&v157);
      goto LABEL_311;
    }
    v213.m128i_i32[0] = v143 - v210.left;
    v213.m128i_i32[1] -= v104;
    v213.m128i_i32[2] = v140 - v210.left;
    v213.m128i_i32[3] -= v104;
    v192[3] = 0;
    v195 = 0;
    v192[1] = v103 - v210.left + 1;
    v192[2] = v105 - v104 + 1;
    v193 = 0LL;
    if ( v24 )
      v106 = *((_DWORD *)v137 + 24);
    else
      v106 = *v19;
    v192[0] = v106;
    v107 = v186;
    v194 = *v186 & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v157, (struct _DEVBITMAPINFO *)v192, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v157 )
      goto LABEL_310;
    v155 = *(_QWORD *)&v210.left;
    v108 = HIDWORD(*(_QWORD *)&v210.left);
    v109 = v210.left;
    if ( !v147 )
      goto LABEL_310;
    *(_QWORD *)&v210.left = 0LL;
    v210.right -= v109;
    v210.bottom -= v108;
    RGNOBJ::vSet((RGNOBJ *)&v147, &v210);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v220, v147, (struct ERECTL *)&v210, 1);
    v200 = *v22;
    v110 = v150;
    PDEVOBJ::vSync((PDEVOBJ *)&v200, (struct _SURFOBJ *)(v150 + 3), 0LL, 0);
    v112 = Gre::Base::Globals(v111);
    if ( v164 )
    {
      if ( (*v107 & 0x400) != 0 )
      {
        v113 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v179 + 352);
        v156 = EngCopyBits;
      }
      else
      {
        v156 = EngCopyBits;
        v113 = EngCopyBits;
      }
      v114 = (char *)v112 + 6896;
      v115 = v157 + 3;
      if ( !v157 )
        v115 = 0LL;
      ((void (__fastcall *)(PVOID *, PVOID *, _QWORD, char *, struct _RECTL *, __int64 *))v113)(
        v115,
        v110 + 3,
        0LL,
        v114,
        &v210,
        &v155);
    }
    else
    {
      v156 = EngCopyBits;
    }
    v38 = v157;
    v39 = (struct _RECTL *)&v213;
    v134 = (XCLIPOBJ *)v220;
    goto LABEL_230;
  }
  v98->iUniq = 0;
  *((_QWORD *)&v217 + 1) = __PAIR64__(v139, v142);
  if ( ((_DWORD)v137[14] & 0x400) != 0 )
    v99 = (*((__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, struct _RECTL *))v23
           + 352))(
            v98,
            a2,
            0LL,
            a5,
            &v217,
            v144);
  else
    v99 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, struct _RECTL *))EngCopyBits)(
            v98,
            a2,
            0LL,
            a5,
            &v217,
            v144);
  if ( !v99
    || (v100 = (unsigned int (__fastcall *)(struct _SURFOBJ *, SIZEL, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, struct _POINTL *, unsigned int))*((_QWORD *)v179 + 353)) == 0LL
    || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v100)(
          a1,
          sizl,
          0LL,
          v153,
          0LL,
          v170,
          v169,
          a8,
          &v217,
          v182,
          v132) )
  {
    v135 = 0;
  }
  EngUnlockSurface(*(SURFOBJ **)&sizl);
  EngDeleteSurface(hsurf);
  SURFMEM::~SURFMEM((SURFMEM *)&v160);
  return v135;
}
