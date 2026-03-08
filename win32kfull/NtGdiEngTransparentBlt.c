/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02CE3E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngTransparentBlt @ 0x1C00F1E60 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C954C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C9940 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C99BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02CA19C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02CA410 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02CA474 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v10; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct _SURFOBJ **v13; // r14
  _DWORD *v14; // rdi
  SURFOBJ *v16; // r15
  SURFOBJ *v17; // rsi
  RECTL *prclDst; // r13
  RECTL *prclSrc; // r12
  struct _CLIPOBJ *v20; // rdx
  XLATEOBJ *v21; // r14
  RECTL *v22; // [rsp+40h] [rbp-138h] BYREF
  RECTL *v23; // [rsp+48h] [rbp-130h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-128h]
  __int64 v25; // [rsp+58h] [rbp-120h]
  __int64 v26; // [rsp+60h] [rbp-118h]
  struct UMPDOBJ *v27; // [rsp+68h] [rbp-110h]
  SURFOBJ *v28; // [rsp+70h] [rbp-108h]
  SURFOBJ *v29; // [rsp+78h] [rbp-100h]
  __int64 v30; // [rsp+80h] [rbp-F8h]
  __int64 v31; // [rsp+88h] [rbp-F0h]
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v35; // [rsp+120h] [rbp-58h] BYREF

  v25 = a4;
  v26 = a3;
  v30 = a3;
  v31 = a4;
  v22 = a5;
  v23 = a6;
  v10 = 1;
  v35 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = (struct _SURFOBJ **)ThreadCurrentObj;
  v27 = ThreadCurrentObj;
  v14 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v14;
  pco = (CLIPOBJ *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v13);
  v16 = psoDst[0];
  v28 = psoDst[0];
  v17 = psoSrc[0];
  v29 = psoSrc[0];
  if ( psoDst[0] && psoSrc[0] && v22 && v23 )
  {
    CaptureRECTL(&v23, &v34);
    CaptureRECTL(&v22, &v35);
    prclDst = v22;
    if ( bOrder(v22) )
    {
      prclSrc = v23;
      if ( bOrder(v23) )
      {
        pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v13, v20, &v16->sizlBitmap);
        v21 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, v25);
        v10 = (unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) && (unsigned int)bCheckXlate(v17, v21);
        if ( v10 )
          v10 = EngTransparentBlt(v16, v17, pco, v21, prclDst, prclSrc, iTransColor, ulReserved);
      }
    }
  }
  else
  {
    v10 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
  --*v14;
  return v10;
}
