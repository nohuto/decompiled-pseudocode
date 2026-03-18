/*
 * XREFs of NtGdiEngFillPath @ 0x1C02B16C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0126D9C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     EngFillPath @ 0x1C0134C30 (EngFillPath.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B03D8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B08D4 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rdi
  SURFOBJ *v15; // r14
  PATHOBJ *v16; // r15
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _BRUSHOBJ *v18; // r11
  BRUSHOBJ *v19; // r11
  BOOL v20; // [rsp+40h] [rbp-98h]
  struct _POINTL v21; // [rsp+48h] [rbp-90h] BYREF
  struct UMPDOBJ *v22; // [rsp+50h] [rbp-88h]
  struct _BRUSHOBJ v23; // [rsp+58h] [rbp-80h] BYREF
  SURFOBJ *pso[13]; // [rsp+70h] [rbp-68h] BYREF

  v20 = 0;
  v21 = 0LL;
  memset(&v23, 0, sizeof(v23));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v15 = pso[0];
  v16 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
  if ( v15 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v15->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v18 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(a4, &v23);
  if ( v15 && v18 && v16 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v21);
    v20 = (unsigned int)bCheckSurfacePath(v15, v16, DDIOBJ)
       && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1)
       && EngFillPath(v15, v16, DDIOBJ, v19, pptlBrushOrg, mix, flOptions);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v13 + 105);
  return v20;
}
