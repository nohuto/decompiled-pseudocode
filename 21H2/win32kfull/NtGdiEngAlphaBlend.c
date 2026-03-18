/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02B0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C01290D4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C012912C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02B0330 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v12; // rbx
  CLIPOBJ *v14; // rax
  BLENDOBJ *pBlendObj; // r14
  SURFOBJ *v16; // r15
  SURFOBJ *v17; // rsi
  RECTL *prclSrc; // r12
  RECTL *prclDest; // r13
  struct _CLIPOBJ *v20; // rdx
  struct _XLATEOBJ *v21; // rdi
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
  SURFOBJ *psoDest[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v35; // [rsp+120h] [rbp-58h] BYREF

  v25 = a4;
  v26 = a3;
  v30 = a3;
  v31 = a4;
  v23 = a5;
  v22 = a6;
  v9 = 1;
  v35 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = (__int64)ThreadCurrentObj;
  v27 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v12);
  v14 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>(v12, a7);
  pBlendObj = (BLENDOBJ *)v14;
  pco = v14;
  v16 = psoDest[0];
  v28 = psoDest[0];
  v17 = psoSrc[0];
  v29 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || !v14 || !v23 || !v22 )
    goto LABEL_14;
  CaptureRECTL(&v22, &v34);
  CaptureRECTL(&v23, &v35);
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_15;
  prclDest = v23;
  if ( !bOrder(v23) )
    goto LABEL_15;
  pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, v20, &v16->sizlBitmap);
  v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, v25);
  if ( (unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) && (unsigned int)bCheckXlate(v17, v21) )
    v9 = EngAlphaBlend(v16, v17, pco, v21, prclDest, prclSrc, pBlendObj);
  else
LABEL_14:
    v9 = 0;
LABEL_15:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*(_DWORD *)(v12 + 420);
  return v9;
}
