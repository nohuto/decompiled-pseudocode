/*
 * XREFs of NtGdiEngBitBlt @ 0x1C013BA90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C00CB5E0 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C588 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D9F4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013DC70 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013DDC8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013DDE0 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v15; // r12
  SURFOBJ *v16; // r15
  struct _BRUSHOBJ *pbo; // rsi
  char v18; // al
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  struct _RECTL *v21; // r11
  POINTL *pptlMask; // r14
  struct _CLIPOBJ *v23; // r8
  int v24; // ecx
  unsigned int v25; // r14d
  int prclTrg; // [rsp+28h] [rbp-210h]
  unsigned int v28[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v29[2]; // [rsp+68h] [rbp-1D0h] BYREF
  SURFOBJ *psoTrg; // [rsp+70h] [rbp-1C8h]
  struct _RECTL *v31; // [rsp+78h] [rbp-1C0h]
  POINTL *pptlSrc; // [rsp+80h] [rbp-1B8h] BYREF
  RECTL *v33; // [rsp+88h] [rbp-1B0h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-1A8h]
  POINTL *v35; // [rsp+98h] [rbp-1A0h] BYREF
  POINTL *pptlBrush; // [rsp+A0h] [rbp-198h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-190h]
  struct _BRUSHOBJ *v38; // [rsp+B0h] [rbp-188h]
  __int64 v39; // [rsp+B8h] [rbp-180h]
  struct _POINTL v40; // [rsp+C0h] [rbp-178h] BYREF
  struct _POINTL v41; // [rsp+C8h] [rbp-170h] BYREF
  struct _POINTL v42; // [rsp+D0h] [rbp-168h] BYREF
  struct _CLIPOBJ *v43; // [rsp+D8h] [rbp-160h]
  struct _BRUSHOBJ v44; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+100h] [rbp-138h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v47[8]; // [rsp+180h] [rbp-B8h] BYREF
  struct _RECTL v48; // [rsp+1C0h] [rbp-78h] BYREF
  struct _RECTL v49; // [rsp+1D0h] [rbp-68h] BYREF
  struct _RECTL v50; // [rsp+1E0h] [rbp-58h] BYREF

  v43 = a4;
  pxlo = a3;
  pco = a4;
  v39 = a5;
  v33 = a6;
  pptlSrc = a7;
  v35 = a8;
  v38 = a9;
  pptlBrush = a10;
  LODWORD(v31) = rop4;
  v50 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(&v44, 0, sizeof(v44));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  *(_QWORD *)v29 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v47, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, (struct _SURFOBJ *)pxlo, ThreadCurrentObj);
  psoTrg = (SURFOBJ *)v47[0];
  v15 = psoSrc[0];
  *(SURFOBJ **)&v48.left = psoSrc[0];
  v16 = psoMask[0];
  *(SURFOBJ **)&v49.left = psoMask[0];
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a9);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v38, &v44);
  *(_QWORD *)v28 = pbo;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, v39);
  if ( (rop4 & 0xFFFF0000) != 0
    || !v33
    || (v18 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v18 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v18 & 0xD4) != 0 && (!pptlSrc || !v15)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v16 && (!pbo || pbo->iSolidColor != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  if ( !psoTrg )
    goto LABEL_37;
  CaptureRECTL(&v33, &v50);
  CapturePOINTL(&pptlSrc, &v40);
  CapturePOINTL(&v35, &v41);
  CapturePOINTL(&pptlBrush, &v42);
  v29[0] = 0;
  v28[0] = 0;
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v43, &psoTrg->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(psoTrg, v33, pco, v29, v28, prclTrg)
    || !(unsigned int)bCheckXlate(v15, pxlo) )
  {
    goto LABEL_37;
  }
  v49 = 0LL;
  v48 = 0LL;
  v19 = v28[0];
  v20 = v29[0];
  v21 = v15 ? pRect(pptlSrc, &v49, v29[0], v28[0]) : 0LL;
  pptlMask = v35;
  v31 = v16 ? pRect(v35, &v48, v20, v19) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(v15, v21, 0LL) )
    goto LABEL_37;
  v24 = (_DWORD)v23 + 1;
  if ( v16 )
  {
    v24 = v16->iBitmapFormat == 1;
    if ( v16->iBitmapFormat == 1 )
      v24 = bCheckSurfaceRect(v16, v31, v23);
  }
  if ( v24 )
    v25 = EngBitBlt(psoTrg, v15, v16, pco, pxlo, v33, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  else
LABEL_37:
    v25 = 0;
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v25;
}
