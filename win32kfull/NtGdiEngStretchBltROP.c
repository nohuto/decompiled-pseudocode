/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02CD470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C0088860 (EngStretchBltROP.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C9400 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C954C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C97A0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C98DC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C9914 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C9940 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C99BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02C9BA8 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02CA010 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02CA0B0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02CA26C (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02CA410 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02CA474 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02CA6A4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD a13)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct _SURFOBJ **v17; // r13
  _DWORD *v18; // rdi
  struct _SURFOBJ *v19; // r14
  SURFOBJ *v20; // r15
  struct _SURFOBJ *v22; // r10
  struct _XLATEOBJ *v23; // r9
  DWORD v24; // esi
  int v25; // r12d
  int v26; // r14d
  DWORD rop4; // r12d
  SURFOBJ *v28; // rsi
  struct _RECTL *v29; // rax
  BRUSHOBJ *pbo; // rax
  struct _BRUSHOBJ *v31; // r9
  unsigned int v32; // esi
  DWORD v33; // [rsp+70h] [rbp-1F8h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-1F0h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-1E8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-1E0h] BYREF
  SURFOBJ *psoDest; // [rsp+90h] [rbp-1D8h]
  POINTL *pptlMask; // [rsp+98h] [rbp-1D0h] BYREF
  RECTL *prclDest; // [rsp+A0h] [rbp-1C8h] BYREF
  DWORD v40; // [rsp+A8h] [rbp-1C0h]
  struct _BRUSHOBJ *v41; // [rsp+B0h] [rbp-1B8h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-1B0h]
  XLATEOBJ *pxlo; // [rsp+C0h] [rbp-1A8h]
  struct _CLIPOBJ *v44; // [rsp+C8h] [rbp-1A0h]
  __int64 v45; // [rsp+D0h] [rbp-198h]
  POINTL *pptlHTOrg; // [rsp+D8h] [rbp-190h] BYREF
  COLORADJUSTMENT *pca; // [rsp+E0h] [rbp-188h] BYREF
  POINTL *v48; // [rsp+E8h] [rbp-180h]
  struct _POINTL v49; // [rsp+F0h] [rbp-178h] BYREF
  struct _POINTL v50; // [rsp+F8h] [rbp-170h] BYREF
  struct UMPDOBJ *v51; // [rsp+100h] [rbp-168h]
  struct _BRUSHOBJ v52; // [rsp+108h] [rbp-160h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-148h] BYREF
  struct _SURFOBJ *v54[8]; // [rsp+160h] [rbp-108h] BYREF
  _QWORD v55[8]; // [rsp+1A0h] [rbp-C8h] BYREF
  struct _RECTL v56; // [rsp+1E0h] [rbp-88h] BYREF
  struct _RECTL v57; // [rsp+1F0h] [rbp-78h] BYREF
  struct _RECTL v58; // [rsp+200h] [rbp-68h] BYREF
  struct tagCOLORADJUSTMENT v59; // [rsp+210h] [rbp-58h] BYREF

  v44 = a4;
  psoDest = a3;
  v48 = a7;
  pco = a4;
  v45 = a5;
  pca = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v41 = a12;
  v33 = a13;
  v34 = a13;
  v40 = a13;
  v57 = 0LL;
  v58 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(&v59, 0, sizeof(v59));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = (struct _SURFOBJ **)ThreadCurrentObj;
  v51 = ThreadCurrentObj;
  v18 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v18;
  pxlo = (XLATEOBJ *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v55, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a2, v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoDest, v17);
  psoDest = (SURFOBJ *)v55[0];
  v19 = v54[0];
  psoSrc = v54[0];
  v20 = psoMask[0];
  *(SURFOBJ **)&v56.left = psoMask[0];
  if ( !v48 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
    --*v18;
    return 0LL;
  }
  if ( !v55[0] || !v54[0] || !prclDest || !prclSrc )
    goto LABEL_37;
  CaptureRECTL(&prclDest, &v57);
  CaptureRECTL(&prclSrc, &v58);
  CapturePOINTL(&pptlMask, &v49);
  CapturePOINTL(&pptlHTOrg, &v50);
  CaptureCOLORADJUSTMENT(&pca, &v59);
  if ( !bCheckDestSurfaceOverlap(v22, prclDest) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
    --*v18;
    return 1LL;
  }
  memset(&v52, 0, sizeof(v52));
  pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v44, &psoDest->sizlBitmap);
  v23 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, v45);
  pxlo = v23;
  if ( (((gajRop3[(unsigned __int8)a13] | gajRop3[BYTE1(a13)]) & 0xD4) == 0 || bOrder(prclSrc))
    && (unsigned int)bCheckXlate(v19, v23)
    && ((v24 = a13 >> 8, v25 = (unsigned __int8)a13, (unsigned __int8)a13 == BYTE1(a13))
     || v20
     || (unsigned int)PROBEDISPATBRUSH(v41)) )
  {
    v26 = 1;
  }
  else
  {
    v26 = 0;
    v24 = v40 >> 8;
    v25 = (unsigned __int8)v40;
  }
  if ( v25 != (unsigned __int8)v24 && (!v20 || !pptlMask) )
    v26 = 0;
  rop4 = v33;
  if ( v26 && v33 == 43724 )
  {
    v28 = psoSrc;
    if ( v20 )
    {
      v56 = 0LL;
      v34 = 0;
      v33 = 0;
      v26 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v34, &v33);
      if ( v26 )
      {
        v29 = pRect(pptlMask, &v56, v34, v33);
        v26 = bCheckMask(v20, v29);
      }
    }
  }
  else
  {
    v28 = psoSrc;
  }
  pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v17, (__int64)v41);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v31, &v52);
  if ( v26
    && EngStretchBltROP(psoDest, v28, v20, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4) )
  {
    v32 = 1;
  }
  else
  {
LABEL_37:
    v32 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
  --*v18;
  return v32;
}
