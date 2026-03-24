/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02B3540
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
 *     EngStrokeAndFillPath @ 0x1C014BD00 (EngStrokeAndFillPath.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v15; // rdi
  SURFOBJ *v17; // r15
  PATHOBJ *v18; // rbx
  POINTL *DDIOBJ; // r14
  POINTL *pboStroke; // r12
  POINTL *pboFill; // rsi
  unsigned int v22; // ebx
  LINEATTRS *plineattrs; // r13
  unsigned __int64 v24; // rax
  PATHOBJ *v25; // rbx
  PATHOBJ *v26; // rbx
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxoa; // [rsp+58h] [rbp-200h]
  LINEATTRS *v30; // [rsp+60h] [rbp-1F8h] BYREF
  POINTL *pptlBrushOrg[4]; // [rsp+68h] [rbp-1F0h] BYREF
  PATHOBJ *ppo; // [rsp+88h] [rbp-1D0h]
  struct _POINTL v33; // [rsp+90h] [rbp-1C8h] BYREF
  struct UMPDOBJ *v34; // [rsp+98h] [rbp-1C0h]
  SURFOBJ *v35; // [rsp+A0h] [rbp-1B8h]
  __int64 v36; // [rsp+A8h] [rbp-1B0h]
  struct _BRUSHOBJ v37; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v38; // [rsp+C8h] [rbp-190h] BYREF
  struct _LINEATTRS v39; // [rsp+E0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v41[168]; // [rsp+150h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1F8h] [rbp-60h]

  v36 = a4;
  v30 = a6;
  pptlBrushOrg[0] = a8;
  v33 = 0LL;
  memset(&v39, 0, sizeof(v39));
  memset(&v37, 0, sizeof(v37));
  memset(&v38, 0, sizeof(v38));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v17 = pso[0];
  v35 = pso[0];
  v18 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v15, a2);
  ppo = v18;
  if ( v17 )
    DDIOBJ = (POINTL *)UMPDOBJ::GetDDIOBJ(v15, a3, &v17->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pptlBrushOrg[1] = DDIOBJ;
  pboStroke = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a5);
  if ( !pboStroke )
    pboStroke = (POINTL *)CaptureAndFakeBRUSHOBJ(a5, &v37);
  pptlBrushOrg[2] = pboStroke;
  pboFill = (POINTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a7);
  if ( !pboFill )
    pboFill = (POINTL *)CaptureAndFakeBRUSHOBJ(a7, &v38);
  pptlBrushOrg[3] = pboFill;
  if ( v17 && pboStroke && pboFill && v18 && v30 && DDIOBJ && pptlBrushOrg[0] )
  {
    CapturePOINTL(pptlBrushOrg, &v33);
    v22 = bCaptureLINEATTRS(&v30, &v39);
    plineattrs = v30;
    if ( v22 )
    {
      v24 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v15, a4);
      pxoa = (XFORMOBJ *)v24;
      if ( (plineattrs->fl & 1) != 0 )
        v22 &= -(v24 != 0);
      if ( (unsigned int)Feature_2356201784__private_IsEnabledDeviceUsage() )
      {
        if ( v22 )
        {
          v25 = ppo;
          if ( (unsigned int)bCheckSurfacePath(v17, ppo, (struct _CLIPOBJ *)DDIOBJ) )
          {
            if ( (((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->x == -1 )
            {
              ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41, v17, (struct _CLIPOBJ *)DDIOBJ, 0LL);
              v22 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v41)
                 && EngStrokeAndFillPath(
                      v17,
                      v25,
                      pco,
                      pxoa,
                      (BRUSHOBJ *)pboStroke,
                      plineattrs,
                      (BRUSHOBJ *)pboFill,
                      pptlBrushOrg[0],
                      mixFill,
                      flOptions);
              ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41);
              goto LABEL_38;
            }
          }
        }
      }
      else if ( v22 )
      {
        v26 = ppo;
        if ( (unsigned int)bCheckSurfacePath(v17, ppo, (struct _CLIPOBJ *)DDIOBJ) )
        {
          if ( (((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->x == -1 )
          {
            if ( EngStrokeAndFillPath(
                   v17,
                   v26,
                   (CLIPOBJ *)DDIOBJ,
                   pxoa,
                   (BRUSHOBJ *)pboStroke,
                   plineattrs,
                   (BRUSHOBJ *)pboFill,
                   pptlBrushOrg[0],
                   mixFill,
                   flOptions) )
            {
              v22 = 1;
              goto LABEL_38;
            }
          }
        }
      }
      v22 = 0;
LABEL_38:
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v22 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*((_DWORD *)v15 + 105);
  return v22;
}
