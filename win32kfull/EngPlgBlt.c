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
  unsigned __int64 v13; // r15
  BOOL v14; // edi
  int v15; // ecx
  int v16; // eax
  ULONG v17; // r8d
  __int64 v18; // r9
  char v19; // r12
  Gre::Base *v20; // rcx
  LONG v21; // eax
  int v22; // r10d
  __int64 v23; // rdx
  LONG v24; // ecx
  LONG v25; // eax
  unsigned __int64 v26; // r12
  CLIPOBJ *v27; // r13
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned __int64 v29; // rdx
  ULONG v30; // r8d
  XLATEOBJ *v31; // rax
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned __int64 v33; // rdx
  struct _PLGDDA *v34; // rax
  struct _PLGDDA *v35; // r14
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  void (*const near *v38)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  LONG top; // r11d
  struct Gre::Base::SESSION_GLOBALS *v40; // r15
  XLATEOBJ *v41; // rcx
  LONG v42; // ecx
  LONG v43; // eax
  __int64 v44; // rax
  int v45; // r11d
  int v46; // r12d
  int *v47; // r15
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v50; // r9
  CLIPOBJ *v51; // r13
  int v52; // r9d
  int v53; // r10d
  int v54; // r8d
  int v55; // edx
  int (*v56)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r11
  int *v57; // r8
  unsigned __int64 v58; // rcx
  BOOL (__stdcall *v59)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int *v60; // r8
  unsigned __int64 v61; // rcx
  COLORADJUSTMENT *v63; // [rsp+28h] [rbp-4F0h]
  char v64; // [rsp+60h] [rbp-4B8h]
  char v65; // [rsp+61h] [rbp-4B7h]
  ULONG v66; // [rsp+64h] [rbp-4B4h]
  int v67; // [rsp+68h] [rbp-4B0h]
  XLATEOBJ *v68; // [rsp+70h] [rbp-4A8h]
  __int64 v69; // [rsp+78h] [rbp-4A0h] BYREF
  struct REGION *v70; // [rsp+80h] [rbp-498h] BYREF
  POINTFIX *v71; // [rsp+88h] [rbp-490h] BYREF
  struct REGION *v72; // [rsp+90h] [rbp-488h] BYREF
  XLATEOBJ *v73; // [rsp+98h] [rbp-480h]
  struct REGION *v74; // [rsp+A0h] [rbp-478h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v75; // [rsp+A8h] [rbp-470h]
  POINTL *v76; // [rsp+B0h] [rbp-468h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-460h]
  POINTFIX *v78; // [rsp+C0h] [rbp-458h]
  void *v79; // [rsp+C8h] [rbp-450h]
  RECTL *v80; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-440h] BYREF
  char v82; // [rsp+E0h] [rbp-438h]
  int v83; // [rsp+E4h] [rbp-434h]
  int *v84; // [rsp+E8h] [rbp-430h] BYREF
  char v85; // [rsp+F0h] [rbp-428h]
  int v86; // [rsp+F4h] [rbp-424h]
  __int64 v87; // [rsp+F8h] [rbp-420h]
  RECTL *v88; // [rsp+100h] [rbp-418h]
  CLIPOBJ *v89; // [rsp+108h] [rbp-410h]
  __int64 v90; // [rsp+110h] [rbp-408h] BYREF
  struct _SURFOBJ *v91; // [rsp+118h] [rbp-400h]
  struct _SURFOBJ *v92; // [rsp+120h] [rbp-3F8h]
  CLIPOBJ *v93; // [rsp+128h] [rbp-3F0h] BYREF
  char v94; // [rsp+130h] [rbp-3E8h]
  int v95; // [rsp+134h] [rbp-3E4h]
  unsigned __int64 v96; // [rsp+138h] [rbp-3E0h] BYREF
  char v97; // [rsp+140h] [rbp-3D8h]
  int v98; // [rsp+144h] [rbp-3D4h]
  __int64 v99; // [rsp+148h] [rbp-3D0h] BYREF
  unsigned __int64 v100; // [rsp+150h] [rbp-3C8h]
  XLATEOBJ *v101; // [rsp+158h] [rbp-3C0h]
  XLATEOBJ *v102; // [rsp+160h] [rbp-3B8h]
  void (*const near *v103)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+168h] [rbp-3B0h]
  int v104; // [rsp+170h] [rbp-3A8h] BYREF
  LONG right; // [rsp+174h] [rbp-3A4h]
  LONG bottom; // [rsp+178h] [rbp-3A0h]
  int v107; // [rsp+17Ch] [rbp-39Ch]
  __int64 v108; // [rsp+180h] [rbp-398h]
  int v109; // [rsp+188h] [rbp-390h]
  int v110; // [rsp+18Ch] [rbp-38Ch]
  __int64 v111; // [rsp+190h] [rbp-388h]
  _DWORD v112[4]; // [rsp+198h] [rbp-380h] BYREF
  __int64 v113; // [rsp+1A8h] [rbp-370h]
  int v114; // [rsp+1B0h] [rbp-368h]
  int v115; // [rsp+1B4h] [rbp-364h]
  unsigned __int64 v116; // [rsp+1B8h] [rbp-360h]
  _QWORD v117[4]; // [rsp+1C0h] [rbp-358h] BYREF
  char v118[8]; // [rsp+1E0h] [rbp-338h] BYREF
  __int64 v119; // [rsp+1E8h] [rbp-330h]
  RECTL v120; // [rsp+260h] [rbp-2B8h] BYREF
  RECTL v121; // [rsp+270h] [rbp-2A8h] BYREF
  struct _RECTL v122; // [rsp+280h] [rbp-298h] BYREF
  struct _RECTL v123; // [rsp+290h] [rbp-288h] BYREF
  __int128 v124; // [rsp+2A0h] [rbp-278h] BYREF
  _BYTE v125[160]; // [rsp+2B0h] [rbp-268h] BYREF
  _BYTE v126[4]; // [rsp+350h] [rbp-1C8h] BYREF
  char v127[156]; // [rsp+354h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+3F0h] [rbp-128h] BYREF
  POINTFIX v129; // [rsp+490h] [rbp-88h] BYREF
  POINTFIX v130; // [rsp+498h] [rbp-80h]
  POINTFIX v131; // [rsp+4A0h] [rbp-78h]
  int v132; // [rsp+4A8h] [rbp-70h]
  int v133; // [rsp+4ACh] [rbp-6Ch]
  struct _POINTL v134; // [rsp+4B0h] [rbp-68h] BYREF
  struct _POINTL v135; // [rsp+4B8h] [rbp-60h] BYREF
  __int64 v136; // [rsp+4C0h] [rbp-58h]
  int v137; // [rsp+4C8h] [rbp-50h]
  FIX v138; // [rsp+4CCh] [rbp-4Ch]

  v89 = pco;
  v91 = psoSrc;
  v92 = psoTrg;
  v93 = pco;
  v68 = pxlo;
  v78 = pptfx;
  v80 = prcl;
  v76 = pptl;
  v11 = iMode;
  v66 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v116 = v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v77 = (unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL);
  v117[1] = v77;
  v67 = 0;
  if ( iMode != 4 || ((unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL)) != 0 )
  {
    v64 = 0;
    v14 = 1;
  }
  else
  {
    v14 = 1;
    v64 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v15 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
    if ( (unsigned int)(v15 - 7) > 2 )
    {
      v16 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
      if ( v16 != 9 && v15 != 10 && v16 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( iMode < v17 && !v18 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
        {
          v19 = 1;
          v65 = 1;
        }
        else
        {
          v19 = 0;
          v65 = 0;
          if ( iMode < v17 )
            v11 = v17;
          v66 = v11;
        }
        v90 = *(_QWORD *)(v12 + 48);
        v99 = *(_QWORD *)(v13 + 48);
        v81 = 0LL;
        v82 = 0;
        v83 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v125);
        v73 = 0LL;
        v101 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
        v20 = (Gre::Base *)*(unsigned int *)(v13 + 60);
        v21 = *(_DWORD *)(v13 + 56);
        *(_QWORD *)&v121.left = 0LL;
        v121.right = v21;
        v121.bottom = (int)v20;
        v75 = Gre::Base::Globals(v20);
        if ( v99 && v13 == *(_QWORD *)(v99 + 2528) && (*(_DWORD *)(v99 + 40) & 0x20000) != 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v121, (const struct _POINTL *)(v99 + 2560), 0);
        if ( !v19 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v64 )
          goto LABEL_42;
        v129 = *v78;
        v130 = v78[1];
        v131 = v78[2];
        v132 = v131.x + v130.x - v129.x;
        v133 = v78[1].y + v78[2].y - v78->y;
        v22 = (v130.x <= v132) ^ (v130.x > v129.x);
        v23 = (v130.y <= v133) ^ (unsigned int)(v130.y > v129.y);
        if ( *(&v129.x + 2 * v22) > *(&v129.x + 2 * (v22 ^ 3LL)) )
          v22 ^= 3u;
        if ( *(&v129.y + 2 * v23) > *(&v129.y + 2 * ((unsigned int)v23 ^ 3LL)) )
          v23 = (unsigned int)v23 ^ 3;
        v120.left = (*(&v129.x + 2 * v22) >> 4) - 1;
        v120.top = (*(&v129.y + 2 * v23) >> 4) - 1;
        v120.right = ((*(&v129.x + 2 * (v22 ^ 3LL)) + 15) >> 4) + 1;
        v120.bottom = ((*(&v129.y + 2 * (v23 ^ 3)) + 15) >> 4) + 1;
        v24 = *(_DWORD *)(v12 + 60);
        v25 = *(_DWORD *)(v12 + 56);
        *(_QWORD *)&v123.left = 0LL;
        v123.right = v25;
        v123.bottom = v24;
        if ( v90 && v12 == *(_QWORD *)(v90 + 2528) && (*(_DWORD *)(v90 + 40) & 0x20000) != 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v123, (const struct _POINTL *)(v90 + 2560), 0);
        ERECTL::operator*=(&v120.left, &v123.left);
        if ( ERECTL::bEmpty((ERECTL *)&v120) )
          goto LABEL_153;
        if ( v19
          || *(_WORD *)(v12 + 100)
          || v64
          || v120.left <= prcl->right
          && v120.right >= prcl->left
          && v120.top <= prcl->bottom
          && v120.bottom >= prcl->top )
        {
          v129.x -= 16 * v120.left;
          v129.y -= 16 * v120.top;
          v130.x -= 16 * v120.left;
          v130.y -= 16 * v120.top;
          v131.x -= 16 * v120.left;
          v131.y -= 16 * v120.top;
          v112[3] = 0;
          v115 = 0;
          v112[1] = v120.right - v120.left + 1;
          v112[2] = v120.bottom - v120.top + 1;
          v113 = 0LL;
          v112[0] = *(_DWORD *)(v12 + 96);
          v114 = *(_DWORD *)(v12 + 112) & 0x40000;
          if ( v19 )
          {
            v112[0] = 1;
          }
          else if ( v64 )
          {
            v112[0] = *(_DWORD *)(v13 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v81, (struct _DEVBITMAPINFO *)v112, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v81 )
            goto LABEL_152;
          v69 = *(_QWORD *)&v120.left;
          if ( !v74 )
            goto LABEL_152;
          *(_QWORD *)&v120.left = 0LL;
          v120.right -= v69;
          v120.bottom -= HIDWORD(v69);
          RGNOBJ::vSet((RGNOBJ *)&v74, &v120);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v125, v74, (struct ERECTL *)&v120, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v90, v92, 0LL, 0);
          if ( v77 )
          {
            if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
              v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v90 + 2816);
            else
              v28 = EngCopyBits;
            v29 = v12 + 24;
            if ( !v12 )
              v29 = 0LL;
            v73 = (XLATEOBJ *)((char *)v75 + 6896);
            v63 = (COLORADJUSTMENT *)&v69;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))v28)(
              (v81 + 24) & -(__int64)(v81 != 0),
              v29,
              0LL);
          }
          else
          {
            v73 = (XLATEOBJ *)((char *)v75 + 6896);
          }
          if ( v19 )
          {
            v30 = -1;
            if ( v11 != 1 )
              v30 = 0;
            if ( !EngEraseSurface((SURFOBJ *)((v81 + 24) & -(__int64)(v81 != 0)), &v120, v30) )
            {
LABEL_152:
              v14 = 0;
              goto LABEL_153;
            }
          }
          v26 = v81;
          v100 = v81;
          v71 = &v129;
          v27 = (CLIPOBJ *)v125;
          v70 = (struct REGION *)v125;
          if ( v65 && *(_DWORD *)(v13 + 96) == 1 || v64 )
          {
            v31 = pxlo;
            v73 = pxlo;
            v68 = 0LL;
          }
          else
          {
            v31 = v73;
          }
          v101 = v31;
        }
        else
        {
LABEL_42:
          v26 = v12;
          v100 = v12;
          v71 = v78;
          v27 = v89;
          v70 = (struct REGION *)v89;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v99, v91, 0LL, 0);
        ERECTL::operator*=(&v121.left, &prcl->left);
        if ( ERECTL::bEmpty((ERECTL *)&v121) )
        {
LABEL_153:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
          SURFMEM::~SURFMEM((SURFMEM *)&v81);
          return v14;
        }
        v96 = 0LL;
        v97 = 0;
        v98 = 0;
        v124 = 0LL;
        if ( *(_WORD *)(v13 + 100) || (unsigned int)(*(_DWORD *)(v13 + 96) - 7) <= 1 )
        {
          v135.y = 0;
          v138 = 0;
          v134.y = v121.right - v121.left + 1;
          v135.x = v121.bottom - v121.top + 1;
          v136 = 0LL;
          v134.x = *(_DWORD *)(v26 + 96);
          v137 = *(_DWORD *)(v13 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v96, (struct _DEVBITMAPINFO *)&v134, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v96 )
          {
LABEL_72:
            v14 = 0;
            SURFMEM::~SURFMEM((SURFMEM *)&v96);
            goto LABEL_153;
          }
          DWORD2(v124) = v121.right - v121.left;
          HIDWORD(v124) = v121.bottom - v121.top;
          if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
            v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v99 + 2816);
          else
            v32 = EngCopyBits;
          v33 = v13 + 24;
          if ( !v13 )
            v33 = 0LL;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int128 *, RECTL *))v32)(
            (v96 + 24) & -(__int64)(v96 != 0),
            v33,
            0LL,
            v68,
            &v124,
            &v121);
          LODWORD(v124) = prcl->left - v121.left;
          DWORD1(v124) = prcl->top - v121.top;
          DWORD2(v124) = prcl->right - v121.left;
          HIDWORD(v124) = prcl->bottom - v121.top;
          v13 = v96;
          v68 = 0LL;
          v102 = 0LL;
          v88 = (RECTL *)&v124;
          v121.right -= v121.left;
          v121.bottom -= v121.top;
          *(_QWORD *)&v121.left = 0LL;
        }
        else
        {
          v102 = v68;
          v88 = prcl;
        }
        v117[0] = *(_QWORD *)(v26 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)v117, (struct _SURFOBJ *)(v26 + 24), 0LL, 0);
        v34 = (struct _PLGDDA *)Win32AllocPoolZInit(396LL, 1650946119LL);
        v35 = v34;
        v117[2] = v34;
        if ( !v34 )
        {
LABEL_151:
          SURFMEM::~SURFMEM((SURFMEM *)&v96);
          v14 = v67;
          goto LABEL_153;
        }
        if ( !(unsigned int)bInitPlgDDA(v34, &v121, v88, v71) )
        {
LABEL_81:
          v67 = 1;
LABEL_150:
          Win32FreePool(v35);
          goto LABEL_151;
        }
        v91 = (struct _SURFOBJ *)(&apfnRead)[*(unsigned int *)(v13 + 96)];
        v117[3] = v91;
        v36 = lSizeDDA(v35);
        v37 = v36 * (unsigned __int64)(unsigned int)(v121.right - v121.left + 2);
        if ( v37 > 0xFFFFFFFF || !(_DWORD)v37 )
          goto LABEL_150;
        if ( v65 )
        {
          *(_DWORD *)v35 = 1;
          v38 = (&apfnBogus)[v66];
        }
        else
        {
          *(_DWORD *)v35 = 0;
          v38 = (&apfnWrite)[*(unsigned int *)(v26 + 96)];
        }
        v92 = (struct _SURFOBJ *)v38;
        v103 = v38;
        v79 = (void *)Win32AllocPoolZInit((unsigned int)v37, 1650946119LL);
        if ( !v79 )
          goto LABEL_150;
        v84 = (int *)(v13 + 88);
        top = v121.top;
        v87 = *(_QWORD *)(v13 + 80) + *(_DWORD *)(v13 + 88) * v121.top;
        v111 = 0LL;
        if ( !v77 )
        {
          v40 = 0LL;
          goto LABEL_94;
        }
        if ( !(unsigned int)bUMPDSecurityGateEx() || v76 )
        {
          LODWORD(v111) = v121.left + v76->x - v88->left;
          top = v121.top;
          v40 = (struct Gre::Base::SESSION_GLOBALS *)(*(_QWORD *)(v77 + 80)
                                                    + *(_DWORD *)(v77 + 88) * (v121.top + v76->y - v88->top));
LABEL_94:
          v75 = v40;
          v41 = v68;
          if ( v68 )
          {
            if ( (v68->flXlate & 1) != 0 )
              v41 = 0LL;
            v68 = v41;
            v102 = v41;
          }
          if ( !v27 || !v27->iDComplexity )
          {
            v42 = *(_DWORD *)(v26 + 60);
            v43 = *(_DWORD *)(v26 + 56);
            *(_QWORD *)&v122.left = 0LL;
            v122.right = v43;
            v122.bottom = v42;
            RGNOBJ::vSet((RGNOBJ *)&v74, &v122);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v125, v74, (struct ERECTL *)&v122, 1);
            v27 = (CLIPOBJ *)v125;
            v70 = (struct REGION *)v125;
            top = v121.top;
            v41 = v68;
          }
          if ( v27->rclBounds.left >= v27->rclBounds.right || v27->rclBounds.top >= v27->rclBounds.bottom )
          {
            Win32FreePool(v79);
            goto LABEL_150;
          }
          while ( 1 )
          {
            LODWORD(v76) = top;
            if ( top >= v121.bottom )
              break;
            *(_OWORD *)((char *)v35 + 68) = *(_OWORD *)((char *)v35 + 4);
            *(_OWORD *)((char *)v35 + 84) = *(_OWORD *)((char *)v35 + 20);
            *(_OWORD *)((char *)v35 + 100) = *(_OWORD *)((char *)v35 + 36);
            *(_OWORD *)((char *)v35 + 116) = *(_OWORD *)((char *)v35 + 52);
            LODWORD(v63) = v121.left;
            v44 = ((__int64 (__fastcall *)(struct _PLGDDA *, void *, __int64, struct Gre::Base::SESSION_GLOBALS *, XLATEOBJ *, COLORADJUSTMENT *, LONG, _DWORD))v91)(
                    v35,
                    v79,
                    v87,
                    v40,
                    v41,
                    v63,
                    v121.right,
                    v111);
            ((void (__fastcall *)(void *, __int64, unsigned __int64, CLIPOBJ *))v103)(v79, v44, v26, v27);
            vAdvYDDA(v35);
            v87 += *v84;
            if ( v40 )
            {
              v40 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v40 + *(int *)(v77 + 88));
              v75 = v40;
            }
            top = v45 + 1;
            v41 = v68;
          }
          Win32FreePool(v79);
          if ( v26 == v12 )
            goto LABEL_81;
          v46 = 0;
          v84 = 0LL;
          v85 = 0;
          v86 = 0;
          v47 = 0LL;
          if ( v80->right - v80->left == v121.right && v80->bottom - v80->top == v121.bottom )
          {
            v46 = 1;
          }
          else
          {
            v107 = 0;
            v110 = 0;
            right = v120.right + 1;
            bottom = v120.bottom + 1;
            v108 = 0LL;
            v104 = 1;
            v109 = *(_DWORD *)(v12 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v104, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v84 )
            {
              v93 = 0LL;
              v94 = 0;
              v95 = 0;
              right = v121.right;
              bottom = v121.bottom;
              v108 = 0LL;
              v104 = 1;
              v109 = *(_DWORD *)(v12 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v93, (struct _DEVBITMAPINFO *)&v104, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v70);
              if ( v93 )
              {
                if ( v70 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v70, &v120);
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v70, (struct ERECTL *)&v120, 1);
                  if ( EngEraseSurface((SURFOBJ *)((unsigned __int64)(v84 + 6) & -(__int64)(v84 != 0LL)), &v120, 0) )
                  {
                    if ( EngEraseSurface(
                           (SURFOBJ *)((unsigned __int64)&v93[1] & -(__int64)(v93 != 0LL)),
                           &v121,
                           0xFFFFFFFF)
                      && EngPlgBlt(
                           (SURFOBJ *)((unsigned __int64)(v84 + 6) & -(__int64)(v84 != 0LL)),
                           (SURFOBJ *)((unsigned __int64)&v93[1] & -(__int64)(v93 != 0LL)),
                           0LL,
                           &pcoa,
                           0LL,
                           0LL,
                           0LL,
                           v71,
                           v88,
                           0LL,
                           3u) )
                    {
                      v47 = v84;
                      v46 = 1;
                    }
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v70);
              SURFMEM::~SURFMEM((SURFMEM *)&v93);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v118);
          if ( !v46 )
            goto LABEL_148;
          if ( !v119 )
            goto LABEL_148;
          v134 = (struct _POINTL)*v78;
          v135 = (struct _POINTL)v78[1];
          x = v78[2].x;
          LODWORD(v136) = x + v135.x - v134.x;
          y = v78[2].y;
          HIDWORD(v136) = y + v135.y - v134.y;
          v137 = x;
          v138 = y;
          if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v118, 0LL, &v134)
            || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v118, 0LL, &v135, 3u) )
          {
LABEL_148:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v118);
            SURFMEM::~SURFMEM((SURFMEM *)&v84);
            goto LABEL_150;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v71, (struct EPATHOBJ *)v118, 1u, v50);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v72);
          if ( v71 && v72 )
          {
            v51 = v89;
            if ( !v89 )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)&v72, (struct RGNOBJ *)&v71) )
                goto LABEL_147;
