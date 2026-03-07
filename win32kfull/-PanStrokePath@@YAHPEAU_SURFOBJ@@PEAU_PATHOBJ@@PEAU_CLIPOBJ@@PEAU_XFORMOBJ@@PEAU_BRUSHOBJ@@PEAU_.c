__int64 __fastcall PanStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  struct _PANDEV *dhpdev; // rsi
  unsigned int v12; // ebx
  BOOL v13; // edi
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-B8h] BYREF
  SURFOBJ *pso; // [rsp+50h] [rbp-B0h] BYREF
  struct _RECTL v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _RECTFX prectfx; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[112]; // [rsp+80h] [rbp-80h] BYREF

  v15 = 0;
  prectfx = 0LL;
  pco = a3;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pso = a1;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v18.left = prectfx.xLeft >> 4;
  v18.top = prectfx.yTop >> 4;
  v18.right = (prectfx.xRight + 15) >> 4;
  v18.bottom = (prectfx.yBottom + 15) >> 4;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v20, dhpdev, &pso, &v18, &v15, pco);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v12 = 1;
  }
  else
  {
    v13 = EngStrokePath(pso, ppo, pco, a4, pbo, pptlBrushOrg, plineattrs, mix);
    if ( v15 == 1 )
      vPanningUpdate(dhpdev, &v18, pco);
    v12 = v13;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v20);
  return v12;
}
