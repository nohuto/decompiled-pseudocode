/*
 * XREFs of NtGdiEngCopyBits @ 0x1C013AC00
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D510 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013D568 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013D588 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013D78C (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013D8FC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
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
  struct _CLIPOBJ *v30; // [rsp+70h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v33; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-58h] BYREF

  v26 = a4;
  v30 = a3;
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
    *(SURFOBJ **)&v33.left = psoSrc[0];
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
