/*
 * XREFs of NtGdiEngLineTo @ 0x1C02CC710
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C9400 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C97A0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C9940 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C99BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02CA19C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
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
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v14; // r15
  _DWORD *v15; // rbx
  SURFOBJ *v17; // r14
  BRUSHOBJ *v18; // rsi
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v20; // edi
  RECTL *prclBounds; // [rsp+60h] [rbp-F8h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-F0h]
  struct _SURFOBJ **v23; // [rsp+70h] [rbp-E8h]
  char *v24; // [rsp+78h] [rbp-E0h]
  SURFOBJ *v25; // [rsp+80h] [rbp-D8h]
  struct _CLIPOBJ *v26; // [rsp+88h] [rbp-D0h]
  struct _BRUSHOBJ v27; // [rsp+90h] [rbp-C8h] BYREF
  SURFOBJ *pso[8]; // [rsp+B0h] [rbp-A8h] BYREF
  struct _RECTL v29; // [rsp+F0h] [rbp-68h] BYREF
  struct _RECTL v30; // [rsp+100h] [rbp-58h] BYREF

  v22 = a2;
  v26 = a2;
  prclBounds = a8;
  v30 = 0LL;
  v29.left = a4;
  v29.top = y1;
  v29.right = x2;
  v29.bottom = y2;
  memset(&v27, 0, sizeof(v27));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (UMPDOBJ *)ThreadCurrentObj;
  v23 = ThreadCurrentObj;
  v15 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v15;
  v24 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v17 = pso[0];
  v25 = pso[0];
  v18 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(a3, &v27);
  if ( v17 && v18 )
  {
    CaptureRECTL(&prclBounds, &v30);
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v22, &v17->sizlBitmap);
    v20 = bCheckSurfaceRect(v17, &v29, DDIOBJ);
    if ( v20 )
      v20 = EngLineTo(v17, DDIOBJ, v18, a4, y1, x2, y2, prclBounds, mix);
  }
  else
  {
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v15;
  return v20;
}
