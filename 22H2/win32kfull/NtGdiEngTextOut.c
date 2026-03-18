/*
 * XREFs of NtGdiEngTextOut @ 0x1C02CBFB0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0055630 (EngTextOut.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013E724 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C013E734 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2193942840__private_IsEnabledDeviceUsage @ 0x1C01405A0 (Feature_2193942840__private_IsEnabledDeviceUsage.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0298B0C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02BFC6C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02BFF40 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C6C3C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C6CF4 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C6FDC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C717C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7A74 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        FONTOBJ *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v13; // rsi
  _DWORD *v14; // r15
  SURFOBJ *v16; // r13
  struct _BRUSHOBJ *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r12
  RECTL *v19; // rax
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v21; // edi
  FONTOBJ *v22; // rdi
  BOOL v23; // eax
  CLIPOBJ *v25; // [rsp+50h] [rbp-208h]
  RECTL *prclExtra; // [rsp+58h] [rbp-200h] BYREF
  POINTL *pptlOrg; // [rsp+60h] [rbp-1F8h] BYREF
  RECTL *prclOpaque; // [rsp+68h] [rbp-1F0h] BYREF
  struct _BRUSHOBJ *v29; // [rsp+70h] [rbp-1E8h]
  FONTOBJ *pfo; // [rsp+78h] [rbp-1E0h]
  STROBJ *pstro; // [rsp+80h] [rbp-1D8h]
  _BYTE v32[8]; // [rsp+88h] [rbp-1D0h] BYREF
  struct _BRUSHOBJ *v33; // [rsp+90h] [rbp-1C8h]
  struct _POINTL v34; // [rsp+98h] [rbp-1C0h] BYREF
  struct _CLIPOBJ *v35; // [rsp+A0h] [rbp-1B8h]
  struct _SURFOBJ **v36; // [rsp+A8h] [rbp-1B0h]
  SURFOBJ *v37; // [rsp+B0h] [rbp-1A8h]
  struct _CLIPOBJ *v38; // [rsp+B8h] [rbp-1A0h]
  char *v39; // [rsp+C0h] [rbp-198h]
  struct _BRUSHOBJ v40; // [rsp+C8h] [rbp-190h] BYREF
  struct _BRUSHOBJ v41; // [rsp+E0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-158h] BYREF
  struct _RECTL v43; // [rsp+140h] [rbp-118h] BYREF
  struct _RECTL v44; // [rsp+150h] [rbp-108h] BYREF
  _BYTE v45[160]; // [rsp+160h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+200h] [rbp-58h]

  v35 = a4;
  pfo = a2;
  v38 = a4;
  prclExtra = a5;
  prclOpaque = a6;
  v29 = a7;
  v33 = a8;
  pptlOrg = a9;
  v43 = 0LL;
  v44 = 0LL;
  v34 = 0LL;
  memset(&v40, 0, sizeof(v40));
  memset(&v41, 0, sizeof(v41));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v36 = ThreadCurrentObj;
  v14 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v14;
  v39 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v16 = pso[0];
  v37 = pso[0];
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, (__int64)pfo);
  pfo = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, a3);
  pboFore = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(v29, &v40);
  v29 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v33, &v41);
  if ( v16 && pstro && pfo && pboFore && pptlOrg )
  {
    CaptureRECTL(&prclExtra, &v43);
    CaptureRECTL(&prclOpaque, &v44);
    CapturePOINTL(&pptlOrg, &v34);
    v19 = prclExtra;
    if ( (*((_DWORD *)v13 + 107) & 0x100) != 0 )
      v19 = 0LL;
    prclExtra = v19;
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v13, v35, &v16->sizlBitmap);
    v25 = DDIOBJ;
    if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1
      || (v21 = 1, !(unsigned int)bCheckSurfaceRect(v16, prclOpaque, DDIOBJ)) )
    {
      v21 = 0;
    }
    if ( v21 )
    {
      v22 = pfo;
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v32, (struct PFT *)pfo);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v32, (struct UMPDOBJ *)v13, 0, 0, 0LL);
      if ( (unsigned int)Feature_2193942840__private_IsEnabledDeviceUsage() )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v16, v25, 0LL);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
          || (v23 = EngTextOut(v16, pstro, v22, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
              v21 = 1,
              !v23) )
        {
          v21 = 0;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
      }
      else
      {
        v21 = EngTextOut(v16, pstro, v22, v25, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v32, (struct UMPDOBJ *)v13, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v32);
    }
  }
  else
  {
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v14;
  return v21;
}
