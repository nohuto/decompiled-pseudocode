/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02B39C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D9F4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013DC70 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013DDE0 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     EngPlgBlt @ 0x1C028C5F0 (EngPlgBlt.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  SURFOBJ *v16; // r12
  __int128 *pca; // r15
  struct tagSIZE *v18; // r11
  __int64 v19; // r14
  struct _POINTL *v20; // rdx
  int v21; // ecx
  RECTL *prcl; // r14
  struct _POINTL *pxlo; // rdx
  unsigned int v24; // edi
  SURFOBJ *v25; // r10
  struct _RECTL *v26; // rax
  unsigned int v27; // [rsp+60h] [rbp-1C8h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-1C4h] BYREF
  SURFOBJ *psoMsk; // [rsp+68h] [rbp-1C0h]
  struct _POINTL *v30; // [rsp+70h] [rbp-1B8h] BYREF
  SURFOBJ *psoTrg; // [rsp+78h] [rbp-1B0h]
  COLORADJUSTMENT *v32; // [rsp+80h] [rbp-1A8h]
  RECTL *v33; // [rsp+88h] [rbp-1A0h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-198h] BYREF
  CLIPOBJ *pco; // [rsp+98h] [rbp-190h]
  POINTL pptlBrushOrg; // [rsp+A0h] [rbp-188h] BYREF
  struct _POINTL v37; // [rsp+A8h] [rbp-180h] BYREF
  struct _CLIPOBJ *v38; // [rsp+B0h] [rbp-178h]
  CLIPOBJ *v39; // [rsp+B8h] [rbp-170h]
  struct UMPDOBJ *v40; // [rsp+C0h] [rbp-168h]
  SURFOBJ *v41; // [rsp+C8h] [rbp-160h]
  struct _CLIPOBJ *v42; // [rsp+D0h] [rbp-158h]
  _QWORD v43[8]; // [rsp+E0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-108h] BYREF
  _QWORD v45[8]; // [rsp+160h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp-78h]
  struct _RECTL v48; // [rsp+1B8h] [rbp-70h] BYREF
  struct _RECTL v49; // [rsp+1C8h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+1D8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+1E8h] [rbp-40h]

  v38 = a4;
  psoTrg = a3;
  v42 = a4;
  v39 = a5;
  pco = a5;
  v32 = a6;
  v30 = a7;
  v33 = a9;
  pptl = a10;
  v48 = 0LL;
  v37 = 0LL;
  pptlBrushOrg = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v40 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v45, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v43, psoTrg, (struct _SURFOBJ **)ThreadCurrentObj);
  psoTrg = (SURFOBJ *)v45[0];
  v16 = psoSrc[0];
  v41 = psoSrc[0];
  psoMsk = (SURFOBJ *)v43[0];
  if ( v45[0] && psoSrc[0] && v33 && a8 )
  {
    CaptureRECTL(&v33, &v48);
    pca = (__int128 *)v32;
    if ( v32 )
    {
      if ( (unsigned __int64)v32 >= MmUserProbeAddress )
        pca = (__int128 *)MmUserProbeAddress;
      v46 = *pca;
      v47 = *((_QWORD *)pca + 2);
      pca = &v46;
      v32 = (COLORADJUSTMENT *)&v46;
    }
    CapturePOINTL(&pptl, &v37);
    CapturePOINTL(&v30, &pptlBrushOrg);
    if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
    v51 = *(_QWORD *)(a8 + 16);
    v19 = (__int64)v39;
    pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v38, v18 + 4);
    v20 = (struct _POINTL *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v19);
    v30 = v20;
    v21 = 1;
    prcl = v33;
    if ( v33 && (v33->left > v33->right || v33->top > v33->bottom) )
      v21 = 0;
    if ( v21 && (unsigned int)bCheckXlate(v16, (struct _XLATEOBJ *)v20) )
    {
      v24 = 1;
      v25 = psoMsk;
      if ( !psoMsk )
        goto LABEL_31;
      v49 = 0LL;
      v28 = 0;
      v27 = 0;
      v24 = bCheckSurfaceRectSize(v16, prcl, 0LL, &v28, &v27);
      if ( v24 )
      {
        v26 = pRect(pptl, &v49, v28, v27);
        v25 = psoMsk;
        v24 = psoMsk->iBitmapFormat == 1;
        if ( psoMsk->iBitmapFormat != 1 )
        {
LABEL_30:
          pxlo = v30;
LABEL_31:
          if ( v24 )
            v24 = EngPlgBlt(
                    psoTrg,
                    v16,
                    v25,
                    pco,
                    (XLATEOBJ *)pxlo,
                    (COLORADJUSTMENT *)pca,
                    &pptlBrushOrg,
                    pptfx,
                    prcl,
                    pptl,
                    iMode);
          goto LABEL_34;
        }
        v24 = bCheckSurfaceRect(psoMsk, v26, 0LL);
      }
      v25 = psoMsk;
      goto LABEL_30;
    }
  }
  v24 = 0;
LABEL_34:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v24;
}
