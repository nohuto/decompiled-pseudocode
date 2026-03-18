/*
 * XREFs of NtGdiEngLineTo @ 0x1C02B1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0126D9C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1C01338B0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v14; // rbx
  SURFOBJ *v16; // r14
  BRUSHOBJ *v17; // rsi
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v19; // edi
  RECTL *prclBounds; // [rsp+60h] [rbp-E8h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-E0h]
  struct UMPDOBJ *v22; // [rsp+70h] [rbp-D8h]
  SURFOBJ *v23; // [rsp+78h] [rbp-D0h]
  struct _CLIPOBJ *v24; // [rsp+80h] [rbp-C8h]
  struct _BRUSHOBJ v25; // [rsp+88h] [rbp-C0h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-A8h] BYREF
  struct _RECTL v27; // [rsp+E0h] [rbp-68h] BYREF
  struct _RECTL v28; // [rsp+F0h] [rbp-58h] BYREF

  v21 = a2;
  v24 = a2;
  prclBounds = a8;
  v28 = 0LL;
  v27.left = a4;
  v27.top = y1;
  v27.right = x2;
  v27.bottom = y2;
  memset(&v25, 0, sizeof(v25));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v16 = pso[0];
  v23 = pso[0];
  v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
  if ( !v17 )
    v17 = CaptureAndFakeBRUSHOBJ(a3, &v25);
  if ( v16 && v17 )
  {
    CaptureRECTL(&prclBounds, &v28);
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v21, &v16->sizlBitmap);
    v19 = bCheckSurfaceRect(v16, &v27, DDIOBJ);
    if ( v19 )
      v19 = EngLineTo(v16, DDIOBJ, v17, a4, y1, x2, y2, prclBounds, mix);
  }
  else
  {
    v19 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v14 + 105);
  return v19;
}
