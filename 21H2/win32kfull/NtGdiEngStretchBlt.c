/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C0128AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C012912C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0129220 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012B268 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  unsigned int v13; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v16; // rsi
  SURFOBJ *v17; // r13
  SURFOBJ *v18; // r12
  __int128 *v19; // r14
  struct _XLATEOBJ *v20; // rdx
  struct _RECTL *v21; // r10
  unsigned int v22; // edi
  __int64 result; // rax
  struct _RECTL *v24; // rdx
  int pca; // [rsp+28h] [rbp-1F0h]
  SURFOBJ *psoMaska; // [rsp+60h] [rbp-1B8h]
  unsigned int v28[2]; // [rsp+68h] [rbp-1B0h] BYREF
  struct _CLIPOBJ *v29; // [rsp+70h] [rbp-1A8h] BYREF
  RECTL *prclSrc; // [rsp+78h] [rbp-1A0h] BYREF
  RECTL *prclDest; // [rsp+80h] [rbp-198h] BYREF
  COLORADJUSTMENT *v32; // [rsp+88h] [rbp-190h]
  POINTL *pptlMask; // [rsp+90h] [rbp-188h] BYREF
  CLIPOBJ *pco; // [rsp+98h] [rbp-180h]
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-178h]
  POINTL *pptlHTOrg; // [rsp+A8h] [rbp-170h] BYREF
  struct _POINTL v37; // [rsp+B0h] [rbp-168h] BYREF
  struct _POINTL v38; // [rsp+B8h] [rbp-160h] BYREF
  struct UMPDOBJ *v39; // [rsp+C0h] [rbp-158h]
  _QWORD v40[8]; // [rsp+D0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+110h] [rbp-108h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+150h] [rbp-C8h] BYREF
  struct _RECTL v43; // [rsp+190h] [rbp-88h] BYREF
  __int128 v44; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp-68h]
  struct _RECTL v46; // [rsp+1B8h] [rbp-60h] BYREF
  struct _RECTL v47; // [rsp+1C8h] [rbp-50h] BYREF

  v29 = a4;
  pxlo = (XLATEOBJ *)a4;
  *(_QWORD *)v28 = a5;
  v32 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v46 = 0LL;
  v47 = 0LL;
  v13 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  v39 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v40, a3, v16);
    v17 = psoDest[0];
    *(SURFOBJ **)&v43.left = psoDest[0];
    v18 = psoSrc[0];
    pco = (CLIPOBJ *)psoSrc[0];
    psoMaska = (SURFOBJ *)v40[0];
    if ( a7 || iMode != 4 )
    {
      if ( !psoDest[0] || !psoSrc[0] || !prclDest || !prclSrc )
      {
        v22 = 0;
LABEL_17:
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v40);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
        result = v22;
LABEL_18:
        --*((_DWORD *)v16 + 105);
        return result;
      }
      CaptureRECTL(&prclDest, &v46);
      CapturePOINTL(&pptlMask, &v37);
      CaptureRECTL(&prclSrc, &v47);
      v19 = (__int128 *)v32;
      if ( v32 )
      {
        if ( (unsigned __int64)v32 >= MmUserProbeAddress )
          v19 = (__int128 *)MmUserProbeAddress;
        v44 = *v19;
        v45 = *((_QWORD *)v19 + 2);
        v19 = &v44;
        v32 = (COLORADJUSTMENT *)&v44;
      }
      CapturePOINTL(&pptlHTOrg, &v38);
      if ( (unsigned int)bCheckDestSurfaceOverlap(v17, prclDest) )
      {
        pco = UMPDOBJ::GetDDIOBJ(v16, v29, &v17->sizlBitmap);
        pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, *(_QWORD *)v28);
        if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(v18, v20) )
        {
          v22 = 1;
          if ( psoMaska )
          {
            v43 = 0LL;
            LODWORD(v29) = 0;
            v28[0] = 0;
            v22 = bCheckSurfaceRectSize(v18, v21, 0LL, (unsigned int *)&v29, v28, pca);
            if ( v22 )
            {
              v24 = pRect(pptlMask, &v43, (unsigned int)v29, v28[0]);
              v22 = psoMaska->iBitmapFormat == 1;
              if ( psoMaska->iBitmapFormat == 1 )
                v22 = bCheckSurfaceRect(psoMaska, v24, 0LL);
            }
          }
        }
        else
        {
          v22 = 0;
        }
        if ( v22 )
          v22 = EngStretchBlt(
                  v17,
                  v18,
                  psoMaska,
                  pco,
                  pxlo,
                  (COLORADJUSTMENT *)v19,
                  pptlHTOrg,
                  prclDest,
                  prclSrc,
                  pptlMask,
                  iMode);
        goto LABEL_17;
      }
      v13 = 1;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v40);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    result = v13;
    goto LABEL_18;
  }
  return 0LL;
}
