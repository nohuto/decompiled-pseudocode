/*
 * XREFs of NtGdiEngTextOut @ 0x1C013BC80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     EngTextOut @ 0x1C00CB720 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E7978 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C0DC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013C6B4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C013C88C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C013C9F4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C013D724 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013D8E4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016A238 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        BRUSHOBJ *a3,
        struct _CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v15; // r13
  struct PFT *v16; // r12
  BRUSHOBJ *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r15
  RECTL *v19; // rax
  struct _CLIPOBJ *DDIOBJ; // rcx
  unsigned int v21; // esi
  CLIPOBJ *v23; // [rsp+50h] [rbp-218h]
  RECTL *prclExtra; // [rsp+58h] [rbp-210h] BYREF
  POINTL *pptlOrg; // [rsp+60h] [rbp-208h] BYREF
  RECTL *prclOpaque; // [rsp+68h] [rbp-200h] BYREF
  BRUSHOBJ *v27; // [rsp+70h] [rbp-1F8h]
  STROBJ *pstro; // [rsp+78h] [rbp-1F0h]
  char v29[8]; // [rsp+80h] [rbp-1E8h] BYREF
  struct _BRUSHOBJ *v30; // [rsp+88h] [rbp-1E0h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-1D8h]
  struct _POINTL v32; // [rsp+98h] [rbp-1D0h] BYREF
  struct _CLIPOBJ *v33; // [rsp+A0h] [rbp-1C8h]
  struct UMPDOBJ *v34; // [rsp+A8h] [rbp-1C0h]
  SURFOBJ *v35; // [rsp+B0h] [rbp-1B8h]
  struct PFT *v36; // [rsp+B8h] [rbp-1B0h]
  struct _CLIPOBJ *v37; // [rsp+C0h] [rbp-1A8h]
  struct _BRUSHOBJ v38; // [rsp+C8h] [rbp-1A0h] BYREF
  struct _BRUSHOBJ v39; // [rsp+E0h] [rbp-188h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-168h] BYREF
  struct _RECTL v41; // [rsp+140h] [rbp-128h] BYREF
  struct _RECTL v42; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v43[168]; // [rsp+160h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+208h] [rbp-60h]

  v33 = a4;
  v27 = a3;
  v37 = a4;
  prclExtra = a5;
  prclOpaque = a6;
  v30 = a7;
  v31 = a8;
  pptlOrg = a9;
  v41 = 0LL;
  v42 = 0LL;
  v32 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v15 = pso[0];
  v35 = pso[0];
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v13, a2);
  v16 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v13, v27);
  v36 = v16;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(v30, &v38);
  v27 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v31, &v39);
  if ( !v15 || !pstro || !v16 || !pboFore || !pptlOrg )
    goto LABEL_25;
  CaptureRECTL(&prclExtra, &v41);
  CaptureRECTL(&prclOpaque, &v42);
  CapturePOINTL(&pptlOrg, &v32);
  v19 = prclExtra;
  if ( (*((_DWORD *)v13 + 103) & 0x100) != 0 )
    v19 = 0LL;
  if ( ((prclExtra = v19,
         DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v33, &v15->sizlBitmap),
         v23 = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v15, prclOpaque, DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v29, v16);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v29, v13, 0, 0, 0LL);
    if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
    {
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v15, v23, 0LL);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
        || (v21 = 1,
            !EngTextOut(v15, pstro, (FONTOBJ *)v16, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix)) )
      {
        v21 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
    }
    else
    {
      v21 = EngTextOut(v15, pstro, (FONTOBJ *)v16, v23, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v29, v13, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v29);
  }
  else
  {
LABEL_25:
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v13 + 105);
  return v21;
}