LABEL_129:
              v123 = *(struct _RECTL *)((char *)v72 + 56);
              if ( !v51 || bIntersect(&v123, &v51->rclBounds, &v123) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v126, v72, (struct ERECTL *)&v123, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v127) )
                {
                  v52 = v69 + v120.left;
                  v120.left += v69;
                  v53 = HIDWORD(v69) + v120.top;
                  v120.top += HIDWORD(v69);
                  v54 = v69 + v120.right;
                  v120.right += v69;
                  v55 = HIDWORD(v69) + v120.bottom;
                  v120.bottom += HIDWORD(v69);
                  v69 = 0LL;
                  ++*(_DWORD *)(v12 + 92);
                  if ( v64 )
                  {
                    *(_QWORD *)&v122.left = 0LL;
                    v122.right = v54 - v52;
                    v122.bottom = v55 - v53;
                    v80 = 0LL;
                    if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                      v59 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v90 + 2824);
                    else
                      v59 = EngStretchBlt;
                    v60 = v47 + 6;
                    if ( !v47 )
                      v60 = 0LL;
                    v61 = v12 + 24;
                    if ( !v12 )
                      v61 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, _QWORD, int *, _BYTE *, XLATEOBJ *, _QWORD, RECTL **, RECTL *, struct _RECTL *, __int64 *, int))v59)(
                      v61,
                      (v81 + 24) & ((unsigned __int128)-(__int128)v81 >> 64),
                      v60,
                      v126,
                      v73,
                      0LL,
                      &v80,
                      &v120,
                      &v122,
                      &v69,
                      4);
                  }
                  else
                  {
                    v56 = SURFACE::pfnBitBlt((SURFACE *)v12);
                    v57 = v47 + 6;
                    if ( !v47 )
                      v57 = 0LL;
                    v58 = v12 + 24;
                    if ( !v12 )
                      v58 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64, int *, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v56)(
                      v58,
                      (v81 + 24) & -(__int64)(v81 != 0),
                      v57,
                      v126,
                      v73,
                      &v120,
                      &v69,
                      &v69,
                      0LL,
                      0LL,
                      v47 != 0LL ? 43724 : 52428);
                  }
                }
              }
              v67 = 1;
              goto LABEL_147;
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)&v72, (struct RGNOBJ *)&v71, (struct RGNOBJ *)&v89[2].rclBounds.top, 8u) )
              goto LABEL_129;
          }
LABEL_147:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v72);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v71);
          goto LABEL_148;
        }
        Win32FreePool(v79);
        Win32FreePool(v35);
        goto LABEL_72;
      }
    }
  }
  return 0;
}
