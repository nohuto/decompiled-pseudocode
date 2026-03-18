/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02B2510
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
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C013B438 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B03D8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B079C (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B08D4 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v12; // rdi
  SURFOBJ *v14; // r13
  unsigned __int64 v15; // rbx
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  struct _BRUSHOBJ *pboFill; // rsi
  unsigned int v19; // ebx
  LINEATTRS *plineattrs; // r12
  unsigned __int64 v21; // rax
  PATHOBJ *v22; // r11
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxo; // [rsp+58h] [rbp-E0h]
  struct _POINTL v25; // [rsp+60h] [rbp-D8h] BYREF
  struct _BRUSHOBJ v26; // [rsp+68h] [rbp-D0h] BYREF
  struct _BRUSHOBJ v27; // [rsp+80h] [rbp-B8h] BYREF
  struct _LINEATTRS v28; // [rsp+98h] [rbp-A0h] BYREF
  SURFOBJ *pso[15]; // [rsp+C0h] [rbp-78h] BYREF
  struct _PATHOBJ *v30; // [rsp+148h] [rbp+10h]
  POINTL *pptlBrushOrg; // [rsp+178h] [rbp+40h] BYREF
  va_list va; // [rsp+178h] [rbp+40h]
  __int64 mixFill; // [rsp+180h] [rbp+48h]
  __int64 flOptions; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  pptlBrushOrg = va_arg(va1, POINTL *);
  mixFill = va_arg(va1, _QWORD);
  flOptions = va_arg(va1, _QWORD);
  v25 = 0LL;
  memset(&v28, 0, sizeof(v28));
  memset(&v26, 0, sizeof(v26));
  memset(&v27, 0, sizeof(v27));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v14 = pso[0];
  v15 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
  v30 = (struct _PATHOBJ *)v15;
  if ( v14 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, a3, &v14->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v26);
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v27);
  a7 = pboFill;
  if ( v14 && pboStroke && pboFill && v15 && a6 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v25);
    v19 = bCaptureLINEATTRS(&a6, &v28);
    plineattrs = a6;
    if ( v19 )
    {
      v21 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, a4);
      pxo = (XFORMOBJ *)v21;
      if ( (plineattrs->fl & 1) != 0 )
        v19 &= -(v21 != 0);
      v19 = v19
         && (unsigned int)bCheckSurfacePath(v14, v30, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
         && EngStrokeAndFillPath(
              v14,
              v22,
              DDIOBJ,
              pxo,
              pboStroke,
              plineattrs,
              pboFill,
              pptlBrushOrg,
              mixFill,
              flOptions);
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v19 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v12 + 105);
  return v19;
}
