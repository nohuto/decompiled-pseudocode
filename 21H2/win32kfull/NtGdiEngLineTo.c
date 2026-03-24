/*
 * XREFs of NtGdiEngLineTo @ 0x1C02B3520
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C588 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013D1EC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013DDC8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngLineTo @ 0x1C01497F0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     Feature_2596596024__private_IsEnabledDeviceUsage @ 0x1C016A5B8 (Feature_2596596024__private_IsEnabledDeviceUsage.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v15; // r14
  RECTL *v16; // rsi
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v18; // ebx
  RECTL *prclBounds[2]; // [rsp+58h] [rbp-1B0h] BYREF
  struct _CLIPOBJ *v20; // [rsp+68h] [rbp-1A0h]
  struct UMPDOBJ *v21; // [rsp+70h] [rbp-198h]
  SURFOBJ *v22; // [rsp+78h] [rbp-190h]
  struct _CLIPOBJ *v23; // [rsp+80h] [rbp-188h]
  struct _BRUSHOBJ v24; // [rsp+88h] [rbp-180h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-168h] BYREF
  struct _RECTL v26; // [rsp+E0h] [rbp-128h] BYREF
  struct _RECTL v27; // [rsp+F0h] [rbp-118h] BYREF
  _BYTE v28[168]; // [rsp+100h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1A8h] [rbp-60h]

  v20 = a2;
  v23 = a2;
  prclBounds[0] = a8;
  v27 = 0LL;
  v26.left = a4;
  v26.top = y1;
  v26.right = x2;
  v26.bottom = y2;
  memset(&v24, 0, sizeof(v24));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v21 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v15 = pso[0];
  v22 = pso[0];
  v16 = (RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a3);
  if ( !v16 )
    v16 = (RECTL *)CaptureAndFakeBRUSHOBJ(a3, &v24);
  prclBounds[1] = v16;
  if ( v15 && v16 )
  {
    CaptureRECTL(prclBounds, &v27);
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v20, &v15->sizlBitmap);
    v18 = bCheckSurfaceRect(v15, &v26, DDIOBJ);
    if ( v18 )
    {
      if ( (unsigned int)Feature_2596596024__private_IsEnabledDeviceUsage() )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v28, v15, DDIOBJ, 0LL);
        v18 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v28)
           && EngLineTo(v15, pco, (BRUSHOBJ *)v16, a4, y1, x2, y2, prclBounds[0], mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v28);
      }
      else
      {
        v18 = EngLineTo(v15, DDIOBJ, (BRUSHOBJ *)v16, a4, y1, x2, y2, prclBounds[0], mix);
      }
    }
  }
  else
  {
    v18 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v18;
}
