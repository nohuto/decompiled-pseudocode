/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02B2CF0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E342 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C014F30A (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027C3EC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C028290C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02B121C (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02B5568 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffStretchBlt @ 0x1C02EA90C (OffStretchBlt.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  RECTL *prclSrc; // rsi
  struct _SURFOBJ *v13; // r14
  struct _RECTL *v14; // r12
  struct _SURFOBJ *v15; // r15
  RECTL v16; // xmm0
  HDEV hdev; // rbx
  LONG right; // eax
  __int64 *v19; // r8
  _DWORD *v20; // r9
  int v21; // r10d
  int v22; // eax
  __m128i v23; // xmm0
  int v24; // edx
  __int32 v25; // ebx
  __int32 v26; // ecx
  int v27; // r14d
  LONG v28; // eax
  LONG v29; // ecx
  LONG v30; // edx
  LONG left; // r9d
  LONG v32; // r8d
  LONG v33; // r10d
  LONG top; // eax
  Gre::Base *bottom; // rcx
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  BOOL v37; // ebx
  int Surface; // eax
  int v39; // r14d
  int v40; // ebx
  int Source; // eax
  SURFOBJ *v42; // r8
  XLATEOBJ *v43; // r14
  PVOID *v44; // rdx
  int v45; // esi
  HDEV pulXlate; // rbx
  Gre::Base *v47; // rcx
  struct Gre::Base::SESSION_GLOBALS *v48; // r11
  __int64 v49; // rdx
  struct PALETTE *v50; // rax
  int v51; // r8d
  FLONG flXlate; // r12d
  int v53; // r9d
  ULONG iUniq; // r10d
  __int64 v55; // rax
  ULONG *v56; // r11
  ULONG v57; // r14d
  int inited; // eax
  int v59; // r11d
  struct _CLIPOBJ *v60; // r10
  BOOL (__stdcall *v61)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  RECTL *v62; // rcx
  int v63; // edx
  int v64; // eax
  int v66; // [rsp+70h] [rbp-90h]
  PVOID *p_pvScan0; // [rsp+78h] [rbp-88h]
  int v68[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  char v71; // [rsp+98h] [rbp-68h]
  int v72; // [rsp+9Ch] [rbp-64h]
  struct _RECTL *v73; // [rsp+A0h] [rbp-60h]
  CLIPOBJ *pco; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v75; // [rsp+B0h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v76; // [rsp+B8h] [rbp-48h]
  POINTL *pptlMask; // [rsp+C0h] [rbp-40h]
  POINTL *pptlHTOrg; // [rsp+C8h] [rbp-38h]
  COLORADJUSTMENT *pca; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoMask; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h] BYREF
  char v82; // [rsp+E8h] [rbp-18h]
  int v83; // [rsp+ECh] [rbp-14h]
  _DWORD v84[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  _BYTE v88[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v89; // [rsp+138h] [rbp+38h]
  char v90; // [rsp+140h] [rbp+40h]
  int v91; // [rsp+144h] [rbp+44h]
  SURFOBJ *psoSrc; // [rsp+168h] [rbp+68h]
  RECTL *v93; // [rsp+170h] [rbp+70h]
  _BYTE v94[56]; // [rsp+180h] [rbp+80h] BYREF
  struct _DISPSURF *v95; // [rsp+1B8h] [rbp+B8h]
  int v96[2]; // [rsp+1C0h] [rbp+C0h]
  struct _CLIPOBJ *v97; // [rsp+1C8h] [rbp+C8h]
  int v98[4]; // [rsp+1D0h] [rbp+D0h]
  RECTL prclDest; // [rsp+1E0h] [rbp+E0h] BYREF
  RECTL v100; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v101; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v102[40]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v103; // [rsp+238h] [rbp+138h]
  char v104; // [rsp+240h] [rbp+140h]
  int v105; // [rsp+244h] [rbp+144h]
  __int64 v106; // [rsp+248h] [rbp+148h]
  __int64 v107; // [rsp+260h] [rbp+160h]
  SURFOBJ *psoDest; // [rsp+268h] [rbp+168h]
  RECTL *v109; // [rsp+270h] [rbp+170h]
  int v110; // [rsp+290h] [rbp+190h]
  __int64 v111; // [rsp+2A0h] [rbp+1A0h]
  int v112; // [rsp+2A8h] [rbp+1A8h]

  v11 = 0;
  prclSrc = a9;
  v13 = a1;
  v14 = a8;
  v15 = a2;
  pca = a6;
  v16 = *a9;
  v69 = a1;
  hdev = a2->hdev;
  pptlHTOrg = a7;
  v100 = v16;
  pco = a4;
  psoMask = a3;
  v73 = a8;
  pptlMask = a10;
  v81 = 0LL;
  v82 = 0;
  v83 = 0;
  p_pvScan0 = &a2[-1].pvScan0;
  v76 = Gre::Base::Globals((Gre::Base *)&a2[-1].pvScan0);
  if ( v15->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    right = a8->right;
    v101 = 0LL;
    v70 = 0LL;
    v71 = 0;
    v72 = 0;
    if ( (a8->left >= right || a8->top >= a8->bottom) && !IsMetaRedirectionBitmap(v13) )
    {
      v22 = v20[14];
      v23 = *(__m128i *)prclSrc;
      v84[3] = 0;
      v87 = 0;
      prclDest = (RECTL)v23;
      v24 = v23.m128i_i32[2];
      v25 = v23.m128i_i32[1];
      v26 = v23.m128i_i32[3];
      v27 = _mm_cvtsi128_si32(v23);
      if ( v27 < 0 )
        v27 = 0;
      if ( v23.m128i_i32[2] > v22 )
        v24 = v22;
      if ( v23.m128i_i32[1] < 0 )
        v25 = 0;
      if ( v23.m128i_i32[3] > v20[15] )
        v26 = v20[15];
      if ( v24 <= v27 || v26 <= v25 )
      {
        SURFMEM::~SURFMEM((SURFMEM *)&v70);
        goto LABEL_6;
      }
      v84[1] = v24 - v27;
      v84[2] = v26 - v25;
      if ( v19 )
        v85 = *v19;
      else
        v85 = 0LL;
      v84[0] = v20[24];
      v86 = v20[28] & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v70, (struct _DEVBITMAPINFO *)v84, 0LL, 0LL, 0, 0LL, 0LL, 0, v21, 0, 0);
      if ( !v70 )
        goto LABEL_35;
      v28 = v100.left - v27;
      v29 = v100.right - v27;
      v30 = v100.top - v25;
      left = a8->left;
      v32 = v100.bottom - v25;
      v33 = a8->right;
      v100.left -= v27;
      v100.right -= v27;
      v100.top -= v25;
      v100.bottom -= v25;
      if ( left < v33 )
      {
        LODWORD(v101) = left;
        DWORD2(v101) = v33;
        prclDest.left = v28;
        prclDest.right = v29;
      }
      else
      {
        LODWORD(v101) = v33;
        DWORD2(v101) = left;
        prclDest.left = v29;
        prclDest.right = v28;
      }
      top = a8->top;
      bottom = (Gre::Base *)(unsigned int)a8->bottom;
      if ( top < (int)bottom )
      {
        DWORD1(v101) = a8->top;
        HIDWORD(v101) = (_DWORD)bottom;
        prclDest.top = v30;
        prclDest.bottom = v32;
      }
      else
      {
        DWORD1(v101) = a8->bottom;
        HIDWORD(v101) = top;
        prclDest.top = v32;
        prclDest.bottom = v30;
      }
      v36 = Gre::Base::Globals(bottom);
      if ( !EngStretchBlt(
              (SURFOBJ *)((v70 + 24) & -(__int64)(v70 != 0)),
              v15,
              0LL,
              0LL,
              (XLATEOBJ *)((char *)v36 + 6896),
              0LL,
              0LL,
              &prclDest,
              prclSrc,
              0LL,
              3u) )
      {
LABEL_35:
        SURFMEM::~SURFMEM((SURFMEM *)&v70);
        goto LABEL_99;
      }
      v14 = (struct _RECTL *)&v101;
      v13 = v69;
      prclSrc = &v100;
      v73 = (struct _RECTL *)&v101;
      v15 = (struct _SURFOBJ *)((v70 + 24) & -(__int64)(v70 != 0));
      p_pvScan0 = &v15[-1].pvScan0;
    }
    v66 = 1;
    v37 = IsMetaDevBitmapForMirroring(v13);
    Surface = MSURF::bFindSurface((MSURF *)v94, v13, pco, v14);
    v89 = 0LL;
    v90 = 0;
    v91 = 0;
    v39 = Surface;
    MULTISURF::vInit((MULTISURF *)v88, v15, prclSrc);
    if ( v37 )
    {
      v103 = 0LL;
      v104 = 0;
      v105 = 0;
      MULTISURF::vInit((MULTISURF *)v102, v69, v14);
      v66 = EngStretchBlt(psoDest, psoSrc, psoMask, pco, pxlo, pca, pptlHTOrg, v109, v93, pptlMask, iMode);
      v40 = v66;
      MULTISURF::~MULTISURF((MULTISURF *)v102);
    }
    else
    {
      v40 = 1;
    }
    if ( !v39 )
    {
LABEL_98:
      MULTISURF::~MULTISURF((MULTISURF *)v88);
      SURFMEM::~SURFMEM((SURFMEM *)&v70);
      v11 = v40;
      goto LABEL_99;
    }
    while ( 1 )
    {
      *(_QWORD *)v68 = *(_QWORD *)v96;
      v75 = 0LL;
      Source = MULTISURF::bLoadSource((MULTISURF *)v88, (HDEV *)v95);
      v42 = psoSrc;
      v43 = pxlo;
      if ( !Source )
      {
LABEL_40:
        v44 = p_pvScan0;
        v45 = 1;
        goto LABEL_68;
      }
      v44 = &psoSrc[-1].pvScan0;
      pulXlate = psoSrc[1].hdev;
      v45 = 0;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      if ( *((_DWORD *)v95 + 6) )
        break;
LABEL_68:
      if ( !v45 )
      {
        v59 = v96[0];
        v60 = v97;
        v107 = 0LL;
        LODWORD(psoDest) = 0;
        v110 = 1;
        v111 = 0LL;
        v106 = 0LL;
        v112 = 0;
        if ( (*(_DWORD *)(*(_QWORD *)v96 + 88LL) & 2) != 0 )
          v61 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v95 + 7) + 2824LL);
        else
          v61 = EngStretchBlt;
        if ( v42->iType == 1 && v44[6] != *(PVOID *)(*(_QWORD *)v68 + 24LL) )
          v61 = EngStretchBlt;
        if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v68 + 24LL) + 1792LL) & 0x10) == 0 )
          v61 = EngStretchBlt;
        v62 = v93;
        if ( v93->left >= 0 && v93->top >= 0 && v93->right <= v42->sizlBitmap.cx && v93->bottom <= v42->sizlBitmap.cy )
        {
          if ( v61 == EngStretchBlt )
            goto LABEL_85;
          goto LABEL_92;
        }
        v61 = EngStretchBlt;
LABEL_85:
        if ( iMode == 4 && pco && pco->iDComplexity )
        {
          v63 = v98[0];
          if ( **(_DWORD **)v98 || *(_DWORD *)(*(_QWORD *)v98 + 4LL) )
          {
            v45 = 1;
            ECLIPOBJTMPIFNEEDED::vSetup(
              (ECLIPOBJTMPIFNEEDED *)v102,
              1,
              *(struct REGION **)&v97[2].rclBounds.top,
              (struct ERECTL *)&v97->rclBounds,
              1);
            if ( v106 )
            {
              v59 = v96[0];
              v60 = (struct _CLIPOBJ *)v102;
              v62 = v93;
              v45 = 0;
              v42 = psoSrc;
              goto LABEL_92;
            }
LABEL_94:
            ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v102);
            goto LABEL_95;
          }
        }
        else
        {
LABEL_92:
          v63 = v98[0];
        }
        *(_QWORD *)v68 = 0LL;
        v66 &= OffStretchBlt(
                 (int)v61,
                 v63,
                 v59,
                 (int)v68,
                 (__int64)v42,
                 (__int64)psoMask,
                 v60,
                 (__int64)v43,
                 (__int64)pca,
                 (__int64)pptlHTOrg,
                 (__int64)v14,
                 (__int64)v62,
                 (__int64)pptlMask,
                 iMode);
        goto LABEL_94;
      }
