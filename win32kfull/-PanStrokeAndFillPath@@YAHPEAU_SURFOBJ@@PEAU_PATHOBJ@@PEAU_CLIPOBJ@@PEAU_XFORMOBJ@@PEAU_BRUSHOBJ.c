__int64 __fastcall PanStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        struct _POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _PANDEV *dhpdev; // rsi
  unsigned int v14; // ebx
  BOOL v15; // edi
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v20; // [rsp+68h] [rbp-98h] BYREF
  POINTL *pptlBrushOrg; // [rsp+78h] [rbp-88h]
  _RECTFX prectfx; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[112]; // [rsp+90h] [rbp-70h] BYREF

  v17 = 0;
  prectfx = 0LL;
  pco = a3;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pso = a1;
  pptlBrushOrg = a8;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v20.left = prectfx.xLeft >> 4;
  v20.top = prectfx.yTop >> 4;
  v20.right = (prectfx.xRight + 15) >> 4;
  v20.bottom = (prectfx.yBottom + 15) >> 4;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v23, dhpdev, &pso, &v20, &v17, pco);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v14 = 1;
  }
  else
  {
    v15 = EngStrokeAndFillPath(pso, ppo, pco, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    if ( v17 == 1 )
      vPanningUpdate(dhpdev, &v20, pco);
    v14 = v15;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v23);
  return v14;
}
