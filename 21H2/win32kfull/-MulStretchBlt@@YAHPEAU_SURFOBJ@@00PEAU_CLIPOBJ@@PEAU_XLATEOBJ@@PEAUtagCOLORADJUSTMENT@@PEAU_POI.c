/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A2140
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffStretchBlt @ 0x1C00D72BC (OffStretchBlt.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01564F0 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015660C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FEA0 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  RECTL *prclSrc; // rsi
  struct _SURFOBJ *v13; // r13
  struct _SURFOBJ *v14; // r15
  struct _RECTL *v15; // r12
  struct _RECTL v16; // xmm0
  HDEV hdev; // rax
  LONG right; // eax
  __int64 *v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // r10d
  int v22; // eax
  __m128i v23; // xmm0
  int v24; // edx
  __int32 v25; // ebx
  __int32 v26; // ecx
  int v27; // r15d
  LONG v28; // eax
  LONG v29; // ecx
  LONG v30; // edx
  LONG left; // r9d
  LONG v32; // r8d
  LONG v33; // r10d
  LONG top; // eax
  LONG bottom; // ecx
  BOOL v36; // ebx
  int Surface; // eax
  int v38; // r15d
  int v39; // ebx
  int Source; // eax
  SURFOBJ *v41; // rdx
  XLATEOBJ *v42; // r15
  int v43; // esi
  PVOID *v44; // r9
  HDEV pulXlate; // rbx
  __int64 v46; // rcx
  struct PALETTE *v47; // r8
  struct PALETTE *v48; // rax
  int v49; // edx
  int v50; // r9d
  ULONG iUniq; // r10d
  ULONG *v52; // r11
  ULONG v53; // r15d
  int inited; // eax
  __int64 v55; // r9
  struct _CLIPOBJ *v56; // r8
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  int v58; // r11d
  RECTL *v59; // rcx
  LONG *v60; // rax
  int v61; // eax
  int v63; // [rsp+70h] [rbp-90h]
  FLONG flXlate; // [rsp+74h] [rbp-8Ch]
  PVOID *p_pvScan0; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  XLATEOBJ *v69; // [rsp+98h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  char v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+ACh] [rbp-54h]
  POINTL *pptlMask; // [rsp+B0h] [rbp-50h]
  POINTL *pptlHTOrg; // [rsp+B8h] [rbp-48h]
  COLORADJUSTMENT *pca; // [rsp+C0h] [rbp-40h]
  SURFOBJ *psoMask; // [rsp+C8h] [rbp-38h]
  char *v77; // [rsp+D0h] [rbp-30h] BYREF
  char v78; // [rsp+D8h] [rbp-28h]
  int v79; // [rsp+DCh] [rbp-24h]
  _DWORD v80[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  _BYTE v84[40]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v85; // [rsp+128h] [rbp+28h]
  char v86; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+134h] [rbp+34h]
  SURFOBJ *psoSrc; // [rsp+158h] [rbp+58h]
  RECTL *v89; // [rsp+160h] [rbp+60h]
  __int64 **v90[7]; // [rsp+170h] [rbp+70h] BYREF
  struct _DISPSURF *v91; // [rsp+1A8h] [rbp+A8h]
  int v92[2]; // [rsp+1B0h] [rbp+B0h]
  struct _CLIPOBJ *v93; // [rsp+1B8h] [rbp+B8h]
  int v94[2]; // [rsp+1C0h] [rbp+C0h]
  RECTL prclDest; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v96; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v97; // [rsp+1F0h] [rbp+F0h] BYREF
  REGION *v98[6]; // [rsp+200h] [rbp+100h] BYREF
  char v99; // [rsp+230h] [rbp+130h]
  int v100; // [rsp+234h] [rbp+134h]
  __int64 v101; // [rsp+238h] [rbp+138h]
  __int64 v102; // [rsp+250h] [rbp+150h]
  SURFOBJ *psoDest; // [rsp+258h] [rbp+158h]
  RECTL *v104; // [rsp+260h] [rbp+160h]
  int v105; // [rsp+280h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+190h]
  int v107; // [rsp+298h] [rbp+198h]

  v11 = 0;
  prclSrc = a9;
  v13 = a2;
  v14 = a1;
  v15 = a8;
  pca = a6;
  v16 = *a9;
  pptlHTOrg = a7;
  pptlMask = a10;
  hdev = a2->hdev;
  v96 = v16;
  psoMask = a3;
  v77 = 0LL;
  v78 = 0;
  v79 = 0;
  p_pvScan0 = &a2[-1].pvScan0;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v77, &v96) )
  {
    if ( !v77 )
    {
      v11 = 1;
      goto LABEL_98;
    }
    v13 = (struct _SURFOBJ *)(v77 + 24);
    p_pvScan0 = (PVOID *)v77;
    prclSrc = &v96;
LABEL_8:
    right = a8->right;
    v97 = 0LL;
    v70 = 0LL;
    v71 = 0;
    v72 = 0;
    if ( (a8->left >= right || a8->top >= a8->bottom) && !IsMetaRedirectionBitmap(v14) )
    {
      v22 = v20[14];
      v23 = *(__m128i *)prclSrc;
      v80[3] = 0;
      v83 = 0;
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
        v11 = v21;
        goto LABEL_97;
      }
      v80[1] = v24 - v27;
      v80[2] = v26 - v25;
      if ( v19 )
        v81 = *v19;
      else
        v81 = 0LL;
      v80[0] = v20[24];
      v82 = v20[28] & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v70, (struct _DEVBITMAPINFO *)v80, 0LL, 0LL, 0, 0LL, 0LL, 0, v21, 0, 0);
      if ( !v70 )
        goto LABEL_97;
      v28 = v96.left - v27;
      v29 = v96.right - v27;
      v30 = v96.top - v25;
      left = a8->left;
      v32 = v96.bottom - v25;
      v33 = a8->right;
      v96.left -= v27;
      v96.right -= v27;
      v96.top -= v25;
      v96.bottom -= v25;
      if ( left < v33 )
      {
        LODWORD(v97) = left;
        DWORD2(v97) = v33;
        prclDest.left = v28;
        prclDest.right = v29;
      }
      else
      {
        LODWORD(v97) = v33;
        DWORD2(v97) = left;
        prclDest.left = v29;
        prclDest.right = v28;
      }
      top = a8->top;
      bottom = a8->bottom;
      if ( top < bottom )
      {
        DWORD1(v97) = a8->top;
        HIDWORD(v97) = bottom;
        prclDest.top = v30;
        prclDest.bottom = v32;
      }
      else
      {
        DWORD1(v97) = a8->bottom;
        HIDWORD(v97) = top;
        prclDest.top = v32;
        prclDest.bottom = v30;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v70 + 24), v13, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_97;
      prclSrc = &v96;
      v14 = a1;
      v15 = (struct _RECTL *)&v97;
      v13 = (struct _SURFOBJ *)((v70 + 24) & -(__int64)(v70 != 0));
      p_pvScan0 = &v13[-1].pvScan0;
    }
    v63 = 1;
    v36 = IsMetaDevBitmapForMirroring(v14);
    Surface = MSURF::bFindSurface(v90, v14, a4, v15);
    v85 = 0LL;
    v86 = 0;
    v87 = 0;
    v38 = Surface;
    MULTISURF::vInit((MULTISURF *)v84, v13, prclSrc);
    if ( v36 )
    {
      v98[5] = 0LL;
      v99 = 0;
      v100 = 0;
      MULTISURF::vInit((MULTISURF *)v98, a1, v15);
      v63 = EngStretchBlt(psoDest, psoSrc, psoMask, a4, pxlo, pca, pptlHTOrg, v104, v89, pptlMask, iMode);
      v39 = v63;
      MULTISURF::~MULTISURF((MULTISURF *)v98);
    }
    else
    {
      v39 = 1;
    }
    if ( v38 )
    {
      while ( 1 )
      {
        v67 = *(_QWORD *)v92;
        v69 = 0LL;
        Source = MULTISURF::bLoadSource((MULTISURF *)v84, v91);
        v41 = psoSrc;
        v42 = pxlo;
        if ( !Source )
        {
LABEL_39:
          v43 = 1;
          goto LABEL_66;
        }
        v44 = &psoSrc[-1].pvScan0;
        pulXlate = psoSrc[1].hdev;
        v43 = 0;
        p_pvScan0 = &psoSrc[-1].pvScan0;
        if ( *((_DWORD *)v91 + 6) )
          break;
LABEL_66:
        if ( !v43 )
        {
          v55 = *(_QWORD *)v92;
          v56 = v93;
          v102 = 0LL;
          LODWORD(psoDest) = 0;
          v105 = 1;
          v106 = 0LL;
          v101 = 0LL;
          v107 = 0;
          if ( (*(_DWORD *)(*(_QWORD *)v92 + 88LL) & 2) != 0 )
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v91 + 7) + 2824LL);
          else
            v57 = EngStretchBlt;
          if ( v41->iType == 1 && p_pvScan0[6] != *(PVOID *)(v67 + 24) )
            v57 = EngStretchBlt;
          v58 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v67 + 24) + 1792LL) & 0x10) == 0 )
            v57 = EngStretchBlt;
          v59 = v89;
          if ( v89->left >= 0 && v89->top >= 0 && v89->right <= v41->sizlBitmap.cx && v89->bottom <= v41->sizlBitmap.cy )
          {
            if ( v57 == EngStretchBlt )
              goto LABEL_83;
            goto LABEL_90;
          }
          v57 = EngStretchBlt;
