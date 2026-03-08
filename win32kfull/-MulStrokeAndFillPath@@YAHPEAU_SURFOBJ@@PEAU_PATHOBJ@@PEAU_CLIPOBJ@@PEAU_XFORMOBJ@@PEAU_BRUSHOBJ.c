/*
 * XREFs of ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02B3560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C014E0E2 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C014E250 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C014EF4E (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1C028BFF0 (EngStrokeAndFillPath.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02B0A64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     OffStrokeAndFillPath @ 0x1C02EAC6C (OffStrokeAndFillPath.c)
 */

__int64 __fastcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  unsigned int v12; // esi
  DHPDEV dhpdev; // rdi
  FLOAT_LONG v14; // ebx
  struct _SURFOBJ *v15; // rcx
  int i; // eax
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v21[12]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v22[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v23[56]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v24; // [rsp+118h] [rbp+18h]
  __int64 v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  __int64 v27; // [rsp+130h] [rbp+30h]
  _BYTE v28[88]; // [rsp+140h] [rbp+40h] BYREF
  SURFOBJ *pso; // [rsp+198h] [rbp+98h]
  struct _RECTFX prectfx; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v31; // [rsp+1C0h] [rbp+C0h] BYREF

  v12 = 1;
  dhpdev = a1->dhpdev;
  LODWORD(v14.e) = plineattrs->elStyleState;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v28, v15);
    v12 = EngStrokeAndFillPath(pso, ppo, a3, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v28);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v21,
    pboStroke,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( !v21[0] )
    return 0LL;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v22,
    pboFill,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v22[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v31.left = prectfx.xLeft >> 4;
  v31.top = prectfx.yTop >> 4;
  v31.right = (prectfx.xRight >> 4) + 2;
  v31.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v23, a1, a3, &v31); i; i = MSURF::bNextSurface((MSURF *)v23) )
  {
    plineattrs->elStyleState = v14;
    PATHOBJ_vEnumStart(ppo);
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v21, v24, (struct SURFACE *)(v25 - 24));
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v22, v24, (struct SURFACE *)(v25 - 24));
    if ( (*(_DWORD *)(v25 + 88) & 0x80u) == 0 )
      v17 = EngStrokeAndFillPath;
    else
      v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v24 + 7) + 2792LL);
    v12 &= OffStrokeAndFillPath(
             v17,
             v27,
             v25,
             ppo,
             v26,
             a4,
             pboStroke,
             plineattrs,
             pboFill,
             pptlBrushOrg,
             mixFill,
             flOptions);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v21, *((_DWORD *)v24 + 4));
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v22, *((_DWORD *)v24 + 4));
  }
  return v12;
}
