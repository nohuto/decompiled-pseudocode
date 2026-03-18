/*
 * XREFs of EngHTBlt @ 0x1C009247C
 * Callers:
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028C190 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C002D3AC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C009222C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0092E30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0092EC8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C0092F14 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C0092FAC (HT_HalftoneBitmap.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C009537C (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C009700C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C009726C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C01083BC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  int *v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  __int64 v21; // rax
  int v22; // r15d
  bool v23; // zf
  int v24; // esi
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  LONG v30; // eax
  int v31; // r13d
  struct SURFACE *v32; // rdx
  struct XLATE *v33; // r8
  struct PALETTE *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdi
  int v37; // r13d
  __int16 v38; // dx
  __int16 v39; // r9
  struct SURFACE *v40; // r8
  __int128 v41; // xmm0
  int v42; // eax
  CLIPOBJ *v43; // rdx
  BYTE iDComplexity; // bl
  struct SURFACE *v45; // rcx
  int v46; // r11d
  RECTL *p_rclBounds; // r12
  unsigned __int64 v48; // rax
  int right; // r8d
  int left; // edx
  int v51; // ecx
  int v52; // r10d
  int top; // edx
  int bottom; // ecx
  int v55; // r8d
  int v56; // ecx
  unsigned __int64 v57; // rax
  int v58; // edx
  int v59; // eax
  struct SURFACE *v60; // r12
  XLATEOBJ *v61; // r13
  HPALETTE *v62; // rax
  XLATEOBJ *v63; // rbx
  __int64 *v64; // rax
  struct PALETTE *v65; // rbx
  int v66; // ebx
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
  int v83; // ebx
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
  unsigned int cEntries; // ecx
  _BYTE *v95; // r8
  __int64 v96; // r10
  __int64 v97; // r9
  char v98; // cl
  __int64 v99; // rax
  char *v100; // rdi
  int v101; // esi
  int v102; // eax
  unsigned int v103; // r12d
  int v104; // [rsp+60h] [rbp-A0h]
  BYTE v105; // [rsp+64h] [rbp-9Ch]
  int v106; // [rsp+68h] [rbp-98h]
  unsigned int v107; // [rsp+70h] [rbp-90h]
  __int64 v108; // [rsp+78h] [rbp-88h] BYREF
  struct SURFACE *v109; // [rsp+80h] [rbp-80h]
  int v110; // [rsp+88h] [rbp-78h] BYREF
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-58h]
  SURFOBJ *v115; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v116; // [rsp+B8h] [rbp-48h]
  struct tagCOLORADJUSTMENT *v117; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v118; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD *v119; // [rsp+D0h] [rbp-30h]
  struct XLATE *v120; // [rsp+D8h] [rbp-28h]
  SURFOBJ *psoDest; // [rsp+E0h] [rbp-20h]
  int v122; // [rsp+E8h] [rbp-18h]
  __int64 v123; // [rsp+F0h] [rbp-10h]
  __int64 v124; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v125; // [rsp+100h] [rbp+0h] BYREF
  _OWORD *v126; // [rsp+110h] [rbp+10h] BYREF
  char v127; // [rsp+118h] [rbp+18h]
  int v128; // [rsp+11Ch] [rbp+1Ch]
  _QWORD *v129; // [rsp+120h] [rbp+20h]
  struct SURFACE *v130; // [rsp+128h] [rbp+28h] BYREF
  char v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+134h] [rbp+34h]
  __int64 v133; // [rsp+138h] [rbp+38h] BYREF
  int v134; // [rsp+140h] [rbp+40h]
  __int128 v135; // [rsp+148h] [rbp+48h] BYREF
  _BYTE *v136; // [rsp+158h] [rbp+58h]
  _DWORD v137[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v138; // [rsp+170h] [rbp+70h]
  int v139; // [rsp+178h] [rbp+78h]
  int v140; // [rsp+17Ch] [rbp+7Ch]
  struct PALETTE *v141; // [rsp+180h] [rbp+80h]
  _DWORD v142[4]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v143; // [rsp+198h] [rbp+98h]
  int v144; // [rsp+1A0h] [rbp+A0h]
  int v145; // [rsp+1A4h] [rbp+A4h]
  _OWORD v146[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v147; // [rsp+1C8h] [rbp+C8h]
  _OWORD v148[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 *v149; // [rsp+1F0h] [rbp+F0h]
  _OWORD v150[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v151; // [rsp+218h] [rbp+118h]
  _OWORD prclDest[7]; // [rsp+220h] [rbp+120h] BYREF
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v154; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v155[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v120 = a5;
  v117 = a6;
  pptlSrc = a7;
  v129 = a10;
  v118 = a12;
  psoDest = a1;
  *(_QWORD *)&prclTrg.left = a2;
  pco = a4;
  v124 = a3;
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v17 = (int *)a9;
  v112 = a9;
  v116 = v15;
  v18 = (unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL);
  v109 = (struct SURFACE *)v18;
  memset(v148, 0, sizeof(v148));
  v19 = 0;
  v20 = 0;
  v123 = (a3 - 24) & -(__int64)(a3 != 0);
  v149 = 0LL;
  v147 = 0LL;
  v151 = 0LL;
  v136 = 0LL;
  memset(v146, 0, sizeof(v146));
  memset(v150, 0, sizeof(v150));
  v135 = 0LL;
  if ( v15 )
  {
    v21 = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
    v108 = v21;
    if ( !v21 )
      return v19;
    v22 = 1;
    v23 = (*(_DWORD *)(v21 + 40) & 1) == 0;
    v24 = *(_DWORD *)(v21 + 40) & 1;
    v122 = v24;
    v110 = v24;
    if ( !v23 )
    {
      GreAcquireSemaphore(ghsemHT);
      v21 = v108;
      v15 = v116;
      v17 = (int *)v112;
    }
    if ( a1->iType )
    {
      v31 = *(_DWORD *)(v21 + 2344);
      if ( v31 )
      {
        switch ( v31 )
        {
          case 2:
            v104 = 2;
            v106 = 2;
            break;
          case 3:
            v106 = 255;
            v104 = 2;
            break;
          case 4:
            v106 = 254;
            v104 = 3;
            break;
          case 5:
            v106 = 253;
            v104 = 4;
            break;
          case 6:
            v106 = 5;
            v104 = 5;
            break;
          case 7:
            v106 = 6;
            v104 = 6;
            break;
          default:
            goto LABEL_95;
        }
        goto LABEL_12;
      }
    }
    else
    {
      v25 = *((_DWORD *)v15 + 24) - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_95;
                cx = a1->sizlBitmap.cx;
                v31 = 7;
                v20 = 4 * cx;
                v106 = 6;
                v104 = 6;
              }
              else
              {
                v30 = a1->sizlBitmap.cx;
                v31 = 6;
                v106 = 5;
                v104 = 5;
                v20 = (3 * (v30 + 1)) & 0xFFFFFFFC;
              }
            }
            else
            {
              v81 = a1->sizlBitmap.cx;
              v31 = 5;
              v106 = 253;
              v104 = 4;
              v20 = (2 * v81 + 2) & 0xFFFFFFFC;
            }
          }
          else
          {
            v82 = a1->sizlBitmap.cx;
            v31 = 4;
            v106 = 254;
            v20 = (v82 + 3) & 0xFFFFFFFC;
            v104 = 3;
          }
        }
        else
        {
          v83 = 2;
          v84 = a1->sizlBitmap.cx + 7;
          v104 = 2;
          v85 = 0;
          v20 = (v84 >> 1) & 0xFFFFFFFC;
          if ( *(_DWORD *)(v21 + 2344) != 2 )
            v83 = 255;
          LOBYTE(v85) = *(_DWORD *)(v21 + 2344) != 2;
          v106 = v83;
          v31 = v85 + 2;
          v18 = (__int64)v109;
        }
LABEL_12:
        v154.right = a2->sizlBitmap.cx;
        v154.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v154.left = 0LL;
        ERECTL::operator*=(&v154.left, v17);
        if ( ERECTL::bEmpty((ERECTL *)&v154) )
        {
LABEL_132:
          v19 = v22;
          goto LABEL_95;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v108) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v108, v117) )
        {
          v22 = -1;
          goto LABEL_132;
        }
        v126 = 0LL;
        v127 = 0;
        v128 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
        if ( !v18 )
          goto LABEL_143;
        if ( (*(_DWORD *)(v18 + 112) & 0x1000) != 0 )
        {
          v115 = *(SURFOBJ **)(v18 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v115, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          iBitmapFormat = a2->iBitmapFormat;
          v137[1] = a2->sizlBitmap.cx;
          v137[2] = a2->sizlBitmap.cy;
          v87 = *(_DWORD *)(v18 + 112) & 0x40000;
          v137[3] = 0;
          v139 = v87;
          v140 = 0;
          v138 = 0LL;
          if ( iBitmapFormat == 7 )
          {
            v137[0] = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v137[0] = 3;
          }
          else
          {
            v137[0] = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v126, (struct _DEVBITMAPINFO *)v137, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            || !EngCopyBits(
                  (SURFOBJ *)(-(__int64)(v126 != 0LL) & ((unsigned __int64)v126 + 24)),
                  a2,
                  0LL,
                  xloIdent,
                  &v154,
                  (POINTL *)&v154) )
          {
            if ( v24 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_143;
          }
          v119 = v126;
        }
        else
        {
          v119 = (_OWORD *)v18;
        }
        if ( v24 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v108) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v108, v117) )
        {
          v141 = ppalGetFromXlate((struct SURFACE *)v18, v116, v120, 1u, 1);
          if ( !v141 )
          {
LABEL_94:
            SURFMEM::~SURFMEM((SURFMEM *)&v126);
LABEL_95:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
            return v19;
          }
          v34 = ppalGetFromXlate((struct SURFACE *)v18, v32, v33, 2u, 1);
          v35 = v108;
          v36 = (__int64)v34;
          v134 = 0;
          v133 = 0LL;
          v115 = 0LL;
          if ( v31 == *(_DWORD *)(v108 + 2344) )
          {
            v37 = *(_DWORD *)(v108 + 40) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v133, v31, (struct _GDIINFO *)(v108 + 2104)) )
              goto LABEL_112;
            v115 = (SURFOBJ *)&v133;
            v80 = XEPALOBJ::bEqualEntries(&v133, v36);
            v35 = v108;
            v37 = v80;
          }
          LODWORD(v113) = v37;
          memset(prclDest, 0, 0x68uLL);
          v38 = a11;
          v125 = 0LL;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v118->iUniq;
          if ( (unsigned __int8)v118->iUniq )
          {
            v38 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          BYTE1(v125) = BYTE2(v118->iUniq);
          if ( HIBYTE(iUniq) != 1 || BYTE2(iUniq) != 0xFF )
          {
            v89 = 1;
LABEL_152:
            LOBYTE(v125) = v89;
            if ( v36 )
            {
              *((_QWORD *)&v125 + 1) = *(_QWORD *)(v36 + 112);
              WORD1(v125) = *(_WORD *)(v36 + 28);
              v90 = *(_DWORD *)(v36 + 24);
              if ( (v90 & 8) != 0
                || (v90 & 2) != 0
                && (v91 = *(_DWORD **)(v36 + 112), *v91 == 16711680)
                && v91[1] == 65280
                && v91[2] == 255 )
              {
                LOBYTE(v125) = v89 | 2;
              }
            }
            *((_QWORD *)&prclDest[0] + 1) = &v125;
LABEL_27:
            v39 = v38;
            v40 = v112;
            LOWORD(prclDest[0]) = v38;
            v41 = *(_OWORD *)v112;
            prclDest[2] = *a8;
            *(_QWORD *)&prclDest[5] = **(_QWORD **)&pptlSrc;
            prclDest[1] = v41;
            BYTE3(prclDest[0]) = *(_BYTE *)(v35 + 2336);
            if ( v120 )
            {
              v42 = *((_DWORD *)v120 + 18);
              if ( (v42 & 4) != 0 || (v42 & 0x20) == 0 && (v42 & 3) != 0 )
              {
                v39 = v38 | 0x80;
                LOWORD(prclDest[0]) = v38 | 0x80;
              }
            }
            v43 = pco;
            iDComplexity = 0;
            v45 = v116;
            v112 = v116;
            v130 = 0LL;
            v131 = 0;
            v132 = 0;
            LODWORD(v109) = 0;
            if ( pco )
              iDComplexity = pco->iDComplexity;
            v46 = v104;
            v105 = iDComplexity;
            if ( !psoDest->iType && psoDest->lDelta == v20 && (v104 == 3 || v37) && iDComplexity != 3 )
            {
              if ( psoDest != *(SURFOBJ **)&prclTrg.left )
              {
                v60 = v116;
                goto LABEL_56;
              }
              p_rclBounds = a8;
              if ( !(unsigned int)bIntersect(v40, a8) )
              {
                v60 = v112;
LABEL_56:
                v61 = xloIdent;
                pptlSrc = (POINTL)xloIdent;
                v112 = 0LL;
                v118 = 0LL;
                v62 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v108);
                v63 = xloIdent;
                if ( (_DWORD)v113 )
                  goto LABEL_67;
                EPALOBJ::EPALOBJ((EPALOBJ *)&v113, *v62);
                v64 = &v113;
                if ( v115 )
                  v64 = (__int64 *)v115;
                *(_QWORD *)&prclTrg.left = v64;
                if ( !v120 || (v65 = (struct PALETTE *)*((_QWORD *)v120 + 7)) == 0LL )
                  v65 = ppalDefault;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v112,
                                     0LL,
                                     0,
                                     *v64,
                                     v36,
                                     (__int64)v65,
                                     (__int64)v65,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  v61 = (XLATEOBJ *)v112;
                  pptlSrc = (POINTL)v112;
                  if ( !v123 && a11 != 512 || !(_DWORD)v109 )
                  {
                    v63 = xloIdent;
                    goto LABEL_65;
                  }
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (__int64 *)&v118,
                                       0LL,
                                       0,
                                       v36,
                                       **(_QWORD **)&prclTrg.left,
                                       (__int64)v65,
                                       (__int64)v65,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v63 = v118;
LABEL_65:
                    if ( v113 )
                      DEC_SHARE_REF_CNT(v113);
LABEL_67:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
                    PDEVOBJ::vSync((PDEVOBJ *)&v108, psoDest, 0LL, 0);
                    if ( v123 || a11 == 512 )
                    {
                      if ( (_DWORD)v109 )
                      {
                        v92 = *((_DWORD *)v60 + 14);
                        ++*((_DWORD *)v60 + 23);
                        prclTrg.right = v92;
                        prclTrg.bottom = *((_DWORD *)v60 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v93 = (*((_DWORD *)v116 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *))(v108 + 2816))(
                                (__int64)v60 + 24,
                                psoDest,
                                0LL,
                                v63,
                                &prclTrg,
                                &prclDest[4])
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *))EngCopyBits)(
                                (char *)v60 + 24,
                                psoDest,
                                0LL,
                                v63,
                                &prclTrg,
                                &prclDest[4]);
                        if ( !v93
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v60 + 24),
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
                          if ( v24 )
                            GreAcquireSemaphore(ghsemHT);
LABEL_189:
                          v19 = -1;
LABEL_91:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v118);
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v112);
LABEL_92:
                          SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_93:
                          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v133);
                          goto LABEL_94;
                        }
                      }
                    }
                    if ( v24 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v108)
                      && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v108, v117) )
                    {
                      goto LABEL_189;
                    }
                    v66 = 0;
                    v107 = (unsigned int)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v108);
                    if ( !(unsigned int)bSetHTSrcSurfInfo(
                                          ((unsigned __int64)v119 + 24) & -(__int64)(v119 != 0LL),
                                          (__int64)v141,
                                          (__int64)v146,
                                          (__int64)v120)
                      || (v67 = (SURFOBJ *)(((unsigned __int64)v60 + 24) & -(__int64)(v60 != 0LL)),
                          v115 = v67,
                          !(unsigned int)bSetHTSurfInfo(v67, (struct _HTSURFACEINFO *)v148, v106))
                      || (v68 = v123) != 0
                      && !(unsigned int)bSetHTSurfInfo(
                                          (struct _SURFOBJ *)(v123 + 24),
                                          (struct _HTSURFACEINFO *)v150,
                                          *(_DWORD *)(v124 + 72)) )
                    {
LABEL_88:
                      if ( v147 )
                        FreeThreadBufferWithTag(v147);
                      v19 = v66 != 0 ? 1 : -1;
                      goto LABEL_91;
                    }
                    v119 = 0LL;
                    LODWORD(v69) = 0;
                    if ( v68 )
                    {
                      if ( bUMPDSecurityGateEx() && !v129 )
                      {
                        if ( gfUMPDDebug )
                          DbgPrint(
                            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n",
                            1063);
                        if ( v147 )
                          FreeThreadBufferWithTag(v147);
                        goto LABEL_189;
                      }
                      v69 = v150;
                      *((_QWORD *)&prclDest[5] + 1) = *v129;
                      v119 = v150;
                    }
                    v70 = prclDest[0];
                    v71 = 256;
                    if ( (*(_DWORD *)(v108 + 2348) & 0x100) == 0 )
                    {
                      v70 = LOWORD(prclDest[0]) | 2;
                      LOWORD(prclDest[0]) |= 2u;
                    }
                    if ( v104 == 3 )
                    {
                      *(_WORD *)((char *)&v135 + 1) = 257;
                      v149 = &v135;
                      v136 = v155;
                      BYTE3(v135) = 0;
                      *(_QWORD *)((char *)&v135 + 4) = 0x100000000FFLL;
                      cEntries = v61->cEntries;
                      if ( cEntries > 0x100 || (v71 = v61->cEntries, cEntries) )
                      {
                        v95 = v155;
                        v96 = v71;
                        v97 = 0LL;
                        do
                        {
                          v98 = v61->pulXlate[v97++];
                          *v95++ = v98;
                          --v96;
                        }
                        while ( v96 );
                      }
                      v61 = xloIdent;
                      pptlSrc = (POINTL)xloIdent;
                    }
                    v72 = pco;
                    if ( v105 )
                    {
                      LOWORD(prclDest[0]) = v70 | 1;
                      if ( v105 != 1 )
                      {
                        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                        v66 = 1;
                        v99 = AllocFreeTmpBuffer(324LL);
                        v100 = (char *)v99;
                        if ( v99 )
                        {
                          v101 = (int)v119;
                          v124 = v99;
                          do
                          {
                            v102 = XCLIPOBJ::bEnum((XCLIPOBJ *)v72, 0x144u, v100, 0LL);
                            v103 = 0;
                            LODWORD(v113) = v102;
                            if ( *(_DWORD *)v100 )
                            {
                              do
                              {
                                prclDest[3] = *(_OWORD *)&v100[16 * v103++ + 4];
                                v66 = ((int)HT_HalftoneBitmap(
                                              v107,
                                              (_DWORD)v117,
                                              (unsigned int)v146,
                                              v101,
                                              (__int64)v148,
                                              (__int64)prclDest) >= 0) & (unsigned __int8)v66;
                              }
                              while ( v103 < *(_DWORD *)v100 );
                              v102 = v113;
                            }
                            if ( !v102 )
                              break;
                            v72 = pco;
                          }
                          while ( v66 );
                          AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v124);
                          v24 = v122;
                          v61 = (XLATEOBJ *)pptlSrc;
                          v67 = v115;
                          v72 = pco;
                        }
                        else
                        {
                          v67 = v115;
                          v66 = 0;
                        }
                        goto LABEL_81;
                      }
                      prclDest[3] = pco->rclBounds;
                    }
                    LOBYTE(v66) = (int)HT_HalftoneBitmap(
                                         v107,
                                         (_DWORD)v117,
                                         (unsigned int)v146,
                                         (_DWORD)v69,
                                         (__int64)v148,
                                         (__int64)prclDest) >= 0;
LABEL_81:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
                    if ( (_DWORD)v109 && v66 )
                    {
                      v73 = v116;
                      v74 = psoDest;
                      pptlSrc = 0LL;
                      ++*((_DWORD *)v116 + 23);
                      if ( v74->iType )
                      {
                        if ( (*((_DWORD *)v73 + 28) & 0x400) != 0 )
                          v75 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))(v108 + 2816))(
                                  v74,
                                  v67,
                                  v72,
                                  v61,
                                  &prclDest[4],
                                  &pptlSrc);
                        else
                          v75 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))EngCopyBits)(
                                  v74,
                                  v67,
                                  v72,
                                  v61,
                                  &prclDest[4],
                                  &pptlSrc);
                      }
                      else
                      {
                        v75 = EngCopyBits(v74, v67, v72, v61, (RECTL *)&prclDest[4], &pptlSrc);
                      }
                      v66 = v75;
                    }
                    if ( v24 )
                      GreAcquireSemaphore(ghsemHT);
                    goto LABEL_88;
                  }
                }
                if ( v113 )
                  DEC_SHARE_REF_CNT(v113);
                goto LABEL_189;
              }
              v39 = prclDest[0];
              v46 = v104;
              v45 = v116;
              v43 = pco;
            }
            else
            {
              p_rclBounds = a8;
            }
            LODWORD(v109) = 1;
            if ( iDComplexity )
            {
              v105 = 0;
              v77 = 0LL;
              p_rclBounds = &v43->rclBounds;
              if ( iDComplexity != 1 )
                v77 = v43;
              pco = v77;
            }
            v48 = *((_QWORD *)v45 + 7);
            right = p_rclBounds->right;
            left = p_rclBounds->left;
            if ( right <= p_rclBounds->left )
            {
              right = p_rclBounds->left;
              left = p_rclBounds->right;
            }
            v51 = 0;
            if ( left >= 0 )
              v51 = left;
            if ( right > (int)v48 )
              right = v48;
            v52 = right - v51;
            if ( right - v51 > 0 )
            {
              top = p_rclBounds->top;
              LODWORD(prclDest[4]) = v51;
              bottom = p_rclBounds->bottom;
              DWORD2(prclDest[4]) = right;
              v55 = bottom;
              if ( bottom <= top )
              {
                v55 = top;
                top = bottom;
              }
              v56 = 0;
              if ( top >= 0 )
                v56 = top;
              v57 = HIDWORD(v48);
              if ( v55 <= (int)v57 )
                LODWORD(v57) = v55;
              v58 = v57 - v56;
              if ( (int)v57 - v56 > 0 )
              {
                HIDWORD(prclDest[4]) = v57;
                DWORD1(prclDest[4]) = v56;
                v59 = *((_DWORD *)v116 + 28) & 0x40000;
                LOWORD(prclDest[0]) = v39 | 0x10;
                v142[2] = v58;
                v144 = v59;
                v142[3] = 0;
                v145 = 0;
                v142[1] = v52;
                v143 = 0LL;
                v142[0] = v46;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v130,
                       (struct _DEVBITMAPINFO *)v142,
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
                  v60 = v130;
                  goto LABEL_56;
                }
                v22 = -1;
              }
            }
            v19 = v22;
            goto LABEL_92;
          }
          if ( (unsigned int)bIsSourceBGRA(v109) )
          {
            v38 = 512;
            v89 = 4;
            goto LABEL_152;
          }
LABEL_112:
          v19 = -1;
          goto LABEL_93;
        }
LABEL_143:
        v19 = -1;
        goto LABEL_94;
      }
      v79 = a1->sizlBitmap.cx;
      v31 = 0;
      v20 = ((v79 + 31) >> 3) & 0xFFFFFFFC;
    }
    v106 = 1;
    v104 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