LABEL_83:
          if ( iMode == 4 && a4 && a4->iDComplexity )
          {
            v60 = *(LONG **)v94;
            if ( **(_DWORD **)v94 || *(_DWORD *)(*(_QWORD *)v94 + 4LL) )
            {
              v43 = 1;
              ECLIPOBJTMPIFNEEDED::vSetup(
                (ECLIPOBJTMPIFNEEDED *)v98,
                1,
                *(struct REGION **)&v93[2].rclBounds.top,
                (struct ERECTL *)&v93->rclBounds,
                1);
              if ( v101 )
              {
                v55 = *(_QWORD *)v92;
                v56 = (struct _CLIPOBJ *)v98;
                v59 = v89;
                v43 = 0;
                v41 = psoSrc;
                v58 = iMode;
                goto LABEL_90;
              }
LABEL_92:
              ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v98);
              goto LABEL_93;
            }
          }
          else
          {
LABEL_90:
            v60 = *(LONG **)v94;
          }
          v63 &= OffStretchBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int))v57,
                   v60,
                   v55,
                   v55,
                   (__int64)v41,
                   (__int64)psoMask,
                   v56,
                   (__int64)v42,
                   (__int64)pca,
                   (__int64 *)pptlHTOrg,
                   &v15->left,
                   v59,
                   (__int64)pptlMask,
                   v58);
          goto LABEL_92;
        }
