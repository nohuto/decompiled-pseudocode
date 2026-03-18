/*
 * XREFs of NtGdiEngCopyBits @ 0x1C0125BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C012912C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012B268 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rsi
  SURFOBJ *v13; // r15
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rdi
  struct _XLATEOBJ *v17; // r13
  struct _RECTL *v18; // rax
  int pptlSrc; // [rsp+28h] [rbp-140h]
  unsigned int v21; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-134h] BYREF
  POINTL *v23; // [rsp+38h] [rbp-130h] BYREF
  RECTL *v24; // [rsp+40h] [rbp-128h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-120h]
  CLIPOBJ *v26; // [rsp+50h] [rbp-118h]
  struct _POINTL v27; // [rsp+58h] [rbp-110h] BYREF
  struct UMPDOBJ *v28; // [rsp+60h] [rbp-108h]
  SURFOBJ *v29; // [rsp+68h] [rbp-100h]
  SURFOBJ *v30; // [rsp+70h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v33; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-58h] BYREF

  v26 = a4;
  *(_QWORD *)&v33.left = a3;
  pco = a4;
  v24 = a5;
  v23 = a6;
  v34 = 0LL;
  v27 = 0LL;
  v22 = 0;
  v21 = 0;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  v28 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v12);
    v13 = psoDest[0];
    v29 = psoDest[0];
    v14 = psoSrc[0];
    v30 = psoSrc[0];
    if ( psoDest[0] && psoSrc[0] && !psoDest[0]->iType && v24 && v23 )
    {
      CaptureRECTL(&v24, &v34);
      CapturePOINTL(&v23, &v27);
      prclDest = v24;
      if ( !(unsigned int)bOrder(v24) )
      {
LABEL_12:
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
        --*((_DWORD *)v12 + 105);
        return v9;
      }
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, a3, &v13->sizlBitmap);
      pco = DDIOBJ;
      v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, v26);
      if ( (unsigned int)bCheckSurfaceRectSize(v13, prclDest, DDIOBJ, &v22, &v21, pptlSrc)
        && (unsigned int)bCheckXlate(v14, v17) )
      {
        v33 = 0LL;
        v18 = pRect(v23, &v33, v22, v21);
        v9 = bCheckSurfaceRect(v14, v18, 0LL);
        if ( v9 )
          v9 = EngCopyBits(v13, v14, pco, v17, prclDest, v23);
        goto LABEL_12;
      }
    }
    v9 = 0;
    goto LABEL_12;
  }
  return 0LL;
}
