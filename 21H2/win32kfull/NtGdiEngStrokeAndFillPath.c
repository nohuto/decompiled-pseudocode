/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02B3E30
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
 *     EngStrokeAndFillPath @ 0x1C014C2B0 (EngStrokeAndFillPath.c)
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

__int64 __fastcall NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v16; // r15
  PATHOBJ *v17; // rbx
  POINTL *DDIOBJ; // r14
  POINTL *pboStroke; // r12
  POINTL *pboFill; // rsi
  unsigned int v21; // ebx
  LINEATTRS *plineattrs; // r13
  unsigned __int64 v23; // rax
  PATHOBJ *v24; // rbx
  PATHOBJ *v25; // rbx
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxoa; // [rsp+58h] [rbp-200h]
  LINEATTRS *v29; // [rsp+60h] [rbp-1F8h] BYREF
  POINTL *pptlBrushOrg[4]; // [rsp+68h] [rbp-1F0h] BYREF
  PATHOBJ *ppo; // [rsp+88h] [rbp-1D0h]
  struct _POINTL v32; // [rsp+90h] [rbp-1C8h] BYREF
  struct UMPDOBJ *v33; // [rsp+98h] [rbp-1C0h]
  SURFOBJ *v34; // [rsp+A0h] [rbp-1B8h]
  __int64 v35; // [rsp+A8h] [rbp-1B0h]
  struct _BRUSHOBJ v36; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v37; // [rsp+C8h] [rbp-190h] BYREF
  struct _LINEATTRS v38; // [rsp+E0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v40[168]; // [rsp+150h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1F8h] [rbp-60h]

  v35 = a4;
  v29 = a6;
  pptlBrushOrg[0] = a8;
  v32 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v36, 0, sizeof(v36));
  memset(&v37, 0, sizeof(v37));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v33 = ThreadCurrentObj;
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
  v16 = pso[0];
  v34 = pso[0];
  v17 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
  ppo = v17;
  if ( v16 )
    DDIOBJ = (POINTL *)UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v16->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pptlBrushOrg[1] = DDIOBJ;
  pboStroke = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
  if ( !pboStroke )
    pboStroke = (POINTL *)CaptureAndFakeBRUSHOBJ(a5, &v36);
  pptlBrushOrg[2] = pboStroke;
  pboFill = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a7);
  if ( !pboFill )
    pboFill = (POINTL *)CaptureAndFakeBRUSHOBJ(a7, &v37);
  pptlBrushOrg[3] = pboFill;
  if ( v16 && pboStroke && pboFill && v17 && v29 && DDIOBJ && pptlBrushOrg[0] )
  {
    CapturePOINTL(pptlBrushOrg, &v32);
    v21 = bCaptureLINEATTRS(&v29, &v38);
    plineattrs = v29;
    if ( v21 )
    {
      v23 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a4);
      pxoa = (XFORMOBJ *)v23;
      if ( (plineattrs->fl & 1) != 0 )
        v21 &= -(v23 != 0);
      if ( (unsigned int)Feature_2356201784__private_IsEnabledDeviceUsage() )
      {
        if ( v21 )
        {
          v24 = ppo;
          if ( (unsigned int)bCheckSurfacePath(v16, ppo, (struct _CLIPOBJ *)DDIOBJ) )
          {
            if ( (((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->x == -1 )
            {
              ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40, v16, (struct _CLIPOBJ *)DDIOBJ, 0LL);
              v21 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v40)
                 && EngStrokeAndFillPath(
                      v16,
                      v24,
                      pco,
                      pxoa,
                      (BRUSHOBJ *)pboStroke,
                      plineattrs,
                      (BRUSHOBJ *)pboFill,
                      pptlBrushOrg[0],
                      mixFill,
                      flOptions);
              ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40);
              goto LABEL_42;
            }
          }
        }
      }
      else if ( v21 )
      {
        v25 = ppo;
        if ( (unsigned int)bCheckSurfacePath(v16, ppo, (struct _CLIPOBJ *)DDIOBJ) )
        {
          if ( (((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->x == -1 )
          {
            if ( EngStrokeAndFillPath(
                   v16,
                   v25,
                   (CLIPOBJ *)DDIOBJ,
                   pxoa,
                   (BRUSHOBJ *)pboStroke,
                   plineattrs,
                   (BRUSHOBJ *)pboFill,
                   pptlBrushOrg[0],
                   mixFill,
                   flOptions) )
            {
              v21 = 1;
              goto LABEL_42;
            }
          }
        }
      }
      v21 = 0;
LABEL_42:
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v21;
}
