__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v10; // edi
  DHPDEV dhpdev; // rsi
  FLOAT_LONG v12; // ebx
  struct _SURFOBJ *v13; // rcx
  int i; // eax
  struct _DISPSURF *v16; // rdx
  struct SURFACE *v17; // r8
  BOOL (__stdcall *v18)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _DWORD v21[14]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26; // [rsp+F0h] [rbp-10h]
  _BYTE v27[88]; // [rsp+100h] [rbp+0h] BYREF
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  struct _RECTFX prectfx; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v30; // [rsp+180h] [rbp+80h] BYREF

  v10 = 1;
  dhpdev = a1->dhpdev;
  LODWORD(v12.e) = plineattrs->elStyleState;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v27, v13);
    v10 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v27);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v21,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v21[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v30.left = prectfx.xLeft >> 4;
  v30.top = prectfx.yTop >> 4;
  v30.right = (prectfx.xRight >> 4) + 2;
  v30.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v22, a1, a3, &v30); i; i = MSURF::bNextSurface((MSURF *)v22) )
  {
    PATHOBJ_vEnumStart(ppo);
    v16 = v23;
    v17 = (struct SURFACE *)(v24 - 24);
    plineattrs->elStyleState = v12;
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v21, v16, v17);
    if ( (*(_DWORD *)(v24 + 88) & 0x20) != 0 )
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v23 + 7) + 2776LL);
    else
      v18 = EngStrokePath;
    v10 &= OffStrokePath(v18, v26, v24, ppo, v25, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v21, *((_DWORD *)v23 + 4));
  }
  return v10;
}
