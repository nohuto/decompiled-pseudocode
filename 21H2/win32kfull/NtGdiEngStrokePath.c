/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02B4290
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013C588 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013DDC8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokePath @ 0x1C01494D0 (EngStrokePath.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C014F000 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2356201784__private_IsEnabledDeviceUsage @ 0x1C016D90C (Feature_2356201784__private_IsEnabledDeviceUsage.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B183C (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B1C08 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B1D30 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v13; // r15
  PATHOBJ *v14; // r12
  POINTL *pbo; // rsi
  unsigned int v16; // ebx
  LINEATTRS *plineattrs; // r14
  unsigned __int64 v18; // rax
  PFLOAT_LONG pstyle; // rcx
  struct _CLIPOBJ *DDIOBJ; // [rsp+40h] [rbp-1E8h]
  XFORMOBJ *pxoa; // [rsp+48h] [rbp-1E0h]
  LINEATTRS *v24; // [rsp+50h] [rbp-1D8h] BYREF
  POINTL *pptlBrushOrg[2]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _POINTL v26; // [rsp+68h] [rbp-1C0h] BYREF
  struct UMPDOBJ *v27; // [rsp+70h] [rbp-1B8h]
  SURFOBJ *v28; // [rsp+78h] [rbp-1B0h]
  PATHOBJ *v29; // [rsp+80h] [rbp-1A8h]
  struct _CLIPOBJ *v30; // [rsp+88h] [rbp-1A0h]
  __int64 v31; // [rsp+90h] [rbp-198h]
  struct _BRUSHOBJ v32; // [rsp+98h] [rbp-190h] BYREF
  struct _LINEATTRS v33; // [rsp+B0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-148h] BYREF
  _BYTE v35[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v30 = a3;
  v31 = a4;
  pptlBrushOrg[0] = a6;
  v24 = a7;
  v26 = 0LL;
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v27 = ThreadCurrentObj;
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
  v13 = pso[0];
  v28 = pso[0];
  v14 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
  v29 = v14;
  pbo = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
  if ( !pbo )
    pbo = (POINTL *)CaptureAndFakeBRUSHOBJ(a5, &v32);
  pptlBrushOrg[1] = pbo;
  if ( v13 && pbo && v14 && v24 && pptlBrushOrg[0] )
  {
    CapturePOINTL(pptlBrushOrg, &v26);
    v16 = bCaptureLINEATTRS(&v24, &v33);
    plineattrs = v24;
    if ( !v16 )
      goto LABEL_45;
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 && (v24->fl & 1) != 0 && !a3 )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
          1874);
      v16 = 0;
    }
    if ( !v16 )
      goto LABEL_45;
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v13->sizlBitmap);
    v18 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a4);
    pxoa = (XFORMOBJ *)v18;
    if ( (plineattrs->fl & 1) != 0 )
      v16 &= -(v18 != 0);
    if ( (unsigned int)Feature_2356201784__private_IsEnabledDeviceUsage() )
    {
      if ( v16
        && (unsigned int)bCheckSurfacePath(v13, v14, DDIOBJ)
        && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->x == -1) )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v35, v13, DDIOBJ, 0LL);
        v16 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v35)
           && EngStrokePath(v13, v14, pco, pxoa, (BRUSHOBJ *)pbo, pptlBrushOrg[0], plineattrs, mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v35);
        goto LABEL_42;
      }
    }
    else if ( v16
           && (unsigned int)bCheckSurfacePath(v13, v14, DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->x == -1)
           && EngStrokePath(v13, v14, DDIOBJ, pxoa, (BRUSHOBJ *)pbo, pptlBrushOrg[0], plineattrs, mix) )
    {
      v16 = 1;
      goto LABEL_42;
    }
    v16 = 0;
LABEL_42:
    pstyle = plineattrs->pstyle;
    if ( pstyle )
      Win32FreePool(pstyle);
    goto LABEL_45;
  }
  v16 = 0;
LABEL_45:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v16;
}
