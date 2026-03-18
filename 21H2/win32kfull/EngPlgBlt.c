/*
 * XREFs of EngPlgBlt @ 0x1C028A2A0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027D220 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0289C18 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0289E9C (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029B340 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     EngEraseSurface @ 0x1C0005B60 (EngEraseSurface.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015D508 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015D534 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015DC78 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C015DF98 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D4C00 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02D6BE8 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D78DC (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  ULONG v11; // r13d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r8
  BOOL v15; // edi
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r8
  LONG v19; // r8d
  LONG v20; // edx
  int v21; // r10d
  __int64 v22; // rdx
  int v23; // edx
  int v24; // r8d
  unsigned __int64 v25; // r12
  CLIPOBJ *v26; // r13
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned __int64 v28; // rdx
  ULONG v29; // r8d
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v31; // rdx
  struct _PLGDDA *v32; // rax
  struct _PLGDDA *v33; // r15
  unsigned int v34; // eax
  unsigned __int64 v35; // rdx
  void (*const near *v36)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  LONG top; // edx
  XLATEOBJ *v38; // rcx
  LONG v39; // ecx
  LONG v40; // eax
  POINTL *v41; // r11
  __int64 v42; // rax
  int v43; // r12d
  __int64 v44; // r14
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v47; // r9
  CLIPOBJ *v48; // r13
  int v49; // r9d
  int v50; // r10d
  int v51; // r8d
  int v52; // edx
  int (*v53)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r11
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  char v60; // [rsp+60h] [rbp-4D8h]
  char v61; // [rsp+61h] [rbp-4D7h]
  ULONG v62; // [rsp+64h] [rbp-4D4h]
  LONG v63; // [rsp+64h] [rbp-4D4h]
  int v64; // [rsp+68h] [rbp-4D0h]
  XLATEOBJ *v65; // [rsp+70h] [rbp-4C8h]
  __int64 v66; // [rsp+78h] [rbp-4C0h] BYREF
  POINTL *v67; // [rsp+80h] [rbp-4B8h]
  __int64 v68; // [rsp+88h] [rbp-4B0h] BYREF
  int v69; // [rsp+90h] [rbp-4A8h]
  int v70; // [rsp+94h] [rbp-4A4h]
  LONG v71; // [rsp+98h] [rbp-4A0h]
  RECTL *v72; // [rsp+A0h] [rbp-498h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-490h]
  POINTFIX *v74; // [rsp+B0h] [rbp-488h]
  __int64 v75; // [rsp+B8h] [rbp-480h]
  unsigned __int64 v76; // [rsp+C0h] [rbp-478h] BYREF
  char v77; // [rsp+C8h] [rbp-470h]
  int v78; // [rsp+CCh] [rbp-46Ch]
  CLIPOBJ *v79; // [rsp+D0h] [rbp-468h]
  __int64 v80; // [rsp+D8h] [rbp-460h]
  RECTL *v81; // [rsp+E0h] [rbp-458h]
  POINTFIX *v82; // [rsp+E8h] [rbp-450h]
  CLIPOBJ *v83; // [rsp+F0h] [rbp-448h]
  __int64 v84; // [rsp+F8h] [rbp-440h] BYREF
  XLATEOBJ *v85; // [rsp+100h] [rbp-438h]
  struct _SURFOBJ *v86; // [rsp+108h] [rbp-430h]
  struct _SURFOBJ *v87; // [rsp+110h] [rbp-428h]
  CLIPOBJ *v88; // [rsp+118h] [rbp-420h] BYREF
  char v89; // [rsp+120h] [rbp-418h]
  int v90; // [rsp+124h] [rbp-414h]
  struct REGION *v91[2]; // [rsp+128h] [rbp-410h] BYREF
  unsigned __int64 v92; // [rsp+138h] [rbp-400h] BYREF
  char v93; // [rsp+140h] [rbp-3F8h]
  int v94; // [rsp+144h] [rbp-3F4h]
  unsigned __int64 v95; // [rsp+150h] [rbp-3E8h]
  XLATEOBJ *v96; // [rsp+158h] [rbp-3E0h]
  void (*const near *v97)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+160h] [rbp-3D8h]
  __int64 v98; // [rsp+168h] [rbp-3D0h] BYREF
  struct REGION *v99[2]; // [rsp+170h] [rbp-3C8h] BYREF
  _QWORD v100[2]; // [rsp+180h] [rbp-3B8h] BYREF
  int v101; // [rsp+190h] [rbp-3A8h] BYREF
  LONG right; // [rsp+194h] [rbp-3A4h]
  LONG bottom; // [rsp+198h] [rbp-3A0h]
  int v104; // [rsp+19Ch] [rbp-39Ch]
  __int64 v105; // [rsp+1A0h] [rbp-398h]
  int v106; // [rsp+1A8h] [rbp-390h]
  int v107; // [rsp+1ACh] [rbp-38Ch]
  unsigned __int64 v108; // [rsp+1B0h] [rbp-388h]
  __int64 v109; // [rsp+1B8h] [rbp-380h]
  _DWORD v110[4]; // [rsp+1C0h] [rbp-378h] BYREF
  __int64 v111; // [rsp+1D0h] [rbp-368h]
  int v112; // [rsp+1D8h] [rbp-360h]
  int v113; // [rsp+1DCh] [rbp-35Ch]
  __int64 v114; // [rsp+1E0h] [rbp-358h] BYREF
  char v115[8]; // [rsp+1F0h] [rbp-348h] BYREF
  __int64 v116; // [rsp+1F8h] [rbp-340h]
  RECTL v117; // [rsp+270h] [rbp-2C8h] BYREF
  RECTL v118; // [rsp+280h] [rbp-2B8h] BYREF
  struct _RECTL v119; // [rsp+290h] [rbp-2A8h] BYREF
  __int128 v120; // [rsp+2A0h] [rbp-298h] BYREF
  struct _SURFOBJ *v121; // [rsp+2B0h] [rbp-288h] BYREF
  int v122; // [rsp+2B8h] [rbp-280h]
  int v123; // [rsp+2BCh] [rbp-27Ch]
  struct _RECTL v124; // [rsp+2C0h] [rbp-278h] BYREF
  _BYTE v125[160]; // [rsp+2D0h] [rbp-268h] BYREF
  _BYTE v126[4]; // [rsp+370h] [rbp-1C8h] BYREF
  char v127[156]; // [rsp+374h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+410h] [rbp-128h] BYREF
  POINTFIX v129; // [rsp+4B0h] [rbp-88h] BYREF
  POINTFIX v130; // [rsp+4B8h] [rbp-80h]
  POINTFIX v131; // [rsp+4C0h] [rbp-78h]
  int v132; // [rsp+4C8h] [rbp-70h]
  int v133; // [rsp+4CCh] [rbp-6Ch]
  POINTFIX v134; // [rsp+4D0h] [rbp-68h] BYREF
  POINTFIX v135; // [rsp+4D8h] [rbp-60h] BYREF
  __int64 v136; // [rsp+4E0h] [rbp-58h]
  int v137; // [rsp+4E8h] [rbp-50h]
  FIX v138; // [rsp+4ECh] [rbp-4Ch]

  v83 = pco;
  v86 = psoSrc;
  v87 = psoTrg;
  v88 = pco;
  v65 = pxlo;
  v74 = pptfx;
  v72 = prcl;
  v67 = pptl;
  v11 = iMode;
  v62 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v91[0] = (struct REGION *)v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v14 = (unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL);
  v73 = v14;
  *(_QWORD *)&v124.left = v14;
  v64 = 0;
  if ( iMode != 4 || v14 )
  {
    v60 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v60 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v16 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
    if ( (unsigned int)(v16 - 7) > 2 )
    {
      v17 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
      if ( v17 != 9 && v16 != 10 && v17 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( iMode < 3 && !v18 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
        {
          v61 = 1;
        }
        else
        {
          v61 = 0;
          if ( iMode < 3 )
            v11 = 3;
          v62 = v11;
        }
        v84 = *(_QWORD *)(v12 + 48);
        v98 = *(_QWORD *)(v13 + 48);
        v76 = 0LL;
        v77 = 0;
        v78 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v125);
        v85 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v99);
        v19 = *(_DWORD *)(v13 + 60);
        v20 = *(_DWORD *)(v13 + 56);
        *(_QWORD *)&v117.left = 0LL;
        v117.right = v20;
        v117.bottom = v19;
        if ( v98 && v13 == *(_QWORD *)(v98 + 2528) && (*(_DWORD *)(v98 + 40) & 0x20000) != 0 )
        {
          v117.left = *(_DWORD *)(v98 + 2560);
          v117.right = *(_DWORD *)(v98 + 2560) + v20;
          v117.top = *(_DWORD *)(v98 + 2564);
          v117.bottom = v19 + *(_DWORD *)(v98 + 2564);
        }
        if ( !v61 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v60 )
          goto LABEL_42;
        v129 = *v74;
        v130 = v74[1];
        v131 = v74[2];
        v132 = v130.x + v131.x - v129.x;
        v133 = v74[1].y + v74[2].y - v74->y;
        v21 = (v130.x <= v132) ^ (v130.x > v129.x);
        v22 = (v130.y <= v133) ^ (unsigned int)(v130.y > v129.y);
        if ( *(&v129.x + 2 * v21) > *(&v129.x + 2 * (v21 ^ 3LL)) )
          v21 ^= 3u;
        if ( *(&v129.y + 2 * v22) > *(&v129.y + 2 * ((unsigned int)v22 ^ 3LL)) )
          v22 = (unsigned int)v22 ^ 3;
        v118.left = (*(&v129.x + 2 * v21) >> 4) - 1;
        v118.top = (*(&v129.y + 2 * v22) >> 4) - 1;
        v118.right = ((*(&v129.x + 2 * (v21 ^ 3LL)) + 15) >> 4) + 1;
        v118.bottom = ((*(&v129.y + 2 * (v22 ^ 3)) + 15) >> 4) + 1;
        v23 = *(_DWORD *)(v12 + 60);
        v24 = *(_DWORD *)(v12 + 56);
        v68 = 0LL;
        v69 = v24;
        v70 = v23;
        if ( v84 && v12 == *(_QWORD *)(v84 + 2528) && (*(_DWORD *)(v84 + 40) & 0x20000) != 0 )
        {
          LODWORD(v68) = *(_DWORD *)(v84 + 2560);
          v69 = v24 + v68;
          HIDWORD(v68) = *(_DWORD *)(v84 + 2564);
          v70 = HIDWORD(v68) + v23;
        }
        ERECTL::operator*=(&v118.left, (int *)&v68);
        if ( ERECTL::bEmpty((ERECTL *)&v118) )
          goto LABEL_154;
        if ( v61
          || *(_WORD *)(v12 + 100)
          || v60
          || v118.left <= prcl->right
          && v118.right >= prcl->left
          && v118.top <= prcl->bottom
          && v118.bottom >= prcl->top )
        {
          v129.x -= 16 * v118.left;
          v129.y -= 16 * v118.top;
          v130.x -= 16 * v118.left;
          v130.y -= 16 * v118.top;
          v131.x -= 16 * v118.left;
          v131.y -= 16 * v118.top;
          v110[3] = 0;
          v113 = 0;
          v110[1] = v118.right - v118.left + 1;
          v110[2] = v118.bottom - v118.top + 1;
          v111 = 0LL;
          v110[0] = *(_DWORD *)(v12 + 96);
          v112 = *(_DWORD *)(v12 + 112) & 0x40000;
          if ( v61 )
          {
            v110[0] = 1;
          }
          else if ( v60 )
          {
            v110[0] = *(_DWORD *)(v13 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v110, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v76 )
            goto LABEL_153;
          v66 = *(_QWORD *)&v118.left;
          if ( !v99[0] )
            goto LABEL_153;
          *(_QWORD *)&v118.left = 0LL;
          v118.right -= v66;
          v118.bottom -= HIDWORD(v66);
          RGNOBJ::vSet((RGNOBJ *)v99, &v118);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v125, v99[0], (struct ERECTL *)&v118, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v84, v87, 0LL, 0);
          if ( v73 )
          {
            if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
              v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v84 + 2816);
            else
              v27 = EngCopyBits;
            v28 = v12 + 24;
            if ( !v12 )
              v28 = 0LL;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, RECTL *, __int64 *))v27)(
              (v76 + 24) & -(__int64)(v76 != 0),
              v28,
              0LL,
              xloIdent,
              &v118,
              &v66);
          }
          if ( v61 )
          {
            v29 = -1;
            if ( v11 != 1 )
              v29 = 0;
            if ( !EngEraseSurface((SURFOBJ *)((v76 + 24) & -(__int64)(v76 != 0)), &v118, v29) )
              goto LABEL_153;
          }
          v25 = v76;
          v95 = v76;
          v82 = &v129;
          v26 = (CLIPOBJ *)v125;
          v79 = (CLIPOBJ *)v125;
          if ( v61 && *(_DWORD *)(v13 + 96) == 1 || v60 )
          {
            v85 = pxlo;
            v65 = 0LL;
          }
          else
          {
            v85 = xloIdent;
          }
        }
        else
        {
LABEL_42:
          v25 = v12;
          v95 = v12;
          v82 = v74;
          v26 = v83;
          v79 = v83;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v98, v86, 0LL, 0);
        ERECTL::operator*=(&v117.left, &prcl->left);
        if ( ERECTL::bEmpty((ERECTL *)&v117) )
        {
LABEL_154:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v99);
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
          return v15;
        }
        v92 = 0LL;
        v93 = 0;
        v94 = 0;
        v120 = 0LL;
        if ( !*(_WORD *)(v13 + 100) && (unsigned int)(*(_DWORD *)(v13 + 96) - 7) > 1 )
        {
          v96 = v65;
          v81 = prcl;
LABEL_76:
          v108 = v13;
          v114 = *(_QWORD *)(v25 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v114, (struct _SURFOBJ *)(v25 + 24), 0LL, 0);
          v32 = (struct _PLGDDA *)Win32AllocPoolZInit(396LL, 1650946119LL);
          v33 = v32;
          v100[0] = v32;
          if ( !v32 )
          {
LABEL_151:
            SURFMEM::~SURFMEM((SURFMEM *)&v92);
            v15 = v64;
            goto LABEL_154;
          }
          if ( !(unsigned int)bInitPlgDDA(v32, &v117, v81, v82) )
            goto LABEL_78;
          v86 = (struct _SURFOBJ *)(&apfnRead)[*(unsigned int *)(v13 + 96)];
          v121 = v86;
          v34 = lSizeDDA(v33);
          v35 = v34 * (unsigned __int64)(unsigned int)(v117.right - v117.left + 2);
          if ( v35 > 0xFFFFFFFF || !(_DWORD)v35 )
            goto LABEL_150;
          if ( v61 )
          {
            *(_DWORD *)v33 = 1;
            v36 = (&apfnBogus)[v62];
          }
          else
          {
            *(_DWORD *)v33 = 0;
            v36 = (&apfnWrite)[*(unsigned int *)(v25 + 96)];
          }
          v87 = (struct _SURFOBJ *)v36;
          v97 = v36;
          v75 = Win32AllocPoolZInit((unsigned int)v35, 1650946119LL);
          if ( !v75 )
            goto LABEL_150;
          top = v117.top;
          v63 = v117.top;
          v80 = *(_QWORD *)(v13 + 80) + v117.top * *(_DWORD *)(v13 + 88);
          v109 = 0LL;
          if ( v73 )
          {
            if ( bUMPDSecurityGateEx() && !v67 )
            {
              if ( gfUMPDDebug )
                DbgPrint(
                  "clientcore\\windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n",
                  1758);
              Win32FreePool(v75);
              Win32FreePool(v33);
              v15 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v92);
              goto LABEL_154;
            }
            LODWORD(v109) = v117.left + v67->x - v81->left;
            top = v117.top;
            v63 = v117.top;
            v67 = (POINTL *)(*(_QWORD *)(v73 + 80) + *(_DWORD *)(v73 + 88) * (v117.top + v67->y - v81->top));
          }
          else
          {
            v67 = 0LL;
          }
          v38 = v65;
          if ( v65 )
          {
            if ( (v65->flXlate & 1) != 0 )
              v38 = 0LL;
            v65 = v38;
            v96 = v38;
          }
          if ( !v26 || !v26->iDComplexity )
          {
            v39 = *(_DWORD *)(v25 + 60);
            v40 = *(_DWORD *)(v25 + 56);
            *(_QWORD *)&v119.left = 0LL;
            v119.right = v40;
            v119.bottom = v39;
            RGNOBJ::vSet((RGNOBJ *)v99, &v119);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v125, v99[0], (struct ERECTL *)&v119, 1);
            v26 = (CLIPOBJ *)v125;
            v79 = (CLIPOBJ *)v125;
            top = v117.top;
            v63 = v117.top;
            v38 = v65;
          }
          if ( v26->rclBounds.left >= v26->rclBounds.right || v26->rclBounds.top >= v26->rclBounds.bottom )
          {
            Win32FreePool(v75);
            goto LABEL_150;
          }
          v41 = v67;
          while ( 1 )
          {
            v71 = top;
            if ( top >= v117.bottom )
              break;
            *(_OWORD *)((char *)v33 + 68) = *(_OWORD *)((char *)v33 + 4);
            *(_OWORD *)((char *)v33 + 84) = *(_OWORD *)((char *)v33 + 20);
            *(_OWORD *)((char *)v33 + 100) = *(_OWORD *)((char *)v33 + 36);
            *(_OWORD *)((char *)v33 + 116) = *(_OWORD *)((char *)v33 + 52);
            v42 = ((__int64 (__fastcall *)(struct _PLGDDA *, __int64, __int64, POINTL *, XLATEOBJ *, LONG, LONG, _DWORD))v86)(
                    v33,
                    v75,
                    v80,
                    v41,
                    v38,
                    v117.left,
                    v117.right,
                    v109);
            ((void (__fastcall *)(__int64, __int64, unsigned __int64, CLIPOBJ *))v97)(v75, v42, v25, v26);
            vAdvYDDA(v33);
            v80 += *(int *)(v13 + 88);
            if ( v41 )
            {
              v41 = (POINTL *)((char *)v41 + *(int *)(v73 + 88));
              v67 = v41;
            }
            top = ++v63;
            v38 = v65;
          }
          Win32FreePool(v75);
          if ( v25 == v12 )
          {
LABEL_78:
            v64 = 1;
LABEL_150:
            Win32FreePool(v33);
            goto LABEL_151;
          }
          v43 = 0;
          v68 = 0LL;
          LOBYTE(v69) = 0;
          v70 = 0;
          v44 = 0LL;
          if ( v72->right - v72->left == v117.right && v72->bottom - v72->top == v117.bottom )
          {
            v43 = 1;
          }
          else
          {
            v104 = 0;
            v107 = 0;
            right = v118.right + 1;
            bottom = v118.bottom + 1;
            v105 = 0LL;
            v101 = 1;
            v106 = *(_DWORD *)(v12 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v68 )
            {
              v88 = 0LL;
              v89 = 0;
              v90 = 0;
              right = v117.right;
              bottom = v117.bottom;
              v105 = 0LL;
              v101 = 1;
              v106 = *(_DWORD *)(v12 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v88, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v119);
              if ( v88 )
              {
                if ( *(_QWORD *)&v119.left )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v119, &v118);
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, *(struct REGION **)&v119.left, (struct ERECTL *)&v118, 1);
                  if ( EngEraseSurface((SURFOBJ *)((v68 + 24) & -(__int64)(v68 != 0)), &v118, 0) )
                  {
                    if ( EngEraseSurface(
                           (SURFOBJ *)((unsigned __int64)&v88[1] & -(__int64)(v88 != 0LL)),
                           &v117,
                           0xFFFFFFFF)
                      && EngPlgBlt(
                           (SURFOBJ *)((v68 + 24) & -(__int64)(v68 != 0)),
                           (SURFOBJ *)((unsigned __int64)&v88[1] & ((unsigned __int128)-(__int128)(unsigned __int64)v88 >> 64)),
                           0LL,
                           &pcoa,
                           0LL,
                           0LL,
                           0LL,
                           v82,
                           v81,
                           0LL,
                           3u) )
                    {
                      v44 = v68;
                      v43 = 1;
                    }
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v119);
              SURFMEM::~SURFMEM((SURFMEM *)&v88);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v115);
          if ( !v43 )
            goto LABEL_148;
          if ( !v116 )
            goto LABEL_148;
          v134 = *v74;
          v135 = v74[1];
          x = v74[2].x;
          LODWORD(v136) = x + v135.x - v134.x;
          y = v74[2].y;
          HIDWORD(v136) = y + v135.y - v134.y;
          v137 = x;
          v138 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v115, 0LL, (struct _POINTL *)&v134)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v115, 0LL, (struct _POINTL *)&v135, 3u) )
          {
LABEL_148:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v115);
            SURFMEM::~SURFMEM((SURFMEM *)&v68);
            goto LABEL_150;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v100, (struct EPATHOBJ *)v115, 1u, v47);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v91);
          if ( v100[0] && v91[0] )
          {
            v48 = v83;
            if ( !v83 )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v91, (struct RGNOBJ *)v100) )
                goto LABEL_147;
LABEL_129:
              v124 = (struct _RECTL)*((_OWORD *)v91[0] + 6);
              if ( !v48 || bIntersect(&v124, &v48->rclBounds, &v124) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v126, v91[0], (struct ERECTL *)&v124, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v127) )
                {
                  v49 = v66 + v118.left;
                  v118.left += v66;
                  v50 = HIDWORD(v66) + v118.top;
                  v118.top += HIDWORD(v66);
                  v51 = v66 + v118.right;
                  v118.right += v66;
                  v52 = HIDWORD(v66) + v118.bottom;
                  v118.bottom += HIDWORD(v66);
                  v66 = 0LL;
                  ++*(_DWORD *)(v12 + 92);
                  if ( v60 )
                  {
                    v121 = 0LL;
                    v122 = v51 - v49;
                    v123 = v52 - v50;
                    v72 = 0LL;
                    if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                      v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v84 + 2824);
                    else
                      v56 = EngStretchBlt;
                    v57 = v44 + 24;
                    if ( !v44 )
                      v57 = 0LL;
                    v58 = v12 + 24;
                    if ( !v12 )
                      v58 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, _BYTE *, XLATEOBJ *, _QWORD, RECTL **, RECTL *, struct _SURFOBJ **, __int64 *, int))v56)(
                      v58,
                      (v76 + 24) & ((unsigned __int128)-(__int128)v76 >> 64),
                      v57,
                      v126,
                      v85,
                      0LL,
                      &v72,
                      &v118,
                      &v121,
                      &v66,
                      4);
                  }
                  else
                  {
                    v53 = SURFACE::pfnBitBlt((SURFACE *)v12);
                    v54 = v44 + 24;
                    if ( !v44 )
                      v54 = 0LL;
                    v55 = v12 + 24;
                    if ( !v12 )
                      v55 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v53)(
                      v55,
                      (v76 + 24) & -(__int64)(v76 != 0),
                      v54,
                      v126,
                      v85,
                      &v118,
                      &v66,
                      &v66,
                      0LL,
                      0LL,
                      v44 != 0 ? 43724 : 52428);
                  }
                }
              }
              v64 = 1;
              goto LABEL_147;
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v91, (struct RGNOBJ *)v100, (struct RGNOBJ *)&v83[2].rclBounds.top, 8u) )
              goto LABEL_129;
          }
LABEL_147:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v91);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v100);
          goto LABEL_148;
        }
        v135.y = 0;
        v138 = 0;
        v134.y = v117.right - v117.left + 1;
        v135.x = v117.bottom - v117.top + 1;
        v136 = 0LL;
        v134.x = *(_DWORD *)(v25 + 96);
        v137 = *(_DWORD *)(v13 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v92, (struct _DEVBITMAPINFO *)&v134, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( v92 )
        {
          DWORD2(v120) = v117.right - v117.left;
          HIDWORD(v120) = v117.bottom - v117.top;
          if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
            v30 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v98 + 2816);
          else
            v30 = EngCopyBits;
          v31 = v13 + 24;
          if ( !v13 )
            v31 = 0LL;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int128 *, RECTL *))v30)(
            v92 + 24,
            v31,
            0LL,
            v65,
            &v120,
            &v117);
          LODWORD(v120) = prcl->left - v117.left;
          DWORD1(v120) = prcl->top - v117.top;
          DWORD2(v120) = prcl->right - v117.left;
          HIDWORD(v120) = prcl->bottom - v117.top;
          v13 = v92;
          v65 = 0LL;
          v96 = 0LL;
          v81 = (RECTL *)&v120;
          v117.right -= v117.left;
          v117.bottom -= v117.top;
          *(_QWORD *)&v117.left = 0LL;
          goto LABEL_76;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v92);
LABEL_153:
        v15 = 0;
        goto LABEL_154;
      }
    }
  }
  return 0;
}
