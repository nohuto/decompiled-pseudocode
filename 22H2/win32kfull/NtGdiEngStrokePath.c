/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02CBBC0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000D350 (EngStrokePath.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2020657467__private_IsEnabledDeviceUsage @ 0x1C014054C (Feature_2020657467__private_IsEnabledDeviceUsage.c)
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
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v11; // r13
  _DWORD *v12; // r15
  SURFOBJ *v14; // r14
  struct _BRUSHOBJ *v15; // rax
  PATHOBJ *v16; // r9
  BRUSHOBJ *pbo; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *v22; // rdx
  XFORMOBJ *v23; // rax
  PATHOBJ *v24; // r13
  CLIPOBJ *v25; // rbx
  PATHOBJ *v26; // r13
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *DDIOBJ; // [rsp+40h] [rbp-1D8h] BYREF
  struct _CLIPOBJ *v29; // [rsp+48h] [rbp-1D0h]
  XFORMOBJ *pxo; // [rsp+50h] [rbp-1C8h]
  PATHOBJ *ppo; // [rsp+58h] [rbp-1C0h]
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-1B0h]
  struct _POINTL v34; // [rsp+70h] [rbp-1A8h] BYREF
  struct _SURFOBJ **v35; // [rsp+78h] [rbp-1A0h]
  SURFOBJ *v36; // [rsp+80h] [rbp-198h]
  struct _CLIPOBJ *v37; // [rsp+88h] [rbp-190h]
  char *v38; // [rsp+90h] [rbp-188h]
  XFORMOBJ *v39; // [rsp+98h] [rbp-180h]
  struct _BRUSHOBJ v40; // [rsp+A0h] [rbp-178h] BYREF
  struct _LINEATTRS v41; // [rsp+B8h] [rbp-160h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v43[160]; // [rsp+120h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1C0h] [rbp-58h]

  pxo = a4;
  v29 = a3;
  v33 = a2;
  v37 = a3;
  v39 = a4;
  pptlBrushOrg = a6;
  DDIOBJ = a7;
  v34 = 0LL;
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  v35 = ThreadCurrentObj;
  v12 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v12;
  v38 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v14 = pso[0];
  v36 = pso[0];
  ppo = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v11, v33);
  v15 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v11, (__int64)a5);
  pbo = v15;
  if ( !v15 )
  {
    v15 = CaptureAndFakeBRUSHOBJ(a5, &v40);
    pbo = v15;
    v16 = ppo;
  }
  v33 = (__int64)v15;
  if ( v14 && pbo && v16 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v34);
    v20 = bCaptureLINEATTRS(&DDIOBJ, &v41, v18, v19);
    plineattrs = DDIOBJ;
    if ( v20 )
    {
      v22 = v29;
      if ( (*((_DWORD *)v11 + 107) & 0x100) != 0 && (DDIOBJ->fl & 1) != 0 )
        v20 &= -(v29 != 0LL);
    }
    else
    {
      v22 = v29;
    }
    if ( v20 )
    {
      DDIOBJ = (LINEATTRS *)UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v11, v22, &v14->sizlBitmap);
      v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v11, (__int64)pxo);
      pxo = v23;
      if ( (plineattrs->fl & 1) != 0 )
        v20 &= -(v23 != 0LL);
      if ( (unsigned int)Feature_2020657467__private_IsEnabledDeviceUsage() )
      {
        v24 = ppo;
        v20 = v20
           && (unsigned int)bCheckSurfacePath(v14, ppo, (struct _CLIPOBJ *)DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1);
        if ( v20 )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v14, (struct _CLIPOBJ *)DDIOBJ, 0LL);
          v20 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
             && EngStrokePath(v14, v24, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
        }
      }
      else
      {
        v20 = v20
           && (v25 = (CLIPOBJ *)DDIOBJ, v26 = ppo, (unsigned int)bCheckSurfacePath(v14, ppo, (struct _CLIPOBJ *)DDIOBJ))
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
           && EngStrokePath(v14, v26, v25, pxo, pbo, pptlBrushOrg, plineattrs, mix);
      }
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v12;
  return v20;
}
