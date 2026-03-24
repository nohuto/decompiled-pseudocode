/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C013B380
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStretchBltROP @ 0x1C01045D0 (EngStretchBltROP.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C588 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D9F4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013DA4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013DB40 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013DC70 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013DDC8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013DDE0 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D960 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02B1BB4 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  unsigned int v15; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  struct _SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  __int128 *v21; // r15
  struct _XLATEOBJ *v22; // r8
  DWORD v23; // r9d
  struct _SURFOBJ *v24; // r10
  DWORD v25; // r14d
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  struct _RECTL *v29; // rax
  BRUSHOBJ *pbo; // r14
  RECTL *v31; // r9
  SURFOBJ *v32; // rdi
  BOOL v33; // eax
  int pca; // [rsp+28h] [rbp-310h]
  int v35; // [rsp+78h] [rbp-2C0h]
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-2B8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-2B0h] BYREF
  RECTL *prclDest; // [rsp+90h] [rbp-2A8h] BYREF
  POINTL *pptlMask; // [rsp+98h] [rbp-2A0h] BYREF
  SURFOBJ *psoDest; // [rsp+A0h] [rbp-298h]
  CLIPOBJ *DDIOBJ; // [rsp+A8h] [rbp-290h]
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-288h]
  unsigned int v43[2]; // [rsp+B8h] [rbp-280h] BYREF
  unsigned int v44[2]; // [rsp+C0h] [rbp-278h] BYREF
  struct _BRUSHOBJ *v45; // [rsp+C8h] [rbp-270h]
  DWORD v46; // [rsp+D0h] [rbp-268h]
  COLORADJUSTMENT *v47; // [rsp+D8h] [rbp-260h]
  POINTL *pptlHTOrg; // [rsp+E0h] [rbp-258h] BYREF
  struct _POINTL v49; // [rsp+E8h] [rbp-250h] BYREF
  struct _POINTL v50; // [rsp+F0h] [rbp-248h] BYREF
  CLIPOBJ *v51; // [rsp+F8h] [rbp-240h]
  struct _BRUSHOBJ v52; // [rsp+100h] [rbp-238h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-218h] BYREF
  _QWORD v54[8]; // [rsp+160h] [rbp-1D8h] BYREF
  struct _SURFOBJ *v55[8]; // [rsp+1A0h] [rbp-198h] BYREF
  __int128 v56; // [rsp+1E0h] [rbp-158h] BYREF
  __int64 v57; // [rsp+1F0h] [rbp-148h]
  struct _RECTL v58; // [rsp+1F8h] [rbp-140h] BYREF
  struct _RECTL v59; // [rsp+208h] [rbp-130h] BYREF
  struct _RECTL v60; // [rsp+218h] [rbp-120h] BYREF
  _BYTE v61[168]; // [rsp+230h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+2D8h] [rbp-60h]

  DDIOBJ = a4;
  psoDest = a3;
  v51 = a4;
  pxlo = a5;
  v47 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v45 = a12;
  v46 = rop4;
  v58 = 0LL;
  v59 = 0LL;
  v15 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  *(_QWORD *)v44 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v55, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a2, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoDest, ThreadCurrentObj);
  v19 = v55[0];
  psoDest = v55[0];
  psoSrc = (SURFOBJ *)v54[0];
  v20 = psoMask[0];
  *(SURFOBJ **)v43 = psoMask[0];
  if ( !a7 && iMode == 4 )
    goto LABEL_20;
  if ( !v55[0] || !v54[0] || !prclDest || !prclSrc )
  {
LABEL_53:
    v28 = 0;
    goto LABEL_54;
  }
  CaptureRECTL(&prclDest, &v58);
  CaptureRECTL(&prclSrc, &v59);
  CapturePOINTL(&pptlMask, &v49);
  CapturePOINTL(&pptlHTOrg, &v50);
  v21 = (__int128 *)v47;
  if ( v47 )
  {
    if ( (unsigned __int64)v47 >= MmUserProbeAddress )
      v21 = (__int128 *)MmUserProbeAddress;
    v56 = *v21;
    v57 = *((_QWORD *)v21 + 2);
    v21 = &v56;
    v47 = (COLORADJUSTMENT *)&v56;
  }
  if ( !(unsigned int)bCheckDestSurfaceOverlap(v19, prclDest) )
  {
    v15 = 1;
LABEL_20:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return v15;
  }
  memset(&v52, 0, sizeof(v52));
  DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, DDIOBJ, &v19->sizlBitmap);
  v22 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, pxlo);
  pxlo = v22;
  if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && !(unsigned int)bOrder(prclSrc) )
  {
    v24 = psoSrc;
    goto LABEL_30;
  }
  if ( !(unsigned int)bCheckXlate(psoSrc, v22) )
    goto LABEL_30;
  v25 = v23 >> 8;
  v26 = (unsigned __int8)v23;
  v35 = (unsigned __int8)v23;
  if ( (unsigned __int8)v23 == BYTE1(v23) || v20 )
    goto LABEL_28;
  v27 = PROBEDISPATBRUSH(v45);
  v24 = psoSrc;
  v23 = rop4;
  if ( !v27 )
  {
LABEL_30:
    v28 = 0;
    v25 = v46 >> 8;
    v26 = (unsigned __int8)v46;
    goto LABEL_31;
  }
  v26 = v35;
LABEL_28:
  v28 = 1;
LABEL_31:
  if ( v26 != (unsigned __int8)v25 && (!v20 || !pptlMask) )
    v28 = 0;
  if ( v28 )
  {
    if ( v23 == 43724 )
    {
      if ( v20 )
      {
        v60 = 0LL;
        v44[0] = 0;
        v43[0] = 0;
        v28 = bCheckSurfaceRectSize(v24, prclSrc, 0LL, v44, v43, pca);
        if ( v28 )
        {
          v29 = pRect(pptlMask, &v60, v44[0], v43[0]);
          v28 = v20->iBitmapFormat == 1;
          if ( v20->iBitmapFormat == 1 )
            v28 = bCheckSurfaceRect(v20, v29, 0LL);
        }
      }
    }
  }
  pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, v45);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v45, &v52);
  if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
  {
    if ( v28 )
    {
      v31 = 0LL;
      if ( iMode == 4 )
        v31 = prclDest;
      v32 = psoDest;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v61, psoDest, DDIOBJ, v31);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v61)
        || (v33 = EngStretchBltROP(
                    v32,
                    psoSrc,
                    v20,
                    pco,
                    pxlo,
                    (COLORADJUSTMENT *)v21,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v28 = 1,
            !v33) )
      {
        v28 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v61);
    }
    goto LABEL_54;
  }
  if ( !v28 )
    goto LABEL_53;
  v28 = 1;
  if ( !EngStretchBltROP(
          psoDest,
          psoSrc,
          v20,
          DDIOBJ,
          pxlo,
          (COLORADJUSTMENT *)v21,
          pptlHTOrg,
          prclDest,
          prclSrc,
          pptlMask,
          iMode,
          pbo,
          rop4) )
    goto LABEL_53;
LABEL_54:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v55);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v28;
}
