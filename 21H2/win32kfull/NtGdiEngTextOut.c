/*
 * XREFs of NtGdiEngTextOut @ 0x1C0128770
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0122C7C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0126D9C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C012ABD8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C012AD40 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C012AE8C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C015DA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v14; // r13
  FONTOBJ *v15; // r12
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v20; // r14d
  STROBJ *pstroa; // [rsp+60h] [rbp-138h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-130h] BYREF
  RECTL *prclOpaque; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-120h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-118h]
  struct _RECTL *v29; // [rsp+88h] [rbp-110h] BYREF
  struct _BRUSHOBJ *v30; // [rsp+90h] [rbp-108h]
  struct _POINTL v31; // [rsp+98h] [rbp-100h] BYREF
  struct _CLIPOBJ *v32; // [rsp+A0h] [rbp-F8h]
  struct UMPDOBJ *v33; // [rsp+A8h] [rbp-F0h]
  SURFOBJ *v34; // [rsp+B0h] [rbp-E8h]
  FONTOBJ *pfo; // [rsp+B8h] [rbp-E0h]
  struct _BRUSHOBJ v36; // [rsp+C0h] [rbp-D8h] BYREF
  struct _BRUSHOBJ v37; // [rsp+D8h] [rbp-C0h] BYREF
  SURFOBJ *pso[8]; // [rsp+F0h] [rbp-A8h] BYREF
  struct _RECTL v39; // [rsp+130h] [rbp-68h] BYREF
  struct _RECTL v40; // [rsp+140h] [rbp-58h] BYREF

  v32 = a4;
  pco = a4;
  v29 = a5;
  prclOpaque = a6;
  v30 = a8;
  pptlOrg = a9;
  v39 = 0LL;
  v40 = 0LL;
  v31 = 0LL;
  memset(&v36, 0, sizeof(v36));
  memset(&v37, 0, sizeof(v37));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v33 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v14 = pso[0];
  v34 = pso[0];
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v13, a2);
  v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v13, a3);
  pfo = v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v36);
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v30, &v37);
  if ( !v14 || !pstroa || !v15 || !pboFore || !pptlOrg )
    goto LABEL_18;
  CaptureRECTL(&v29, &v39);
  CaptureRECTL(&prclOpaque, &v40);
  CapturePOINTL(&pptlOrg, &v31);
  prclExtra = v29;
  if ( (*((_DWORD *)v13 + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v32, &v14->sizlBitmap),
         pco = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v14, prclOpaque, DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v27, (struct PFT *)pfo);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v27, v13, 0, 0, 0LL);
    v20 = EngTextOut(v14, pstroa, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v27, v13, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v27);
  }
  else
  {
LABEL_18:
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v13 + 105);
  return v20;
}
