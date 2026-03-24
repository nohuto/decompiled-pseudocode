/*
 * XREFs of NtGdiEngLineTo @ 0x1C02B2C70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C0DC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013D8E4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngLineTo @ 0x1C0149240 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     Feature_2596596024__private_IsEnabledDeviceUsage @ 0x1C0169D58 (Feature_2596596024__private_IsEnabledDeviceUsage.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
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
  UMPDOBJ *v14; // rdi
  SURFOBJ *v16; // r14
  RECTL *v17; // rsi
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v19; // ebx
  RECTL *prclBounds[2]; // [rsp+58h] [rbp-1B0h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-1A0h]
  struct UMPDOBJ *v22; // [rsp+70h] [rbp-198h]
  SURFOBJ *v23; // [rsp+78h] [rbp-190h]
  struct _CLIPOBJ *v24; // [rsp+80h] [rbp-188h]
  struct _BRUSHOBJ v25; // [rsp+88h] [rbp-180h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-168h] BYREF
  struct _RECTL v27; // [rsp+E0h] [rbp-128h] BYREF
  struct _RECTL v28; // [rsp+F0h] [rbp-118h] BYREF
  _BYTE v29[168]; // [rsp+100h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1A8h] [rbp-60h]

  v21 = a2;
  v24 = a2;
  prclBounds[0] = a8;
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
  v17 = (RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
  if ( !v17 )
    v17 = (RECTL *)CaptureAndFakeBRUSHOBJ(a3, &v25);
  prclBounds[1] = v17;
  if ( v16 && v17 )
  {
    CaptureRECTL(prclBounds, &v28);
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v21, &v16->sizlBitmap);
    v19 = bCheckSurfaceRect(v16, &v27, DDIOBJ);
    if ( v19 )
    {
      if ( (unsigned int)Feature_2596596024__private_IsEnabledDeviceUsage() )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29, v16, DDIOBJ, 0LL);
        v19 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v29)
           && EngLineTo(v16, pco, (BRUSHOBJ *)v17, a4, y1, x2, y2, prclBounds[0], mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29);
      }
      else
      {
        v19 = EngLineTo(v16, DDIOBJ, (BRUSHOBJ *)v17, a4, y1, x2, y2, prclBounds[0], mix);
      }
    }
  }
  else
  {
    v19 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v14 + 105);
  return v19;
}
