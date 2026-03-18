/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02CB750
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2020657467__private_IsEnabledDeviceUsage @ 0x1C014054C (Feature_2020657467__private_IsEnabledDeviceUsage.c)
 *     EngStrokeAndFillPath @ 0x1C0289760 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C6C3C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6C90 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02C6D34 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C6FDC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02C7718 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C791C (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
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
  UMPDOBJ *v15; // r15
  SURFOBJ *v17; // r14
  PATHOBJ *v18; // rbx
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *pboStroke; // r12
  struct _BRUSHOBJ *pboFill; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  LINEATTRS *plineattrs; // r13
  unsigned __int64 v26; // rax
  PATHOBJ *v27; // r15
  PATHOBJ *v28; // r15
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxoa; // [rsp+58h] [rbp-200h]
  LINEATTRS *v32; // [rsp+60h] [rbp-1F8h] BYREF
  POINTL *pptlBrushOrg; // [rsp+68h] [rbp-1F0h] BYREF
  PATHOBJ *ppo; // [rsp+70h] [rbp-1E8h]
  __int64 v35; // [rsp+78h] [rbp-1E0h]
  struct _CLIPOBJ *v36; // [rsp+80h] [rbp-1D8h]
  BRUSHOBJ *v37; // [rsp+88h] [rbp-1D0h]
  struct _BRUSHOBJ *v38; // [rsp+90h] [rbp-1C8h]
  struct _POINTL v39; // [rsp+98h] [rbp-1C0h] BYREF
  struct UMPDOBJ *v40; // [rsp+A0h] [rbp-1B8h]
  char *v41; // [rsp+A8h] [rbp-1B0h]
  SURFOBJ *v42; // [rsp+B0h] [rbp-1A8h]
  __int64 v43; // [rsp+B8h] [rbp-1A0h]
  struct _BRUSHOBJ v44; // [rsp+C0h] [rbp-198h] BYREF
  struct _BRUSHOBJ v45; // [rsp+D8h] [rbp-180h] BYREF
  _LINEATTRS v46; // [rsp+F0h] [rbp-168h] BYREF
  SURFOBJ *pso[8]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v48[160]; // [rsp+160h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+200h] [rbp-58h]

  v43 = a4;
  v32 = a6;
  pptlBrushOrg = a8;
  v39 = 0LL;
  memset(&v46, 0, sizeof(v46));
  memset(&v44, 0, sizeof(v44));
  memset(&v45, 0, sizeof(v45));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v40 = ThreadCurrentObj;
  v35 = (__int64)ThreadCurrentObj + 436;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 109);
  else
    v35 = 436LL;
  v41 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v17 = pso[0];
  v42 = pso[0];
  v18 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v15, a2);
  ppo = v18;
  if ( v17 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, a3, &v17->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v36 = DDIOBJ;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v44);
  v37 = pboStroke;
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v45);
  v38 = pboFill;
  if ( v17 && pboStroke && pboFill && v18 && v32 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v39);
    v24 = bCaptureLINEATTRS(&v32, &v46, v22, v23);
    plineattrs = v32;
    if ( v24 )
    {
      v26 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v15, a4);
      pxoa = (XFORMOBJ *)v26;
      if ( (plineattrs->fl & 1) != 0 )
        v24 &= -(v26 != 0);
      if ( (unsigned int)Feature_2020657467__private_IsEnabledDeviceUsage() )
      {
        v27 = ppo;
        v24 = v24
           && (unsigned int)bCheckSurfacePath(v17, ppo, DDIOBJ)
           && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1);
        if ( v24 )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48, v17, DDIOBJ, 0LL);
          v24 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v48)
             && EngStrokeAndFillPath(
                  v17,
                  v27,
                  pco,
                  pxoa,
                  pboStroke,
                  plineattrs,
                  pboFill,
                  pptlBrushOrg,
                  mixFill,
                  flOptions);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48);
        }
      }
      else
      {
        v24 = v24
           && (v28 = ppo, (unsigned int)bCheckSurfacePath(v17, ppo, DDIOBJ))
           && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
           && EngStrokeAndFillPath(
                v17,
                v28,
                DDIOBJ,
                pxoa,
                pboStroke,
                plineattrs,
                pboFill,
                pptlBrushOrg,
                mixFill,
                flOptions);
      }
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v24 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*(_DWORD *)v35;
  return v24;
}
