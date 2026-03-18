/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02B20C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012B268 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v14; // rsi
  SURFOBJ *v16; // r13
  __int128 *pca; // r14
  struct tagSIZE *v18; // r11
  __int64 v19; // r15
  struct _XLATEOBJ *v20; // rax
  int v21; // edx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // r9
  unsigned int v24; // edi
  SURFOBJ *v25; // r10
  struct _RECTL *v26; // rax
  struct _SURFOBJ *v28; // [rsp+60h] [rbp-1C8h]
  unsigned int v29; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-1BCh] BYREF
  SURFOBJ *psoMsk; // [rsp+70h] [rbp-1B8h]
  SURFOBJ *psoTrg; // [rsp+78h] [rbp-1B0h]
  COLORADJUSTMENT *v33; // [rsp+80h] [rbp-1A8h]
  POINTL *pptl; // [rsp+88h] [rbp-1A0h] BYREF
  CLIPOBJ *pco; // [rsp+90h] [rbp-198h]
  RECTL *v36; // [rsp+98h] [rbp-190h] BYREF
  POINTL pptlBrushOrg; // [rsp+A0h] [rbp-188h] BYREF
  struct _POINTL v38; // [rsp+A8h] [rbp-180h] BYREF
  struct _POINTL *v39; // [rsp+B0h] [rbp-178h] BYREF
  struct _CLIPOBJ *v40; // [rsp+B8h] [rbp-170h]
  CLIPOBJ *v41; // [rsp+C0h] [rbp-168h]
  struct UMPDOBJ *v42; // [rsp+C8h] [rbp-160h]
  struct _CLIPOBJ *v43; // [rsp+D0h] [rbp-158h]
  _QWORD v44[8]; // [rsp+E0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-108h] BYREF
  _QWORD v46[8]; // [rsp+160h] [rbp-C8h] BYREF
  __int128 v47; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v48; // [rsp+1B0h] [rbp-78h]
  struct _RECTL v49; // [rsp+1B8h] [rbp-70h] BYREF
  struct _RECTL v50; // [rsp+1C8h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+1D8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+1E8h] [rbp-40h]

  v40 = a4;
  psoTrg = a2;
  v43 = a4;
  v41 = a5;
  pco = a5;
  v33 = a6;
  v39 = a7;
  v36 = a9;
  pptl = a10;
  v49 = 0LL;
  v38 = 0LL;
  pptlBrushOrg = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (__int64)ThreadCurrentObj;
  v42 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v46, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, psoTrg, (struct _SURFOBJ **)v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v44, a3, (struct _SURFOBJ **)v14);
  psoTrg = (SURFOBJ *)v46[0];
  v16 = psoSrc[0];
  psoMsk = (SURFOBJ *)v44[0];
  if ( v46[0] && psoSrc[0] && a9 && a8 )
  {
    CaptureRECTL(&v36, &v49);
    pca = (__int128 *)v33;
    if ( v33 )
    {
      if ( (unsigned __int64)v33 >= MmUserProbeAddress )
        pca = (__int128 *)MmUserProbeAddress;
      v47 = *pca;
      v48 = *((_QWORD *)pca + 2);
      pca = &v47;
      v33 = (COLORADJUSTMENT *)&v47;
    }
    CapturePOINTL(&pptl, &v38);
    CapturePOINTL(&v39, &pptlBrushOrg);
    if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
    v52 = *(_QWORD *)(a8 + 16);
    v19 = (__int64)v41;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, v40, v18 + 4);
    v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, v19);
    v28 = (struct _SURFOBJ *)v20;
    v21 = 1;
    prcl = v36;
    if ( v36 && (v36->left > v36->right || v36->top > v36->bottom) )
      v21 = 0;
    if ( v21 && (unsigned int)bCheckXlate(v16, v20) )
    {
      v24 = 1;
      v25 = psoMsk;
      if ( !psoMsk )
        goto LABEL_27;
      v50 = 0LL;
      v30 = 0;
      v29 = 0;
      v24 = bCheckSurfaceRectSize(v16, prcl, 0LL, &v30, &v29);
      if ( v24 )
      {
        v26 = pRect(pptl, &v50, v30, v29);
        v25 = psoMsk;
        v24 = psoMsk->iBitmapFormat == 1;
        if ( psoMsk->iBitmapFormat != 1 )
        {
LABEL_26:
          pxlo = (XLATEOBJ *)v28;
LABEL_27:
          if ( v24 )
            v24 = EngPlgBlt(
                    psoTrg,
                    v16,
                    v25,
                    pco,
                    pxlo,
                    (COLORADJUSTMENT *)pca,
                    &pptlBrushOrg,
                    pptfx,
                    prcl,
                    pptl,
                    iMode);
          goto LABEL_30;
        }
        v24 = bCheckSurfaceRect(psoMsk, v26, 0LL);
      }
      v25 = psoMsk;
      goto LABEL_26;
    }
  }
  v24 = 0;
LABEL_30:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
  --*(_DWORD *)(v14 + 420);
  return v24;
}
