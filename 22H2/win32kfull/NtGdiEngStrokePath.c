/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02B3980
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C0DC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013D8E4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokePath @ 0x1C0148F20 (EngStrokePath.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C014EA48 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2356201784__private_IsEnabledDeviceUsage @ 0x1C016CFCC (Feature_2356201784__private_IsEnabledDeviceUsage.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B117C (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B1540 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B1668 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v12; // rdi
  SURFOBJ *v14; // r15
  struct _PATHOBJ *v15; // r12
  POINTL *pbo; // rsi
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // r14
  struct _CLIPOBJ *v19; // rax
  XFORMOBJ *v20; // rax
  CLIPOBJ *v21; // rbx
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *DDIOBJ; // [rsp+40h] [rbp-1E8h] BYREF
  struct _CLIPOBJ *v24; // [rsp+48h] [rbp-1E0h]
  XFORMOBJ *pxo; // [rsp+50h] [rbp-1D8h]
  POINTL *pptlBrushOrg[2]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _POINTL v27; // [rsp+68h] [rbp-1C0h] BYREF
  struct UMPDOBJ *v28; // [rsp+70h] [rbp-1B8h]
  SURFOBJ *v29; // [rsp+78h] [rbp-1B0h]
  struct _PATHOBJ *v30; // [rsp+80h] [rbp-1A8h]
  struct _CLIPOBJ *v31; // [rsp+88h] [rbp-1A0h]
  XFORMOBJ *v32; // [rsp+90h] [rbp-198h]
  struct _BRUSHOBJ v33; // [rsp+98h] [rbp-190h] BYREF
  struct _LINEATTRS v34; // [rsp+B0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-148h] BYREF
  _BYTE v36[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  pxo = a4;
  v24 = a3;
  v31 = a3;
  v32 = a4;
  pptlBrushOrg[0] = a6;
  DDIOBJ = a7;
  v27 = 0LL;
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  v28 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v14 = pso[0];
  v29 = pso[0];
  v15 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
  v30 = v15;
  pbo = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
  if ( !pbo )
    pbo = (POINTL *)CaptureAndFakeBRUSHOBJ(a5, &v33);
  pptlBrushOrg[1] = pbo;
  if ( !v14 || !pbo || !v15 || !DDIOBJ || !pptlBrushOrg[0] )
  {
    v17 = 0;
    goto LABEL_42;
  }
  CapturePOINTL(pptlBrushOrg, &v27);
  v17 = bCaptureLINEATTRS(&DDIOBJ, &v34);
  plineattrs = DDIOBJ;
  if ( !v17 )
    goto LABEL_18;
  v19 = v24;
  if ( (*((_DWORD *)v12 + 103) & 0x100) != 0 && (DDIOBJ->fl & 1) != 0 && !v24 )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
        1839);
    v17 = 0;
LABEL_18:
    v19 = v24;
  }
  if ( v17 )
  {
    DDIOBJ = (LINEATTRS *)UMPDOBJ::GetDDIOBJ(v12, v19, &v14->sizlBitmap);
    v20 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, (__int64)pxo);
    pxo = v20;
    if ( (plineattrs->fl & 1) != 0 )
      v17 &= -(v20 != 0LL);
    if ( (unsigned int)Feature_2356201784__private_IsEnabledDeviceUsage() )
    {
      if ( v17
        && (unsigned int)bCheckSurfacePath(v14, v15, (struct _CLIPOBJ *)DDIOBJ)
        && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->x == -1) )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v36, v14, (struct _CLIPOBJ *)DDIOBJ, 0LL);
        v17 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v36)
           && EngStrokePath(v14, v15, pco, pxo, (BRUSHOBJ *)pbo, pptlBrushOrg[0], plineattrs, mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v36);
        goto LABEL_39;
      }
    }
    else if ( v17 )
    {
      v21 = (CLIPOBJ *)DDIOBJ;
      if ( (unsigned int)bCheckSurfacePath(v14, v15, (struct _CLIPOBJ *)DDIOBJ) )
      {
        if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->x == -1 )
        {
          if ( EngStrokePath(v14, v15, v21, pxo, (BRUSHOBJ *)pbo, pptlBrushOrg[0], plineattrs, mix) )
          {
            v17 = 1;
            goto LABEL_39;
          }
        }
      }
    }
    v17 = 0;
LABEL_39:
    pstyle = plineattrs->pstyle;
    if ( pstyle )
      Win32FreePool(pstyle);
  }
LABEL_42:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v12 + 105);
  return v17;
}
