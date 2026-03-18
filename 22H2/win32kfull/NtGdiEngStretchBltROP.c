/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02CB070
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBltROP @ 0x1C0029ED0 (EngStretchBltROP.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2193942840__private_IsEnabledDeviceUsage @ 0x1C01405A0 (Feature_2193942840__private_IsEnabledDeviceUsage.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C6C3C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C6FDC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C7118 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C717C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02C73E8 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C7850 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C78F0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02C7B44 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02C7CE8 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02C7D4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02C7F7C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
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
        unsigned int rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rax
  struct _SURFOBJ **v17; // r14
  _DWORD *v18; // rsi
  SURFOBJ *v19; // r13
  struct _SURFOBJ *v20; // r14
  SURFOBJ *v21; // r15
  struct _XLATEOBJ *v23; // r10
  unsigned int v24; // r9d
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  struct _RECTL *v29; // rax
  struct _BRUSHOBJ *v30; // r9
  BRUSHOBJ *pbo; // r14
  RECTL *v32; // r9
  RECTL *prclDest; // rdi
  unsigned int v34; // [rsp+78h] [rbp-2A0h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-298h] BYREF
  RECTL *prclSrc; // [rsp+88h] [rbp-290h] BYREF
  SURFOBJ *psoSrc; // [rsp+90h] [rbp-288h]
  POINTL *pptlMask; // [rsp+98h] [rbp-280h] BYREF
  RECTL *v39; // [rsp+A0h] [rbp-278h] BYREF
  CLIPOBJ *DDIOBJ; // [rsp+A8h] [rbp-270h]
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-268h]
  struct _BRUSHOBJ *v42; // [rsp+B8h] [rbp-260h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-258h] BYREF
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-250h] BYREF
  UMPDOBJ *v45; // [rsp+D0h] [rbp-248h]
  POINTL *v46; // [rsp+D8h] [rbp-240h]
  struct _POINTL v47; // [rsp+E0h] [rbp-238h] BYREF
  struct _POINTL v48; // [rsp+E8h] [rbp-230h] BYREF
  char *v49; // [rsp+F0h] [rbp-228h]
  SURFOBJ *v50; // [rsp+F8h] [rbp-220h]
  SURFOBJ *v51; // [rsp+100h] [rbp-218h]
  struct _BRUSHOBJ v52; // [rsp+108h] [rbp-210h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-1F8h] BYREF
  struct _SURFOBJ *v54[8]; // [rsp+160h] [rbp-1B8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+1A0h] [rbp-178h] BYREF
  struct _RECTL v56; // [rsp+1E0h] [rbp-138h] BYREF
  struct _RECTL v57; // [rsp+1F0h] [rbp-128h] BYREF
  struct _RECTL v58; // [rsp+200h] [rbp-118h] BYREF
  struct tagCOLORADJUSTMENT v59; // [rsp+210h] [rbp-108h] BYREF
  _BYTE v60[160]; // [rsp+230h] [rbp-E8h] BYREF
  CLIPOBJ *pco; // [rsp+2D0h] [rbp-48h]

  DDIOBJ = a4;
  psoSrc = a3;
  v46 = a7;
  *(_QWORD *)&v56.left = a4;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  v39 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v42 = a12;
  v34 = rop4;
  v35 = rop4;
  v57 = 0LL;
  v58 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(&v59, 0, sizeof(v59));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = (struct _SURFOBJ **)ThreadCurrentObj;
  v45 = ThreadCurrentObj;
  v18 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( ThreadCurrentObj )
    ++*v18;
  v49 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a2, v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoSrc, v17);
  v19 = psoDest[0];
  v50 = psoDest[0];
  v20 = v54[0];
  psoSrc = v54[0];
  v21 = psoMask[0];
  v51 = psoMask[0];
  if ( !v46 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v18;
    return 0LL;
  }
  if ( !psoDest[0] || !v54[0] || !v39 || !prclSrc )
  {
LABEL_46:
    v28 = 0;
    goto LABEL_47;
  }
  CaptureRECTL(&v39, &v57);
  CaptureRECTL(&prclSrc, &v58);
  CapturePOINTL(&pptlMask, &v47);
  CapturePOINTL(&pptlHTOrg, &v48);
  CaptureCOLORADJUSTMENT(&pca, &v59);
  if ( !bCheckDestSurfaceOverlap(v19, v39) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v18;
    return 1LL;
  }
  memset(&v52, 0, sizeof(v52));
  DDIOBJ = UMPDOBJ::GetDDIOBJ(v45, DDIOBJ, &v19->sizlBitmap);
  v23 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v45, (__int64)pxlo);
  pxlo = v23;
  if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && !bOrder(prclSrc)
    || !(unsigned int)bCheckXlate(v20, v23) )
  {
    goto LABEL_22;
  }
  v25 = v24 >> 8;
  v26 = (unsigned __int8)v24;
  v34 = (unsigned __int8)v24;
  if ( (unsigned __int8)v24 == BYTE1(v24) || v21 )
    goto LABEL_21;
  v27 = PROBEDISPATBRUSH(v42);
  v24 = rop4;
  if ( !v27 )
  {
LABEL_22:
    v28 = 0;
    v25 = v35 >> 8;
    v26 = (unsigned __int8)v35;
    goto LABEL_23;
  }
  v26 = v34;
LABEL_21:
  v28 = 1;
LABEL_23:
  if ( v26 != (unsigned __int8)v25 && (!v21 || !pptlMask) )
    v28 = 0;
  if ( v28 )
  {
    if ( v24 == 43724 )
    {
      if ( v21 )
      {
        v56 = 0LL;
        v34 = 0;
        v35 = 0;
        v28 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v34, &v35);
        if ( v28 )
        {
          v29 = pRect(pptlMask, &v56, v34, v35);
          v28 = bCheckMask(v21, v29);
        }
      }
    }
  }
  pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v45, (__int64)v42);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v30, &v52);
  if ( (unsigned int)Feature_2193942840__private_IsEnabledDeviceUsage() )
  {
    if ( v28 )
    {
      v32 = 0LL;
      prclDest = v39;
      if ( iMode == 4 )
        v32 = v39;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v60, v19, DDIOBJ, v32);
      v28 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v60)
         && EngStretchBltROP(v19, psoSrc, v21, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v60);
    }
    goto LABEL_47;
  }
  if ( !v28
    || !EngStretchBltROP(v19, psoSrc, v21, DDIOBJ, pxlo, pca, pptlHTOrg, v39, prclSrc, pptlMask, iMode, pbo, rop4) )
  {
    goto LABEL_46;
  }
  v28 = 1;
LABEL_47:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v18;
  return v28;
}
