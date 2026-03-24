/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C013D2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     EngStretchBlt @ 0x1C00B1650 (EngStretchBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D9F4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013DA4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C013DB40 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013DC70 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013DDE0 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D960 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        ULONG64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  unsigned int v14; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  POINTL *pptlHTOrg; // r12
  RECTL *v19; // rdx
  __int128 *p_left; // r8
  struct _POINTL *pptlMask; // r14
  __int128 *v22; // r15
  struct _RECTL *v23; // rdx
  __int64 v24; // rcx
  struct _SURFOBJ *v25; // r10
  struct _RECTL *v26; // r11
  unsigned int v27; // edi
  struct _RECTL *p_prclDest; // r9
  SURFOBJ *v29; // rdi
  BOOL v30; // eax
  int pca; // [rsp+28h] [rbp-2D0h]
  unsigned int v32; // [rsp+68h] [rbp-290h] BYREF
  RECTL *prclSrc; // [rsp+70h] [rbp-288h]
  SURFOBJ *psoMask; // [rsp+78h] [rbp-280h]
  CLIPOBJ *DDIOBJ; // [rsp+80h] [rbp-278h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-270h]
  unsigned int v37[2]; // [rsp+90h] [rbp-268h] BYREF
  SURFOBJ *psoSrc; // [rsp+98h] [rbp-260h]
  SURFOBJ *psoDest; // [rsp+A0h] [rbp-258h]
  COLORADJUSTMENT *v40; // [rsp+A8h] [rbp-250h]
  POINTL *v41; // [rsp+B0h] [rbp-248h]
  POINTL *v42; // [rsp+B8h] [rbp-240h]
  struct _POINTL v43; // [rsp+C0h] [rbp-238h] BYREF
  _QWORD v44[3]; // [rsp+C8h] [rbp-230h] BYREF
  _QWORD v45[8]; // [rsp+E0h] [rbp-218h] BYREF
  _QWORD v46[8]; // [rsp+120h] [rbp-1D8h] BYREF
  struct _SURFOBJ *v47[8]; // [rsp+160h] [rbp-198h] BYREF
  __int128 v48; // [rsp+1A0h] [rbp-158h] BYREF
  __int64 v49; // [rsp+1B0h] [rbp-148h]
  RECTL prclDest; // [rsp+1B8h] [rbp-140h] BYREF
  __int128 v51; // [rsp+1C8h] [rbp-130h] BYREF
  struct _RECTL v52; // [rsp+1D8h] [rbp-120h] BYREF
  _BYTE v53[168]; // [rsp+1F0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+298h] [rbp-60h]

  DDIOBJ = a4;
  v44[1] = a4;
  pxlo = a5;
  v40 = a6;
  v41 = a7;
  prclSrc = a9;
  v42 = a10;
  prclDest = 0LL;
  v51 = 0LL;
  v14 = 0;
  v43 = 0LL;
  v44[0] = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  *(_QWORD *)v37 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v47, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v46, a2, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v45, a3, ThreadCurrentObj);
  psoDest = v47[0];
  psoSrc = (SURFOBJ *)v46[0];
  psoMask = (SURFOBJ *)v45[0];
  pptlHTOrg = v41;
  if ( !v41 && iMode == 4 )
    goto LABEL_32;
  if ( v47[0] && v46[0] && (v19 = (RECTL *)a8) != 0LL && (p_left = (__int128 *)&prclSrc->left) != 0LL )
  {
    if ( a8 >= MmUserProbeAddress )
      v19 = (RECTL *)MmUserProbeAddress;
    prclDest = *v19;
    pptlMask = v42;
    if ( v42 )
    {
      if ( (unsigned __int64)v42 >= MmUserProbeAddress )
        pptlMask = (struct _POINTL *)MmUserProbeAddress;
      v43 = *pptlMask;
      pptlMask = &v43;
      v42 = &v43;
    }
    if ( (unsigned __int64)prclSrc >= MmUserProbeAddress )
      p_left = (__int128 *)MmUserProbeAddress;
    v51 = *p_left;
    prclSrc = (RECTL *)&v51;
    v22 = (__int128 *)v40;
    if ( v40 )
    {
      if ( (unsigned __int64)v40 >= MmUserProbeAddress )
        v22 = (__int128 *)MmUserProbeAddress;
      v48 = *v22;
      v49 = *((_QWORD *)v22 + 2);
      v22 = &v48;
      v40 = (COLORADJUSTMENT *)&v48;
    }
    if ( v41 )
    {
      if ( (unsigned __int64)v41 >= MmUserProbeAddress )
        pptlHTOrg = (POINTL *)MmUserProbeAddress;
      v44[0] = *pptlHTOrg;
      pptlHTOrg = (POINTL *)v44;
      v41 = (POINTL *)v44;
    }
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v47[0], &prclDest) )
    {
      v14 = 1;
LABEL_32:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
      UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
      return v14;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, DDIOBJ, &psoDest->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, pxlo);
    if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(psoSrc, (struct _XLATEOBJ *)v23) )
    {
      v27 = 1;
      if ( psoMask )
      {
        v52 = 0LL;
        v37[0] = 0;
        v32 = 0;
        v27 = bCheckSurfaceRectSize(v25, v26, 0LL, v37, &v32, pca);
        if ( v27 )
        {
          v23 = pRect(pptlMask, &v52, v37[0], v32);
          v27 = psoMask->iBitmapFormat == 1;
          if ( psoMask->iBitmapFormat == 1 )
            v27 = bCheckSurfaceRect(psoMask, v23, 0LL);
        }
      }
    }
    else
    {
      v27 = 0;
    }
    if ( v27 )
    {
      if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage(v24, v23) )
      {
        p_prclDest = 0LL;
        if ( iMode == 4 )
          p_prclDest = &prclDest;
        v29 = psoDest;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v53, psoDest, DDIOBJ, p_prclDest);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v53)
          || (v30 = EngStretchBlt(
                      v29,
                      psoSrc,
                      psoMask,
                      pco,
                      pxlo,
                      (COLORADJUSTMENT *)v22,
                      pptlHTOrg,
                      &prclDest,
                      prclSrc,
                      pptlMask,
                      iMode),
              v27 = 1,
              !v30) )
        {
          v27 = 0;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v53);
      }
      else
      {
        v27 = EngStretchBlt(
                psoDest,
                psoSrc,
                psoMask,
                DDIOBJ,
                pxlo,
                (COLORADJUSTMENT *)v22,
                pptlHTOrg,
                &prclDest,
                prclSrc,
                pptlMask,
                iMode);
      }
    }
  }
  else
  {
    v27 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v27;
}
