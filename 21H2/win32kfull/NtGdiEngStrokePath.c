/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02B2830
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
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C013B438 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B03D8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B079C (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B08D4 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokePath(struct _SURFOBJ *a1, __int64 a2, struct _CLIPOBJ *a3, __int64 a4, struct _BRUSHOBJ *a5, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rdi
  SURFOBJ *v12; // r15
  PATHOBJ *v13; // r12
  struct _BRUSHOBJ *pbo; // r14
  unsigned int v15; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r13
  unsigned __int64 v18; // rax
  XFORMOBJ *v19; // r11
  PFLOAT_LONG pstyle; // rcx
  struct _POINTL v21; // [rsp+40h] [rbp-C8h] BYREF
  struct UMPDOBJ *v22; // [rsp+48h] [rbp-C0h]
  struct _BRUSHOBJ v23; // [rsp+50h] [rbp-B8h] BYREF
  struct _LINEATTRS v24; // [rsp+68h] [rbp-A0h] BYREF
  SURFOBJ *pso[15]; // [rsp+90h] [rbp-78h] BYREF
  POINTL *pptlBrushOrg; // [rsp+138h] [rbp+30h] BYREF
  va_list va; // [rsp+138h] [rbp+30h]
  LINEATTRS *v29; // [rsp+140h] [rbp+38h] BYREF
  va_list va1; // [rsp+140h] [rbp+38h]
  __int64 mix; // [rsp+148h] [rbp+40h]
  va_list va2; // [rsp+150h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  pptlBrushOrg = va_arg(va1, POINTL *);
  va_copy(va2, va1);
  v29 = va_arg(va2, LINEATTRS *);
  mix = va_arg(va2, _QWORD);
  v21 = 0LL;
  memset(&v24, 0, sizeof(v24));
  memset(&v23, 0, sizeof(v23));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v12 = pso[0];
  v13 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v10, a2);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v23);
  if ( v12 && pbo && v13 && v29 && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v21);
    v15 = bCaptureLINEATTRS((struct _LINEATTRS **)va1, &v24);
    plineattrs = v29;
    if ( v15 )
    {
      if ( (*((_DWORD *)v10 + 103) & 0x100) != 0 && (v29->fl & 1) != 0 && !a3 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1776);
        v15 = 0;
      }
      if ( v15 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a3, &v12->sizlBitmap);
        v18 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v10, a4);
        if ( (plineattrs->fl & 1) != 0 )
          v15 &= -(v18 != 0);
        v15 = v15
           && (unsigned int)bCheckSurfacePath(v12, v13, DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
           && EngStrokePath(v12, v13, DDIOBJ, v19, pbo, pptlBrushOrg, plineattrs, mix);
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  else
  {
    v15 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v10 + 105);
  return v15;
}