LABEL_95:
      v64 = 0;
      if ( !v45 )
        v64 = v66;
      v40 = v64;
      v66 = v64;
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v75);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v94) )
        goto LABEL_98;
    }
    v47 = (Gre::Base *)*((_QWORD *)v95 + 6);
    v48 = v76;
    v49 = *((_QWORD *)v76 + 750);
    if ( (*((_DWORD *)v47 + 535) & 0x100) != 0 )
    {
      v50 = DrvRealizeHalftonePalette(v47, 0);
      v42 = psoSrc;
      v49 = (__int64)v50;
      v48 = v76;
    }
    if ( !pulXlate )
    {
      if ( !pxlo )
        goto LABEL_53;
      if ( pxlo[1].pulXlate )
      {
        pulXlate = (HDEV)pxlo[1].pulXlate;
        v51 = 0;
        goto LABEL_56;
      }
      if ( (pxlo->flXlate & 1) != 0 )
      {
LABEL_53:
        if ( v42 == v15 )
          pulXlate = v69[1].hdev;
      }
      else
      {
        v49 = *(_QWORD *)&pxlo[2].iSrcType;
        if ( !v49 )
          goto LABEL_40;
        if ( *((_DWORD *)p_pvScan0 + 24) == v69->iBitmapFormat )
          pulXlate = v69[1].hdev;
      }
    }
    v51 = 0;
    if ( !pulXlate )
    {
LABEL_59:
      v45 = 0;
      if ( pxlo )
      {
        flXlate = pxlo[1].flXlate;
        v53 = *(_DWORD *)&pxlo[1].iSrcType;
        iUniq = pxlo[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v53 = 0;
        iUniq = 0;
      }
      v55 = *((_QWORD *)v48 + 750);
      if ( pxlo )
      {
        v56 = pxlo[2].pulXlate;
        v57 = pxlo[3].iUniq;
      }
      else
      {
        v56 = 0LL;
        v57 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v75,
                 (__int64)v56,
                 v57,
                 (__int64)pulXlate,
                 *(_QWORD *)(*(_QWORD *)v68 + 104LL),
                 v55,
                 v49,
                 flXlate,
                 v53,
                 iUniq,
                 v51);
      v42 = psoSrc;
      v14 = v73;
      v44 = p_pvScan0;
      if ( inited )
      {
        v43 = v75;
      }
      else
      {
        v45 = 1;
        v43 = pxlo;
      }
      goto LABEL_68;
    }
LABEL_56:
    if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
    {
      v51 = 0x2000;
      if ( v49 != *((_QWORD *)v48 + 750) )
        v51 = 0x4000;
    }
    goto LABEL_59;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(v15, (struct SURFMEM *)&v81, &v100) )
  {
    if ( !v81 )
    {
LABEL_6:
      v11 = 1;
      goto LABEL_99;
    }
    prclSrc = &v100;
    v15 = (struct _SURFOBJ *)((v81 + 24) & -(__int64)(v81 != 0));
    p_pvScan0 = &v15[-1].pvScan0;
    goto LABEL_8;
  }
LABEL_99:
  SURFMEM::~SURFMEM((SURFMEM *)&v81);
  return v11;
}
