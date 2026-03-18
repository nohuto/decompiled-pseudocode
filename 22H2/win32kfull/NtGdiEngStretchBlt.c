/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C02CAB20
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00D7260 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2193942840__private_IsEnabledDeviceUsage @ 0x1C01405A0 (Feature_2193942840__private_IsEnabledDeviceUsage.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C7118 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C717C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C7850 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C78F0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02C7B44 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02C7CE8 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02C7D4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02C7F7C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v15; // r13
  _DWORD *v16; // rsi
  SURFOBJ *v17; // r14
  SURFOBJ *v18; // r15
  struct _XLATEOBJ *v20; // rdx
  struct _RECTL *v21; // r10
  unsigned int v22; // edi
  SURFOBJ *v23; // r13
  struct _RECTL *v24; // rax
  RECTL *v25; // r9
  RECTL *prclDest; // rdi
  SURFOBJ *psoMask; // [rsp+60h] [rbp-278h] BYREF
  CLIPOBJ *DDIOBJ; // [rsp+68h] [rbp-270h]
  struct _CLIPOBJ *v29; // [rsp+70h] [rbp-268h] BYREF
  RECTL *prclSrc; // [rsp+78h] [rbp-260h] BYREF
  RECTL *v31; // [rsp+80h] [rbp-258h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-250h]
  POINTL *pptlMask; // [rsp+90h] [rbp-248h] BYREF
  POINTL *pptlHTOrg; // [rsp+98h] [rbp-240h] BYREF
  COLORADJUSTMENT *pca; // [rsp+A0h] [rbp-238h] BYREF
  POINTL *v36; // [rsp+A8h] [rbp-230h]
  struct _POINTL v37; // [rsp+B0h] [rbp-228h] BYREF
  struct _POINTL v38; // [rsp+B8h] [rbp-220h] BYREF
  struct _SURFOBJ **v39; // [rsp+C0h] [rbp-218h]
  char *v40; // [rsp+C8h] [rbp-210h]
  SURFOBJ *v41; // [rsp+D0h] [rbp-208h]
  _QWORD v42[8]; // [rsp+E0h] [rbp-1F8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-1B8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-178h] BYREF
  struct _RECTL v45; // [rsp+1A0h] [rbp-138h] BYREF
  struct _RECTL v46; // [rsp+1B0h] [rbp-128h] BYREF
  struct _RECTL v47; // [rsp+1C0h] [rbp-118h] BYREF
  struct tagCOLORADJUSTMENT v48; // [rsp+1D0h] [rbp-108h] BYREF
  _BYTE v49[160]; // [rsp+1F0h] [rbp-E8h] BYREF
  CLIPOBJ *pco; // [rsp+290h] [rbp-48h]

  v29 = a4;
  DDIOBJ = a3;
  v36 = a7;
  *(_QWORD *)&v45.left = a4;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  v31 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v46 = 0LL;
  v47 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(&v48, 0, sizeof(v48));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v39 = ThreadCurrentObj;
  v16 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v16;
  v40 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v42, (struct _SURFOBJ *)DDIOBJ, v15);
  v17 = psoDest[0];
  DDIOBJ = (CLIPOBJ *)psoDest[0];
  v18 = psoSrc[0];
  v41 = psoSrc[0];
  psoMask = (SURFOBJ *)v42[0];
  if ( !v36 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v16;
    return 0LL;
  }
  if ( psoDest[0] && psoSrc[0] && v31 && prclSrc )
  {
    CaptureRECTL(&v31, &v46);
    CapturePOINTL(&pptlMask, &v37);
    CaptureRECTL(&prclSrc, &v47);
    CaptureCOLORADJUSTMENT(&pca, &v48);
    CapturePOINTL(&pptlHTOrg, &v38);
    if ( !bCheckDestSurfaceOverlap(v17, v31) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      --*v16;
      return 1LL;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, v29, &v17->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, (__int64)pxlo);
    v22 = bOrder(prclSrc) && (unsigned int)bCheckXlate(v18, v20);
    v23 = psoMask;
    if ( v22 )
    {
      if ( psoMask )
      {
        v45 = 0LL;
        LODWORD(psoMask) = 0;
        LODWORD(v29) = 0;
        v22 = bCheckSurfaceRectSize(v18, v21, 0LL, (unsigned int *)&psoMask, (unsigned int *)&v29);
        if ( v22 )
        {
          v24 = pRect(pptlMask, &v45, (int)psoMask, (int)v29);
          v22 = bCheckMask(v23, v24);
        }
      }
      if ( v22 )
      {
        if ( (unsigned int)Feature_2193942840__private_IsEnabledDeviceUsage() )
        {
          v25 = 0LL;
          prclDest = v31;
          if ( iMode == 4 )
            v25 = v31;
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v49, v17, DDIOBJ, v25);
          v22 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v49)
             && EngStretchBlt(v17, v18, v23, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v49);
        }
        else
        {
          v22 = EngStretchBlt(v17, v18, v23, DDIOBJ, pxlo, pca, pptlHTOrg, v31, prclSrc, pptlMask, iMode);
        }
      }
    }
  }
  else
  {
    v22 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v16;
  return v22;
}