LABEL_93:
        v61 = 0;
        if ( !v43 )
          v61 = v63;
        v39 = v61;
        v63 = v61;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v90) )
          goto LABEL_96;
      }
      v46 = *((_QWORD *)v91 + 6);
      v47 = ppalDefault;
      if ( (*(_DWORD *)(v46 + 2140) & 0x100) != 0 )
      {
        v48 = DrvRealizeHalftonePalette((_QWORD *)v46, 0);
        v41 = psoSrc;
        v47 = v48;
        v44 = p_pvScan0;
      }
      if ( !pulXlate )
      {
        if ( !pxlo )
          goto LABEL_51;
        if ( pxlo[1].pulXlate )
        {
          pulXlate = (HDEV)pxlo[1].pulXlate;
          goto LABEL_54;
        }
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_51:
          if ( v41 == v13 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v47 = *(struct PALETTE **)&pxlo[2].iSrcType;
          if ( !v47 )
            goto LABEL_39;
          if ( *((_DWORD *)v44 + 24) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
        }
      }
      v49 = 0;
      if ( !pulXlate )
      {
LABEL_57:
        if ( pxlo )
        {
          v50 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
          flXlate = pxlo[1].flXlate;
        }
        else
        {
          flXlate = 0;
          v50 = 0;
          iUniq = 0;
        }
        if ( pxlo )
        {
          v52 = pxlo[2].pulXlate;
          v53 = pxlo[3].iUniq;
        }
        else
        {
          v52 = 0LL;
          v53 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v69,
                   (__int64)v52,
                   v53,
                   (__int64)pulXlate,
                   *(_QWORD *)(v67 + 104),
                   (__int64)ppalDefault,
                   (__int64)v47,
                   flXlate,
                   v50,
                   iUniq,
                   v49);
        v41 = psoSrc;
        if ( inited )
        {
          v42 = v69;
        }
        else
        {
          v43 = 1;
          v42 = pxlo;
        }
        goto LABEL_66;
      }
LABEL_54:
      v49 = 0;
      if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
      {
        v49 = 0x4000;
        if ( v47 == ppalDefault )
          v49 = 0x2000;
      }
      goto LABEL_57;
    }
LABEL_96:
    v11 = v39;
    MULTISURF::~MULTISURF((MULTISURF *)v84);
LABEL_97:
    SURFMEM::~SURFMEM((SURFMEM *)&v70);
  }
LABEL_98:
  SURFMEM::~SURFMEM((SURFMEM *)&v77);
  return v11;
}
