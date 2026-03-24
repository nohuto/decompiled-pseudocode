/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C013AF80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStretchBltROP @ 0x1C0104280 (EngStretchBltROP.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C0DC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D510 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013D568 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013D588 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013D65C (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013D78C (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013D8E4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013D8FC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02B14EC (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
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
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v17; // rsi
  __int64 result; // rax
  struct _SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  __int128 *v21; // r15
  struct _XLATEOBJ *v22; // r10
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
  int pca; // [rsp+28h] [rbp-300h]
  int v34; // [rsp+78h] [rbp-2B0h]
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-2A8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-2A0h] BYREF
  RECTL *prclDest; // [rsp+90h] [rbp-298h] BYREF
  POINTL *pptlMask; // [rsp+98h] [rbp-290h] BYREF
  SURFOBJ *psoDest; // [rsp+A0h] [rbp-288h]
  CLIPOBJ *DDIOBJ; // [rsp+A8h] [rbp-280h]
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-278h]
  unsigned int v42[2]; // [rsp+B8h] [rbp-270h] BYREF
  unsigned int v43[2]; // [rsp+C0h] [rbp-268h] BYREF
  struct _BRUSHOBJ *v44; // [rsp+C8h] [rbp-260h]
  DWORD v45; // [rsp+D0h] [rbp-258h]
  COLORADJUSTMENT *v46; // [rsp+D8h] [rbp-250h]
  POINTL *pptlHTOrg; // [rsp+E0h] [rbp-248h] BYREF
  struct _POINTL v48; // [rsp+E8h] [rbp-240h] BYREF
  struct _POINTL v49; // [rsp+F0h] [rbp-238h] BYREF
  CLIPOBJ *v50; // [rsp+F8h] [rbp-230h]
  struct _BRUSHOBJ v51; // [rsp+100h] [rbp-228h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-208h] BYREF
  _QWORD v53[8]; // [rsp+160h] [rbp-1C8h] BYREF
  struct _SURFOBJ *v54[8]; // [rsp+1A0h] [rbp-188h] BYREF
  __int128 v55; // [rsp+1E0h] [rbp-148h] BYREF
  __int64 v56; // [rsp+1F0h] [rbp-138h]
  struct _RECTL v57; // [rsp+1F8h] [rbp-130h] BYREF
  struct _RECTL v58; // [rsp+208h] [rbp-120h] BYREF
  struct _RECTL v59; // [rsp+218h] [rbp-110h] BYREF
  _BYTE v60[168]; // [rsp+230h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+2D8h] [rbp-50h]

  DDIOBJ = a4;
  psoDest = a3;
  v50 = a4;
  pxlo = a5;
  v46 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v44 = a12;
  v45 = rop4;
  v57 = 0LL;
  v58 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = ThreadCurrentObj;
  *(_QWORD *)v43 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v53, a2, v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoDest, v17);
  v19 = v54[0];
  psoDest = v54[0];
  psoSrc = (SURFOBJ *)v53[0];
  v20 = psoMask[0];
  *(SURFOBJ **)v42 = psoMask[0];
  if ( !a7 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
    --*((_DWORD *)v17 + 105);
    return 0LL;
  }
  if ( !v54[0] || !v53[0] || !prclDest || !prclSrc )
    goto LABEL_51;
  CaptureRECTL(&prclDest, &v57);
  CaptureRECTL(&prclSrc, &v58);
  CapturePOINTL(&pptlMask, &v48);
  CapturePOINTL(&pptlHTOrg, &v49);
  v21 = (__int128 *)v46;
  if ( v46 )
  {
    if ( (unsigned __int64)v46 >= MmUserProbeAddress )
      v21 = (__int128 *)MmUserProbeAddress;
    v55 = *v21;
    v56 = *((_QWORD *)v21 + 2);
    v21 = &v55;
    v46 = (COLORADJUSTMENT *)&v55;
  }
  if ( (unsigned int)bCheckDestSurfaceOverlap(v19, prclDest) )
  {
    memset(&v51, 0, sizeof(v51));
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v17, DDIOBJ, &v19->sizlBitmap);
    v22 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v17, pxlo);
    pxlo = v22;
    if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && !(unsigned int)bOrder(prclSrc) )
    {
      v24 = psoSrc;
    }
    else if ( (unsigned int)bCheckXlate(psoSrc, v22) )
    {
      v25 = v23 >> 8;
      v26 = (unsigned __int8)v23;
      v34 = (unsigned __int8)v23;
      if ( (unsigned __int8)v23 == BYTE1(v23) || v20 )
        goto LABEL_24;
      v27 = PROBEDISPATBRUSH(v44);
      v24 = psoSrc;
      v23 = rop4;
      if ( v27 )
      {
        v26 = v34;
LABEL_24:
        v28 = 1;
LABEL_27:
        if ( v26 != (unsigned __int8)v25 && (!v20 || !pptlMask) )
          v28 = 0;
        if ( v28 )
        {
          if ( v23 == 43724 )
          {
            if ( v20 )
            {
              v59 = 0LL;
              v43[0] = 0;
              v42[0] = 0;
              v28 = bCheckSurfaceRectSize(v24, prclSrc, 0LL, v43, v42, pca);
              if ( v28 )
              {
                v29 = pRect(pptlMask, &v59, v43[0], v42[0]);
                v28 = v20->iBitmapFormat == 1;
                if ( v20->iBitmapFormat == 1 )
                  v28 = bCheckSurfaceRect(v20, v29, 0LL);
              }
            }
          }
        }
        pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v17, v44);
        if ( !pbo )
          pbo = CaptureAndFakeBRUSHOBJ(v44, &v51);
        if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
        {
          if ( v28 )
          {
            v31 = 0LL;
            if ( iMode == 4 )
              v31 = prclDest;
            v32 = psoDest;
            ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v60, psoDest, DDIOBJ, v31);
            v28 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v60)
               && EngStretchBltROP(
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
                    rop4);
            ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v60);
          }
          goto LABEL_52;
        }
        if ( v28
          && EngStretchBltROP(
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
        {
          v28 = 1;
LABEL_52:
          UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
          UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
          UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
          result = v28;
          goto LABEL_53;
        }
LABEL_51:
        v28 = 0;
        goto LABEL_52;
      }
    }
    v28 = 0;
    v25 = v45 >> 8;
    v26 = (unsigned __int8)v45;
    goto LABEL_27;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
  result = 1LL;
LABEL_53:
  --*((_DWORD *)v17 + 105);
  return result;
}
