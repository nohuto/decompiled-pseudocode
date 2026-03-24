/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C013CDD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     EngStretchBlt @ 0x1C00B12F0 (EngStretchBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D510 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013D568 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013D588 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013D65C (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013D78C (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013D8FC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        ULONG64 a8,
        ULONG64 a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v16; // rdi
  __int64 result; // rax
  SURFOBJ *v18; // r13
  POINTL *pptlHTOrg; // r15
  RECTL *v20; // rdx
  RECTL *v21; // r8
  struct _POINTL *pptlMask; // rsi
  __int128 *v23; // r14
  struct _RECTL *v24; // rdx
  __int64 v25; // rcx
  struct _SURFOBJ *v26; // r10
  struct _RECTL *v27; // r11
  unsigned int v28; // ebx
  struct _RECTL *p_prclDest; // r9
  int pca; // [rsp+28h] [rbp-2C0h]
  SURFOBJ *psoMask; // [rsp+70h] [rbp-278h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+78h] [rbp-270h]
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-268h]
  unsigned int v35[2]; // [rsp+88h] [rbp-260h] BYREF
  unsigned int v36[2]; // [rsp+90h] [rbp-258h] BYREF
  SURFOBJ *psoSrc; // [rsp+98h] [rbp-250h]
  COLORADJUSTMENT *v38; // [rsp+A0h] [rbp-248h]
  POINTL *v39; // [rsp+A8h] [rbp-240h]
  POINTL *v40; // [rsp+B0h] [rbp-238h]
  struct _POINTL v41; // [rsp+B8h] [rbp-230h] BYREF
  _QWORD v42[2]; // [rsp+C0h] [rbp-228h] BYREF
  _QWORD v43[8]; // [rsp+D0h] [rbp-218h] BYREF
  _QWORD v44[8]; // [rsp+110h] [rbp-1D8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+150h] [rbp-198h] BYREF
  __int128 v46; // [rsp+190h] [rbp-158h] BYREF
  __int64 v47; // [rsp+1A0h] [rbp-148h]
  RECTL prclDest; // [rsp+1A8h] [rbp-140h] BYREF
  RECTL prclSrc; // [rsp+1B8h] [rbp-130h] BYREF
  struct _RECTL v50; // [rsp+1C8h] [rbp-120h] BYREF
  _BYTE v51[168]; // [rsp+1E0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+288h] [rbp-60h]

  v42[1] = a4;
  v38 = a6;
  v39 = a7;
  v40 = a10;
  prclDest = 0LL;
  prclSrc = 0LL;
  v41 = 0LL;
  v42[0] = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  *(_QWORD *)v36 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v44, a2, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v43, a3, v16);
  v18 = psoDest[0];
  *(SURFOBJ **)v35 = psoDest[0];
  psoSrc = (SURFOBJ *)v44[0];
  psoMask = (SURFOBJ *)v43[0];
  pptlHTOrg = v39;
  if ( !v39 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*((_DWORD *)v16 + 105);
    return 0LL;
  }
  if ( !psoDest[0] || !v44[0] || (v20 = (RECTL *)a8) == 0LL || (v21 = (RECTL *)a9) == 0LL )
  {
    v28 = 0;
LABEL_47:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    result = v28;
    goto LABEL_48;
  }
  if ( a8 >= MmUserProbeAddress )
    v20 = (RECTL *)MmUserProbeAddress;
  prclDest = *v20;
  pptlMask = v40;
  if ( v40 )
  {
    if ( (unsigned __int64)v40 >= MmUserProbeAddress )
      pptlMask = (struct _POINTL *)MmUserProbeAddress;
    v41 = *pptlMask;
    pptlMask = &v41;
    v40 = &v41;
  }
  if ( a9 >= MmUserProbeAddress )
    v21 = (RECTL *)MmUserProbeAddress;
  prclSrc = *v21;
  v23 = (__int128 *)v38;
  if ( v38 )
  {
    if ( (unsigned __int64)v38 >= MmUserProbeAddress )
      v23 = (__int128 *)MmUserProbeAddress;
    v46 = *v23;
    v47 = *((_QWORD *)v23 + 2);
    v23 = &v46;
    v38 = (COLORADJUSTMENT *)&v46;
  }
  if ( v39 )
  {
    if ( (unsigned __int64)v39 >= MmUserProbeAddress )
      pptlHTOrg = (POINTL *)MmUserProbeAddress;
    v42[0] = *pptlHTOrg;
    pptlHTOrg = (POINTL *)v42;
    v39 = (POINTL *)v42;
  }
  if ( (unsigned int)bCheckDestSurfaceOverlap(psoDest[0], &prclDest) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v16, a4, &v18->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, a5);
    if ( (unsigned int)bOrder(&prclSrc) && (unsigned int)bCheckXlate(psoSrc, (struct _XLATEOBJ *)v24) )
    {
      v28 = 1;
      if ( psoMask )
      {
        v50 = 0LL;
        v36[0] = 0;
        v35[0] = 0;
        v28 = bCheckSurfaceRectSize(v26, v27, 0LL, v36, v35, pca);
        if ( v28 )
        {
          v24 = pRect(pptlMask, &v50, v36[0], v35[0]);
          v28 = psoMask->iBitmapFormat == 1;
          if ( psoMask->iBitmapFormat == 1 )
            v28 = bCheckSurfaceRect(psoMask, v24, 0LL);
        }
      }
    }
    else
    {
      v28 = 0;
    }
    if ( v28 )
    {
      if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage(v25, v24) )
      {
        p_prclDest = 0LL;
        if ( iMode == 4 )
          p_prclDest = &prclDest;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v51, v18, DDIOBJ, p_prclDest);
        v28 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v51)
           && EngStretchBlt(
                v18,
                psoSrc,
                psoMask,
                pco,
                pxlo,
                (COLORADJUSTMENT *)v23,
                pptlHTOrg,
                &prclDest,
                &prclSrc,
                pptlMask,
                iMode);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v51);
      }
      else
      {
        v28 = EngStretchBlt(
                v18,
                psoSrc,
                psoMask,
                DDIOBJ,
                pxlo,
                (COLORADJUSTMENT *)v23,
                pptlHTOrg,
                &prclDest,
                &prclSrc,
                pptlMask,
                iMode);
      }
    }
    goto LABEL_47;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  result = 1LL;
LABEL_48:
  --*((_DWORD *)v16 + 105);
  return result;
}
