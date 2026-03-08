/*
 * XREFs of ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029F180
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C029DC5C (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C029DD8C (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C029FAAC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A05F8 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

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
