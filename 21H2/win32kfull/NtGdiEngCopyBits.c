/*
 * XREFs of NtGdiEngCopyBits @ 0x1C013AFF0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C013D9F4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013DA4C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013DC70 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C013DDE0 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  SURFOBJ *v13; // r15
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rdi
  struct _XLATEOBJ *v17; // r13
  struct _RECTL *v18; // rax
  int pptlSrc; // [rsp+28h] [rbp-140h]
  unsigned int v20; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-134h] BYREF
  POINTL *v22; // [rsp+38h] [rbp-130h] BYREF
  RECTL *v23; // [rsp+40h] [rbp-128h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-120h]
  __int64 v25; // [rsp+50h] [rbp-118h]
  struct _POINTL v26; // [rsp+58h] [rbp-110h] BYREF
  struct UMPDOBJ *v27; // [rsp+60h] [rbp-108h]
  SURFOBJ *v28; // [rsp+68h] [rbp-100h]
  __int64 v29; // [rsp+70h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v32; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v33; // [rsp+110h] [rbp-58h] BYREF

  v25 = a4;
  pco = a3;
  v29 = a4;
  v23 = a5;
  v22 = a6;
  v33 = 0LL;
  v26 = 0LL;
  v21 = 0;
  v20 = 0;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v27 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, ThreadCurrentObj);
  v13 = psoDest[0];
  *(SURFOBJ **)&v32.left = psoDest[0];
  v14 = psoSrc[0];
  v28 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || psoDest[0]->iType || !v23 || !v22 )
  {
LABEL_18:
    v9 = 0;
    goto LABEL_19;
  }
  CaptureRECTL(&v23, &v33);
  CapturePOINTL(&v22, &v26);
  prclDest = v23;
  if ( (unsigned int)bOrder(v23) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v13->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, v25);
    if ( (unsigned int)bCheckSurfaceRectSize(v13, prclDest, DDIOBJ, &v21, &v20, pptlSrc)
      && (unsigned int)bCheckXlate(v14, v17) )
    {
      v32 = 0LL;
      v18 = pRect(v22, &v32, v21, v20);
      v9 = bCheckSurfaceRect(v14, v18, 0LL);
      if ( v9 )
        v9 = EngCopyBits(v13, v14, pco, v17, prclDest, v22);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v9;
}
