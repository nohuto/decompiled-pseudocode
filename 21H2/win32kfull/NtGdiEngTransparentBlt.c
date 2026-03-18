/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02B2B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C012912C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v14; // rbx
  SURFOBJ *v16; // r14
  SURFOBJ *v17; // rsi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v21; // rdi
  RECTL *v22; // [rsp+40h] [rbp-128h] BYREF
  RECTL *v23; // [rsp+48h] [rbp-120h] BYREF
  __int64 v24; // [rsp+50h] [rbp-118h]
  struct UMPDOBJ *v25; // [rsp+58h] [rbp-110h]
  SURFOBJ *v26; // [rsp+60h] [rbp-108h]
  SURFOBJ *v27; // [rsp+68h] [rbp-100h]
  struct _CLIPOBJ *v28; // [rsp+70h] [rbp-F8h]
  __int64 v29; // [rsp+78h] [rbp-F0h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v32; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v33; // [rsp+110h] [rbp-58h] BYREF

  v24 = a4;
  v28 = a3;
  v29 = a4;
  v23 = a5;
  v22 = a6;
  v11 = 1;
  v33 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (__int64)ThreadCurrentObj;
  v25 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v14);
  v16 = psoDst[0];
  v26 = psoDst[0];
  v17 = psoSrc[0];
  v27 = psoSrc[0];
  if ( !psoDst[0] || !psoSrc[0] || !a5 || !v22 )
    goto LABEL_13;
  CaptureRECTL(&v22, &v32);
  CaptureRECTL(&v23, &v33);
  prclDst = v23;
  if ( !bOrder(v23) )
    goto LABEL_14;
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_14;
  DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, a3, &v16->sizlBitmap);
  v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, v24);
  if ( (unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) && (unsigned int)bCheckXlate(v17, v21) )
    v11 = EngTransparentBlt(v16, v17, DDIOBJ, v21, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_13:
    v11 = 0;
LABEL_14:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
  --*(_DWORD *)(v14 + 420);
  return v11;
}
