/*
 * XREFs of NtGdiEngBitBlt @ 0x1C013B6A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C00CB280 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C0DC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D510 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013D588 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013D78C (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013D8E4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013D8FC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        XLATEOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v15; // rdi
  SURFOBJ *v16; // r12
  SURFOBJ *v17; // r15
  struct _BRUSHOBJ *pbo; // rsi
  char v19; // al
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  struct _RECTL *v22; // r11
  POINTL *pptlMask; // r14
  struct _CLIPOBJ *v24; // r8
  int v25; // ecx
  unsigned int v26; // r14d
  int prclTrg; // [rsp+28h] [rbp-210h]
  unsigned int v29[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v30[2]; // [rsp+68h] [rbp-1D0h] BYREF
  SURFOBJ *psoTrg; // [rsp+70h] [rbp-1C8h]
  struct _RECTL *v32; // [rsp+78h] [rbp-1C0h]
  POINTL *pptlSrc; // [rsp+80h] [rbp-1B8h] BYREF
  RECTL *v34; // [rsp+88h] [rbp-1B0h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-1A8h]
  POINTL *v36; // [rsp+98h] [rbp-1A0h] BYREF
  POINTL *pptlBrush; // [rsp+A0h] [rbp-198h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-190h]
  struct _BRUSHOBJ *v39; // [rsp+B0h] [rbp-188h]
  __int64 v40; // [rsp+B8h] [rbp-180h]
  struct _POINTL v41; // [rsp+C0h] [rbp-178h] BYREF
  struct _POINTL v42; // [rsp+C8h] [rbp-170h] BYREF
  struct _POINTL v43; // [rsp+D0h] [rbp-168h] BYREF
  struct _CLIPOBJ *v44; // [rsp+D8h] [rbp-160h]
  struct _BRUSHOBJ v45; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+100h] [rbp-138h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v48[8]; // [rsp+180h] [rbp-B8h] BYREF
  struct _RECTL v49; // [rsp+1C0h] [rbp-78h] BYREF
  struct _RECTL v50; // [rsp+1D0h] [rbp-68h] BYREF
  struct _RECTL v51; // [rsp+1E0h] [rbp-58h] BYREF

  v44 = a4;
  pxlo = a3;
  pco = a4;
  v40 = a5;
  v34 = a6;
  pptlSrc = a7;
  v36 = a8;
  v39 = a9;
  pptlBrush = a10;
  LODWORD(v32) = rop4;
  v51 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(&v45, 0, sizeof(v45));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  *(_QWORD *)v30 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v48, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, (struct _SURFOBJ *)pxlo, v15);
  psoTrg = (SURFOBJ *)v48[0];
  v16 = psoSrc[0];
  *(SURFOBJ **)&v49.left = psoSrc[0];
  v17 = psoMask[0];
  *(SURFOBJ **)&v50.left = psoMask[0];
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, a9);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v39, &v45);
  *(_QWORD *)v29 = pbo;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v15, v40);
  if ( (rop4 & 0xFFFF0000) != 0
    || !v34
    || (v19 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v19 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v19 & 0xD4) != 0 && (!pptlSrc || !v16)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v17 && (!pbo || pbo->iSolidColor != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
    --*((_DWORD *)v15 + 105);
    return 0LL;
  }
  if ( !psoTrg )
    goto LABEL_37;
  CaptureRECTL(&v34, &v51);
  CapturePOINTL(&pptlSrc, &v41);
  CapturePOINTL(&v36, &v42);
  CapturePOINTL(&pptlBrush, &v43);
  v30[0] = 0;
  v29[0] = 0;
  pco = UMPDOBJ::GetDDIOBJ(v15, v44, &psoTrg->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(psoTrg, v34, pco, v30, v29, prclTrg)
    || !(unsigned int)bCheckXlate(v16, pxlo) )
  {
    goto LABEL_37;
  }
  v50 = 0LL;
  v49 = 0LL;
  v20 = v29[0];
  v21 = v30[0];
  v22 = v16 ? pRect(pptlSrc, &v50, v30[0], v29[0]) : 0LL;
  pptlMask = v36;
  v32 = v17 ? pRect(v36, &v49, v21, v20) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(v16, v22, 0LL) )
    goto LABEL_37;
  v25 = (_DWORD)v24 + 1;
  if ( v17 )
  {
    v25 = v17->iBitmapFormat == 1;
    if ( v17->iBitmapFormat == 1 )
      v25 = bCheckSurfaceRect(v17, v32, v24);
  }
  if ( v25 )
    v26 = EngBitBlt(psoTrg, v16, v17, pco, pxlo, v34, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  else
LABEL_37:
    v26 = 0;
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
  --*((_DWORD *)v15 + 105);
  return v26;
}
