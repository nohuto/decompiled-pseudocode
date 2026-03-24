/*
 * XREFs of EngHTBlt @ 0x1C0019F38
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0019280 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngAlphaBlend @ 0x1C00ACD70 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00B174C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028E4F0 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C0019C7C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C0019EDC (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A8F0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C001A9A8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C001A9F4 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C001AA8C (HT_HalftoneBitmap.c)
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00ACD38 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngBitBlt @ 0x1C00CB5E0 (EngBitBlt.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEEF0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C01122B8 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C01131AC (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0113400 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C011BBD4 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        POINTL a7,
        RECTL *a8,
        struct SURFACE *a9,
        _QWORD *a10,
        int a11,
        XLATEOBJ *a12)
{
  struct SURFACE *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  __int64 v19; // rax
  int v20; // r15d
  bool v21; // zf
  int v22; // esi
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  LONG v28; // eax
  int v29; // r13d
  struct SURFACE *v30; // rdx
  struct XLATE *v31; // r8
  struct PALETTE *v32; // rax
  __int64 v33; // rbx
  struct PALETTE *v34; // rdi
  int v35; // r13d
  __int16 v36; // dx
  __int16 v37; // r9
  struct SURFACE *v38; // r8
  __int128 v39; // xmm0
  int v40; // eax
  CLIPOBJ *v41; // rdx
  BYTE iDComplexity; // bl
  struct SURFACE *v43; // rcx
  int v44; // r11d
  RECTL *p_rclBounds; // r12
  unsigned __int64 v46; // rax
  int right; // r8d
  int left; // edx
  int v49; // ecx
  int v50; // r10d
  int top; // edx
  int bottom; // ecx
  int v53; // r8d
  int v54; // ecx
  unsigned __int64 v55; // rax
  int v56; // edx
  int v57; // eax
  struct SURFACE *v58; // r12
  XLATEOBJ *v59; // r13
  HPALETTE *v60; // rax
  XLATEOBJ *v61; // rbx
  SURFOBJ *v62; // rax
  struct PALETTE *v63; // rbx
  __int64 v64; // rdx
  int v65; // ebx
  __int64 v66; // rdx
  SURFOBJ *v67; // rdi
  __int64 v68; // r12
  _OWORD *v69; // r11
  __int16 v70; // dx
  unsigned int v71; // eax
  CLIPOBJ *v72; // r12
  struct SURFACE *v73; // rax
  SURFOBJ *v74; // rcx
  int v75; // eax
  CLIPOBJ *v77; // rax
  LONG cx; // r12d
  LONG v79; // r12d
  int v80; // eax
  LONG v81; // eax
  LONG v82; // r12d
  char v83; // bl
  int v84; // r12d
  int v85; // r13d
  ULONG iBitmapFormat; // ecx
  int v87; // eax
  ULONG iUniq; // eax
  char v89; // cl
  int v90; // eax
  _DWORD *v91; // rax
  LONG v92; // eax
  int v93; // eax
  __int64 v94; // rdx
  unsigned int cEntries; // ecx
  _BYTE *v96; // r8
  __int64 v97; // r10
  __int64 v98; // r9
  char v99; // cl
  __int64 v100; // rax
  unsigned int *v101; // rdi
  int v102; // esi
  int v103; // eax
  unsigned int v104; // r12d
  POINTL *v105; // [rsp+30h] [rbp-D0h]
  int pptlMask; // [rsp+38h] [rbp-C8h]
  int pbo; // [rsp+40h] [rbp-C0h]
  int pptlBrush; // [rsp+48h] [rbp-B8h]
  ROP4 rop4; // [rsp+50h] [rbp-B0h]
  int v110; // [rsp+60h] [rbp-A0h]
  BYTE v111; // [rsp+64h] [rbp-9Ch]
  char v112; // [rsp+68h] [rbp-98h]
  unsigned int v113; // [rsp+70h] [rbp-90h]
  __int64 v114; // [rsp+78h] [rbp-88h] BYREF
  struct SURFACE *v115; // [rsp+80h] [rbp-80h]
  int v116; // [rsp+88h] [rbp-78h] BYREF
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v118; // [rsp+98h] [rbp-68h] BYREF
  __int64 v119; // [rsp+A0h] [rbp-60h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-58h]
  SURFOBJ *v121; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v122; // [rsp+B8h] [rbp-48h]
  struct tagCOLORADJUSTMENT *v123; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v124; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD *v125; // [rsp+D0h] [rbp-30h]
  struct XLATE *v126; // [rsp+D8h] [rbp-28h]
  SURFOBJ *psoDest; // [rsp+E0h] [rbp-20h]
  int v128; // [rsp+E8h] [rbp-18h]
  __int64 v129; // [rsp+F0h] [rbp-10h]
  __int64 v130; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v131; // [rsp+100h] [rbp+0h] BYREF
  _OWORD *v132; // [rsp+110h] [rbp+10h] BYREF
  char v133; // [rsp+118h] [rbp+18h]
  int v134; // [rsp+11Ch] [rbp+1Ch]
  _QWORD *v135; // [rsp+120h] [rbp+20h]
  struct SURFACE *v136; // [rsp+128h] [rbp+28h] BYREF
  char v137; // [rsp+130h] [rbp+30h]
  int v138; // [rsp+134h] [rbp+34h]
  __int64 v139; // [rsp+138h] [rbp+38h] BYREF
  int v140; // [rsp+140h] [rbp+40h]
  __int128 v141; // [rsp+148h] [rbp+48h] BYREF
  _BYTE *v142; // [rsp+158h] [rbp+58h]
  _DWORD v143[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v144; // [rsp+170h] [rbp+70h]
  int v145; // [rsp+178h] [rbp+78h]
  int v146; // [rsp+17Ch] [rbp+7Ch]
  struct PALETTE *v147; // [rsp+180h] [rbp+80h]
  _DWORD v148[4]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v149; // [rsp+198h] [rbp+98h]
  int v150; // [rsp+1A0h] [rbp+A0h]
  int v151; // [rsp+1A4h] [rbp+A4h]
  _OWORD v152[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v153; // [rsp+1C8h] [rbp+C8h]
  _OWORD v154[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 *v155; // [rsp+1F0h] [rbp+F0h]
  _OWORD v156[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v157; // [rsp+218h] [rbp+118h]
  _OWORD prclDest[7]; // [rsp+220h] [rbp+120h] BYREF
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v160; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v161[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v126 = a5;
  v123 = a6;
  pptlSrc = a7;
  v135 = a10;
  v124 = a12;
  psoDest = a1;
  *(_QWORD *)&prclTrg.left = a2;
  pco = a4;
  v130 = a3;
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v118 = a9;
  v122 = v15;
  v16 = (unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL);
  v115 = (struct SURFACE *)v16;
  memset(v154, 0, sizeof(v154));
  v17 = 0;
  v18 = 0;
  v129 = (a3 - 24) & -(__int64)(a3 != 0);
  v155 = 0LL;
  v153 = 0LL;
  v157 = 0LL;
  v142 = 0LL;
  memset(v152, 0, sizeof(v152));
  memset(v156, 0, sizeof(v156));
  v141 = 0LL;
  if ( v15 )
  {
    v19 = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
    v114 = v19;
    if ( !v19 )
      return v17;
    v20 = 1;
    v21 = (*(_DWORD *)(v19 + 40) & 1) == 0;
    v22 = *(_DWORD *)(v19 + 40) & 1;
    v128 = v22;
    v116 = v22;
    if ( !v21 )
    {
      GreAcquireSemaphore(ghsemHT);
      v19 = v114;
      v15 = v122;
    }
    if ( a1->iType )
    {
      v29 = *(_DWORD *)(v19 + 2376);
      if ( v29 )
      {
        switch ( v29 )
        {
          case 2:
            v110 = 2;
            v112 = 2;
            break;
          case 3:
            v112 = -1;
            v110 = 2;
            break;
          case 4:
            v112 = -2;
            v110 = 3;
            break;
          case 5:
            v112 = -3;
            v110 = 4;
            break;
          case 6:
            v112 = 5;
            v110 = 5;
            break;
          case 7:
            v112 = 6;
            v110 = 6;
            break;
          default:
            goto LABEL_96;
        }
        goto LABEL_12;
      }
    }
    else
    {
      v23 = *((_DWORD *)v15 + 24) - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  goto LABEL_96;
                cx = a1->sizlBitmap.cx;
                v29 = 7;
                v18 = 4 * cx;
                v112 = 6;
                v110 = 6;
              }
              else
              {
                v28 = a1->sizlBitmap.cx;
                v29 = 6;
                v112 = 5;
                v110 = 5;
                v18 = (3 * (v28 + 1)) & 0xFFFFFFFC;
              }
            }
            else
            {
              v81 = a1->sizlBitmap.cx;
              v29 = 5;
              v112 = -3;
              v110 = 4;
              v18 = (2 * v81 + 2) & 0xFFFFFFFC;
            }
          }
          else
          {
            v82 = a1->sizlBitmap.cx;
            v29 = 4;
            v112 = -2;
            v18 = (v82 + 3) & 0xFFFFFFFC;
            v110 = 3;
          }
        }
        else
        {
          v83 = 2;
          v84 = a1->sizlBitmap.cx + 7;
          v110 = 2;
          v85 = 0;
          v18 = (v84 >> 1) & 0xFFFFFFFC;
          if ( *(_DWORD *)(v19 + 2376) != 2 )
            v83 = -1;
          LOBYTE(v85) = *(_DWORD *)(v19 + 2376) != 2;
          v112 = v83;
          v29 = v85 + 2;
          v16 = (__int64)v115;
        }
LABEL_12:
        v160.right = a2->sizlBitmap.cx;
        v160.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v160.left = 0LL;
        ERECTL::operator*=(&v160);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v160) )
        {
LABEL_133:
          v17 = v20;
          goto LABEL_96;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v114) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v114, v123) )
        {
          v20 = -1;
          goto LABEL_133;
        }
        v132 = 0LL;
        v133 = 0;
        v134 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v116);
        if ( !v16 )
          goto LABEL_144;
        if ( (*(_DWORD *)(v16 + 112) & 0x1000) != 0 )
        {
          v121 = *(SURFOBJ **)(v16 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v121, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          iBitmapFormat = a2->iBitmapFormat;
          v143[1] = a2->sizlBitmap.cx;
          v143[2] = a2->sizlBitmap.cy;
          v87 = *(_DWORD *)(v16 + 112) & 0x40000;
          v143[3] = 0;
          v145 = v87;
          v146 = 0;
          v144 = 0LL;
          if ( iBitmapFormat == 7 )
          {
            v143[0] = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v143[0] = 3;
          }
          else
          {
            v143[0] = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v132, (struct _DEVBITMAPINFO *)v143, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            || !EngCopyBits(
                  (SURFOBJ *)(-(__int64)(v132 != 0LL) & ((unsigned __int64)v132 + 24)),
                  a2,
                  0LL,
                  xloIdent,
                  &v160,
                  (POINTL *)&v160) )
          {
            if ( v22 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_144;
          }
          v125 = v132;
        }
        else
        {
          v125 = (_OWORD *)v16;
        }
        if ( v22 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v114) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v114, v123) )
        {
          v147 = ppalGetFromXlate((struct SURFACE *)v16, v122, v126, 1u, 1);
          if ( !v147 )
          {
LABEL_95:
            SURFMEM::~SURFMEM((SURFMEM *)&v132);
LABEL_96:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v116);
            return v17;
          }
          v32 = ppalGetFromXlate((struct SURFACE *)v16, v30, v31, 2u, 1);
          v33 = v114;
          v34 = v32;
          v140 = 0;
          v139 = 0LL;
          v121 = 0LL;
          if ( v29 == *(_DWORD *)(v114 + 2376) )
          {
            v35 = *(_DWORD *)(v114 + 40) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v139, v29, (struct _GDIINFO *)(v114 + 2136)) )
              goto LABEL_113;
            v121 = (SURFOBJ *)&v139;
            v80 = XEPALOBJ::bEqualEntries(&v139, v34);
            v33 = v114;
            v35 = v80;
          }
          LODWORD(v119) = v35;
          memset(prclDest, 0, 0x68uLL);
          v36 = a11;
          v131 = 0LL;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v124->iUniq;
          if ( (unsigned __int8)v124->iUniq )
          {
            v36 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          BYTE1(v131) = BYTE2(v124->iUniq);
          if ( HIBYTE(iUniq) != 1 || BYTE2(iUniq) != 0xFF )
          {
            v89 = 1;
LABEL_153:
            LOBYTE(v131) = v89;
            if ( v34 )
            {
              *((_QWORD *)&v131 + 1) = *((_QWORD *)v34 + 14);
              WORD1(v131) = *((_WORD *)v34 + 14);
              v90 = *((_DWORD *)v34 + 6);
              if ( (v90 & 8) != 0
                || (v90 & 2) != 0
                && (v91 = (_DWORD *)*((_QWORD *)v34 + 14), *v91 == 16711680)
                && v91[1] == 65280
                && v91[2] == 255 )
              {
                LOBYTE(v131) = v89 | 2;
              }
            }
            *((_QWORD *)&prclDest[0] + 1) = &v131;
LABEL_27:
            v37 = v36;
            v38 = v118;
            LOWORD(prclDest[0]) = v36;
            v39 = *(_OWORD *)v118;
            prclDest[2] = *a8;
            *(_QWORD *)&prclDest[5] = **(_QWORD **)&pptlSrc;
            prclDest[1] = v39;
            BYTE3(prclDest[0]) = *(_BYTE *)(v33 + 2368);
            if ( v126 )
              v40 = *((_DWORD *)v126 + 18);
            else
              LOBYTE(v40) = 0;
            if ( (v40 & 4) != 0 || (v40 & 0x20) == 0 && (v40 & 3) != 0 )
            {
              v37 = v36 | 0x80;
              LOWORD(prclDest[0]) = v36 | 0x80;
            }
            v41 = pco;
            iDComplexity = 0;
            v43 = v122;
            v118 = v122;
            v136 = 0LL;
            v137 = 0;
            v138 = 0;
            LODWORD(v115) = 0;
            if ( pco )
              iDComplexity = pco->iDComplexity;
            v44 = v110;
            v111 = iDComplexity;
            if ( !psoDest->iType && psoDest->lDelta == v18 && (v110 == 3 || v35) && iDComplexity != 3 )
            {
              if ( psoDest != *(SURFOBJ **)&prclTrg.left )
              {
                v58 = v122;
                goto LABEL_57;
              }
              p_rclBounds = a8;
              if ( !(unsigned int)bIntersect(v38, a8) )
              {
                v58 = v118;
LABEL_57:
                v59 = xloIdent;
                pptlSrc = (POINTL)xloIdent;
                v118 = 0LL;
                v124 = 0LL;
                v60 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v114);
                v61 = xloIdent;
                if ( (_DWORD)v119 )
                  goto LABEL_68;
                EPALOBJ::EPALOBJ((EPALOBJ *)&v119, *v60);
                v62 = (SURFOBJ *)&v119;
                if ( v121 )
                  v62 = v121;
                *(_QWORD *)&prclTrg.left = v62;
                if ( !v126 || (v63 = (struct PALETTE *)*((_QWORD *)v126 + 7)) == 0LL )
                  v63 = ppalDefault;
                rop4 = 0;
                pptlBrush = 0xFFFFFF;
                pbo = 0xFFFFFF;
                pptlMask = 0;
                v105 = (POINTL *)v63;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v118, 0LL, 0LL) )
                {
                  v59 = (XLATEOBJ *)v118;
                  pptlSrc = (POINTL)v118;
                  if ( !v129 && a11 != 512 || !(_DWORD)v115 )
                  {
                    v61 = xloIdent;
                    goto LABEL_66;
                  }
                  rop4 = 0;
                  pptlBrush = 0xFFFFFF;
                  pbo = 0xFFFFFF;
                  pptlMask = 0;
                  v105 = (POINTL *)v63;
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v124, 0LL, 0LL) )
                  {
                    v61 = v124;
LABEL_66:
                    if ( v119 )
                      DEC_SHARE_REF_CNT(v119, v64);
LABEL_68:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v116);
                    PDEVOBJ::vSync((PDEVOBJ *)&v114, psoDest, 0LL, 0);
                    if ( v129 || a11 == 512 )
                    {
                      if ( (_DWORD)v115 )
                      {
                        v92 = *((_DWORD *)v58 + 14);
                        ++*((_DWORD *)v58 + 23);
                        prclTrg.right = v92;
                        prclTrg.bottom = *((_DWORD *)v58 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v93 = (*((_DWORD *)v122 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *, POINTL *, int, int, int, ROP4))(v114 + 2840))(
                                (__int64)v58 + 24,
                                psoDest,
                                0LL,
                                v61,
                                &prclTrg,
                                &prclDest[4],
                                v105,
                                pptlMask,
                                pbo,
                                pptlBrush,
                                rop4)
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *, POINTL *, int, int, int, ROP4))EngCopyBits)(
                                (char *)v58 + 24,
                                psoDest,
                                0LL,
                                v61,
                                &prclTrg,
                                &prclDest[4],
                                v105,
                                pptlMask,
                                pbo,
                                pptlBrush,
                                rop4);
                        if ( !v93
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v58 + 24),
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                &prclTrg,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0xFFFFu) )
                        {
                          if ( v22 )
                            GreAcquireSemaphore(ghsemHT);
LABEL_191:
                          v17 = -1;
LABEL_92:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v124);
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v118);
LABEL_93:
                          SURFMEM::~SURFMEM((SURFMEM *)&v136);
LABEL_94:
                          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v139);
                          goto LABEL_95;
                        }
                      }
                    }
                    if ( v22 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v114)
                      && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v114, v123) )
                    {
                      goto LABEL_191;
                    }
                    v65 = 0;
                    v113 = (unsigned int)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v114);
                    if ( !(unsigned int)bSetHTSrcSurfInfo(
                                          ((unsigned __int64)v125 + 24) & -(__int64)(v125 != 0LL),
                                          (__int64)v147,
                                          (__int64)v152,
                                          (__int64)v126)
                      || (v67 = (SURFOBJ *)(((unsigned __int64)v58 + 24) & -(__int64)(v58 != 0LL)),
                          v121 = v67,
                          !(unsigned int)bSetHTSurfInfo(v67, (struct _HTSURFACEINFO *)v154, v112))
                      || (v68 = v129) != 0
                      && !(unsigned int)bSetHTSurfInfo(
                                          (struct _SURFOBJ *)(v129 + 24),
                                          (struct _HTSURFACEINFO *)v156,
                                          *(_DWORD *)(v130 + 72)) )
                    {
LABEL_89:
                      if ( v153 )
                        FreeThreadBufferWithTag(v153, v66);
                      v17 = v65 != 0 ? 1 : -1;
                      goto LABEL_92;
                    }
                    v125 = 0LL;
                    LODWORD(v69) = 0;
                    if ( v68 )
                    {
                      if ( (unsigned int)bUMPDSecurityGateEx() && !v135 )
                      {
                        if ( gfUMPDDebug )
                          DbgPrint(
                            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n",
                            1063);
                        if ( v153 )
                          FreeThreadBufferWithTag(v153, v94);
                        goto LABEL_191;
                      }
                      v69 = v156;
                      *((_QWORD *)&prclDest[5] + 1) = *v135;
                      v125 = v156;
                    }
                    v70 = prclDest[0];
                    v71 = 256;
                    if ( (*(_DWORD *)(v114 + 2380) & 0x100) == 0 )
                    {
                      v70 = LOWORD(prclDest[0]) | 2;
                      LOWORD(prclDest[0]) |= 2u;
                    }
                    if ( v110 == 3 )
                    {
                      *(_WORD *)((char *)&v141 + 1) = 257;
                      v155 = &v141;
                      v142 = v161;
                      BYTE3(v141) = 0;
                      *(_QWORD *)((char *)&v141 + 4) = 0x100000000FFLL;
                      cEntries = v59->cEntries;
                      if ( cEntries > 0x100 || (v71 = v59->cEntries, cEntries) )
                      {
                        v96 = v161;
                        v97 = v71;
                        v98 = 0LL;
                        do
                        {
                          v99 = v59->pulXlate[v98++];
                          *v96++ = v99;
                          --v97;
                        }
                        while ( v97 );
                      }
                      v59 = xloIdent;
                      pptlSrc = (POINTL)xloIdent;
                    }
                    v72 = pco;
                    if ( v111 )
                    {
                      LOWORD(prclDest[0]) = v70 | 1;
                      if ( v111 != 1 )
                      {
                        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                        v65 = 1;
                        v100 = AllocFreeTmpBuffer(324LL);
                        v101 = (unsigned int *)v100;
                        if ( v100 )
                        {
                          v102 = (int)v125;
                          v130 = v100;
                          do
                          {
                            v103 = XCLIPOBJ::bEnum((XCLIPOBJ *)v72, 0x144u, v101, 0LL);
                            v104 = 0;
                            LODWORD(v119) = v103;
                            if ( *v101 )
                            {
                              do
                              {
                                prclDest[3] = *(_OWORD *)&v101[4 * v104++ + 1];
                                v65 = ((int)HT_HalftoneBitmap(
                                              v113,
                                              (_DWORD)v123,
                                              (unsigned int)v152,
                                              v102,
                                              (__int64)v154,
                                              (__int64)prclDest) >= 0) & (unsigned __int8)v65;
                              }
                              while ( v104 < *v101 );
                              v103 = v119;
                            }
                            if ( !v103 )
                              break;
                            v72 = pco;
                          }
                          while ( v65 );
                          AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v130);
                          v22 = v128;
                          v59 = (XLATEOBJ *)pptlSrc;
                          v67 = v121;
                          v72 = pco;
                        }
                        else
                        {
                          v67 = v121;
                          v65 = 0;
                        }
                        goto LABEL_82;
                      }
                      prclDest[3] = pco->rclBounds;
                    }
                    LOBYTE(v65) = (int)HT_HalftoneBitmap(
                                         v113,
                                         (_DWORD)v123,
                                         (unsigned int)v152,
                                         (_DWORD)v69,
                                         (__int64)v154,
                                         (__int64)prclDest) >= 0;
LABEL_82:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v116);
                    if ( (_DWORD)v115 && v65 )
                    {
                      v73 = v122;
                      v74 = psoDest;
                      pptlSrc = 0LL;
                      ++*((_DWORD *)v122 + 23);
                      if ( v74->iType )
                      {
                        if ( (*((_DWORD *)v73 + 28) & 0x400) != 0 )
                          v75 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))(v114 + 2840))(
                                  v74,
                                  v67,
                                  v72,
                                  v59,
                                  &prclDest[4],
                                  &pptlSrc);
                        else
                          v75 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))EngCopyBits)(
                                  v74,
                                  v67,
                                  v72,
                                  v59,
                                  &prclDest[4],
                                  &pptlSrc);
                      }
                      else
                      {
                        v75 = EngCopyBits(v74, v67, v72, v59, (RECTL *)&prclDest[4], &pptlSrc);
                      }
                      v65 = v75;
                    }
                    if ( v22 )
                      GreAcquireSemaphore(ghsemHT);
                    goto LABEL_89;
                  }
                }
                if ( v119 )
                  DEC_SHARE_REF_CNT(v119, v64);
                goto LABEL_191;
              }
              v37 = prclDest[0];
              v44 = v110;
              v43 = v122;
              v41 = pco;
            }
            else
            {
              p_rclBounds = a8;
            }
            LODWORD(v115) = 1;
            if ( iDComplexity )
            {
              v111 = 0;
              v77 = 0LL;
              p_rclBounds = &v41->rclBounds;
              if ( iDComplexity != 1 )
                v77 = v41;
              pco = v77;
            }
            v46 = *((_QWORD *)v43 + 7);
            right = p_rclBounds->right;
            left = p_rclBounds->left;
            if ( right <= p_rclBounds->left )
            {
              right = p_rclBounds->left;
              left = p_rclBounds->right;
            }
            v49 = 0;
            if ( left >= 0 )
              v49 = left;
            if ( right > (int)v46 )
              right = v46;
            v50 = right - v49;
            if ( right - v49 > 0 )
            {
              top = p_rclBounds->top;
              LODWORD(prclDest[4]) = v49;
              bottom = p_rclBounds->bottom;
              DWORD2(prclDest[4]) = right;
              v53 = bottom;
              if ( bottom <= top )
              {
                v53 = top;
                top = bottom;
              }
              v54 = 0;
              if ( top >= 0 )
                v54 = top;
              v55 = HIDWORD(v46);
              if ( v53 <= (int)v55 )
                LODWORD(v55) = v53;
              v56 = v55 - v54;
              if ( (int)v55 - v54 > 0 )
              {
                HIDWORD(prclDest[4]) = v55;
                DWORD1(prclDest[4]) = v54;
                v57 = *((_DWORD *)v122 + 28) & 0x40000;
                LOWORD(prclDest[0]) = v37 | 0x10;
                v148[2] = v56;
                v150 = v57;
                v148[3] = 0;
                v151 = 0;
                v148[1] = v50;
                v149 = 0LL;
                v148[0] = v44;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v136,
                       (struct _DEVBITMAPINFO *)v148,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
                {
                  v58 = v136;
                  goto LABEL_57;
                }
                v20 = -1;
              }
            }
            v17 = v20;
            goto LABEL_93;
          }
          if ( (unsigned int)bIsSourceBGRA(v115) )
          {
            v36 = 512;
            v89 = 4;
            goto LABEL_153;
          }
LABEL_113:
          v17 = -1;
          goto LABEL_94;
        }
LABEL_144:
        v17 = -1;
        goto LABEL_95;
      }
      v79 = a1->sizlBitmap.cx;
      v29 = 0;
      v18 = ((v79 + 31) >> 3) & 0xFFFFFFFC;
    }
    v112 = 1;
    v110 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
