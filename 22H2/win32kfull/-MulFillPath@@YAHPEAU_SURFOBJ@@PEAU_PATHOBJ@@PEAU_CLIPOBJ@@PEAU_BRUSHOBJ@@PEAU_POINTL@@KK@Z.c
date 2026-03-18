/*
 * XREFs of ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02AFD00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C015AF18 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C015B086 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C015B158 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C015BDAA (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015BE3E (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C015C1C0 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0279AE0 (--1MULTISURF@@QEAA@XZ.c)
 *     EngFillPath @ 0x1C0289380 (EngFillPath.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02AE588 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     OffFillPath @ 0x1C02E85D8 (OffFillPath.c)
 */

__int64 __fastcall MulFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rdi
  unsigned int v12; // ebx
  struct _SURFOBJ *v13; // rcx
  int i; // eax
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v17[12]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[56]; // [rsp+80h] [rbp-80h] BYREF
  struct _DISPSURF *v19; // [rsp+B8h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  _BYTE v23[88]; // [rsp+E0h] [rbp-20h] BYREF
  SURFOBJ *pso; // [rsp+138h] [rbp+38h]
  struct _RECTFX prectfx; // [rsp+150h] [rbp+50h] BYREF
  struct _RECTL v26; // [rsp+160h] [rbp+60h] BYREF

  dhpdev = a1->dhpdev;
  v12 = 1;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v23, v13);
    v12 = EngFillPath(pso, ppo, a3, a4, pptlBrushOrg, mix, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v23);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v17,
    a4,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v17[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v26.left = prectfx.xLeft >> 4;
  v26.top = prectfx.yTop >> 4;
  v26.right = (prectfx.xRight >> 4) + 2;
  v26.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v18, a1, a3, &v26); i; i = MSURF::bNextSurface((MSURF *)v18) )
  {
    PATHOBJ_vEnumStart(ppo);
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v17, v19, (struct SURFACE *)(v20 - 24));
    if ( (*(_DWORD *)(v20 + 88) & 0x40) != 0 )
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v19 + 7) + 2784LL);
    else
      v16 = EngFillPath;
    v12 &= OffFillPath(v16, v22, v20, ppo, v21, a4, pptlBrushOrg, mix, flOptions);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v17, *((_DWORD *)v19 + 4));
  }
  return v12;
}
