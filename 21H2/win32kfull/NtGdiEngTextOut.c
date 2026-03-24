/*
 * XREFs of NtGdiEngTextOut @ 0x1C013C110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     EngTextOut @ 0x1C00CBA80 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E7CC8 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C588 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013CB7C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C013CD54 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C013CEBC (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C013DC08 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013DDC8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016AA98 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D960 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        BRUSHOBJ *a2,
        BRUSHOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v14; // r13
  FONTOBJ *v15; // r12
  BRUSHOBJ *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  FONTOBJ *v20; // rsi
  BOOL v21; // eax
  unsigned int v22; // esi
  CLIPOBJ *v23; // [rsp+50h] [rbp-218h] BYREF
  POINTL *pptlOrg; // [rsp+58h] [rbp-210h] BYREF
  RECTL *prclOpaque; // [rsp+60h] [rbp-208h] BYREF
  BRUSHOBJ *v26; // [rsp+68h] [rbp-200h]
  BRUSHOBJ *v27; // [rsp+70h] [rbp-1F8h]
  STROBJ *pstro; // [rsp+78h] [rbp-1F0h]
  char v29[8]; // [rsp+80h] [rbp-1E8h] BYREF
  struct _BRUSHOBJ *v30; // [rsp+88h] [rbp-1E0h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-1D8h]
  struct _POINTL v32; // [rsp+98h] [rbp-1D0h] BYREF
  struct _CLIPOBJ *v33; // [rsp+A0h] [rbp-1C8h]
  struct UMPDOBJ *v34; // [rsp+A8h] [rbp-1C0h]
  SURFOBJ *v35; // [rsp+B0h] [rbp-1B8h]
  struct _CLIPOBJ *v36; // [rsp+B8h] [rbp-1B0h]
  FONTOBJ *pfo; // [rsp+C0h] [rbp-1A8h]
  struct _BRUSHOBJ v38; // [rsp+C8h] [rbp-1A0h] BYREF
  struct _BRUSHOBJ v39; // [rsp+E0h] [rbp-188h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-168h] BYREF
  struct _RECTL v41; // [rsp+140h] [rbp-128h] BYREF
  struct _RECTL v42; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v43[168]; // [rsp+160h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+208h] [rbp-60h]

  v33 = a4;
  v26 = a3;
  v27 = a2;
  v36 = a4;
  v23 = a5;
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
  v34 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v14 = pso[0];
  v35 = pso[0];
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(ThreadCurrentObj, v27);
  v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, v26);
  pfo = v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(v30, &v38);
  v26 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v31, &v39);
  v27 = pboOpaque;
  if ( !v14 || !pstro || !v15 || !pboFore || !pptlOrg )
    goto LABEL_29;
  CaptureRECTL((struct _RECTL **)&v23, &v41);
  CaptureRECTL(&prclOpaque, &v42);
  CapturePOINTL(&pptlOrg, &v32);
  prclExtra = (RECTL *)v23;
  if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v33, &v14->sizlBitmap),
         v23 = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v14, prclOpaque, DDIOBJ) )
  {
    v20 = pfo;
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v29, (struct PFT *)pfo);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v29, ThreadCurrentObj, 0, 0, 0LL);
    if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
    {
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v14, v23, 0LL);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
        || (v21 = EngTextOut(v14, pstro, v20, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
            v22 = 1,
            !v21) )
      {
        v22 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
    }
    else
    {
      v22 = EngTextOut(v14, pstro, v20, v23, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v29, ThreadCurrentObj, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v29);
  }
  else
  {
LABEL_29:
    v22 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v22;
}
