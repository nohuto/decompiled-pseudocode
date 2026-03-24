/*
 * XREFs of ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A4EB0
 * Callers:
 *     <none>
 * Callees:
 *     OffStrokePath @ 0x1C0146204 (OffStrokePath.c)
 *     EngStrokePath @ 0x1C01494D0 (EngStrokePath.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027E020 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A10D0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A1320 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A14D0 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A1510 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A5B24 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A67F0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A6C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  DHPDEV dhpdev; // r14
  unsigned int v11; // esi
  FLOAT_LONG v12; // ebx
  struct _SURFOBJ *v13; // rcx
  unsigned int v14; // edi
  int i; // eax
  struct _DISPSURF *v16; // rdx
  struct SURFACE *p_pvScan0; // r8
  BOOL (__stdcall *v18)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _DWORD v22[12]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v24; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v25; // [rsp+E0h] [rbp-20h]
  CLIPOBJ *v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  _BYTE v28[88]; // [rsp+100h] [rbp+0h] BYREF
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  struct _RECTFX prectfx; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v31; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v11 = 1;
  LODWORD(v12.e) = plineattrs->elStyleState;
  v14 = 0;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v28, v13);
    v11 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v28);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v22,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v22[0] )
  {
    prectfx = 0LL;
    PATHOBJ_vGetBounds(ppo, &prectfx);
    v31.left = prectfx.xLeft >> 4;
    v31.top = prectfx.yTop >> 4;
    v31.right = (prectfx.xRight >> 4) + 2;
    v31.bottom = (prectfx.yBottom >> 4) + 2;
    for ( i = MSURF::bFindSurface((MSURF *)v23, a1, a3, &v31); i; i = MSURF::bNextSurface((MSURF *)v23) )
    {
      PATHOBJ_vEnumStart(ppo);
      v16 = v24;
      p_pvScan0 = (struct SURFACE *)&v25[-1].pvScan0;
      plineattrs->elStyleState = v12;
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v22, v16, p_pvScan0);
      if ( ((__int64)v25[1].hsurf & 0x20) != 0 )
        v18 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v24 + 7) + 2800LL);
      else
        v18 = EngStrokePath;
      v11 &= OffStrokePath(
               (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v18,
               v27,
               v25,
               ppo,
               v26,
               a4,
               pbo,
               pptlBrushOrg,
               plineattrs,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v22, *((_DWORD *)v24 + 4));
    }
    return v11;
  }
  return v14;
}
