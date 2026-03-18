/*
 * XREFs of ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A2950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C016EF76 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C016FBC8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C029FBD8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029FEC0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffStrokeAndFillPath @ 0x1C02C7BF4 (OffStrokeAndFillPath.c)
 */

__int64 __fastcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        struct _BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // r14d
  FLOAT_LONG v14; // ebx
  struct _SURFOBJ *v15; // rcx
  unsigned int v16; // edi
  int i; // eax
  BOOL (__stdcall *v18)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v22[12]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v23[14]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 **v24[7]; // [rsp+F0h] [rbp-10h] BYREF
  struct _DISPSURF *v25; // [rsp+128h] [rbp+28h]
  __int64 v26; // [rsp+130h] [rbp+30h]
  __int64 v27; // [rsp+138h] [rbp+38h]
  __int64 v28; // [rsp+140h] [rbp+40h]
  _BYTE v29[88]; // [rsp+150h] [rbp+50h] BYREF
  SURFOBJ *pso; // [rsp+1A8h] [rbp+A8h]
  struct _RECTFX prectfx; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v32; // [rsp+1D0h] [rbp+D0h] BYREF

  dhpdev = a1->dhpdev;
  v13 = 1;
  LODWORD(v14.e) = plineattrs->elStyleState;
  v16 = 0;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v29, v15);
    v13 = EngStrokeAndFillPath(pso, ppo, a3, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v29);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v22,
    pboStroke,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v22[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v23,
      pboFill,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v23[0] )
    {
      prectfx = 0LL;
      PATHOBJ_vGetBounds(ppo, &prectfx);
      v32.left = prectfx.xLeft >> 4;
      v32.top = prectfx.yTop >> 4;
      v32.right = (prectfx.xRight >> 4) + 2;
      v32.bottom = (prectfx.yBottom >> 4) + 2;
      for ( i = MSURF::bFindSurface(v24, a1, a3, &v32); i; i = MSURF::bNextSurface((MSURF *)v24) )
      {
        plineattrs->elStyleState = v14;
        PATHOBJ_vEnumStart(ppo);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v22, v25, (struct SURFACE *)(v26 - 24));
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v23, v25, (struct SURFACE *)(v26 - 24));
        if ( (*(_DWORD *)(v26 + 88) & 0x80u) == 0 )
          v18 = EngStrokeAndFillPath;
        else
          v18 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v25 + 7) + 2792LL);
        v13 &= OffStrokeAndFillPath(
                 v18,
                 v28,
                 v26,
                 ppo,
                 v27,
                 a4,
                 pboStroke,
                 plineattrs,
                 pboFill,
                 pptlBrushOrg,
                 mixFill,
                 flOptions);
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v22, *((_DWORD *)v25 + 4));
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v23, *((_DWORD *)v25 + 4));
      }
      return v13;
    }
  }
  return v16;
}
