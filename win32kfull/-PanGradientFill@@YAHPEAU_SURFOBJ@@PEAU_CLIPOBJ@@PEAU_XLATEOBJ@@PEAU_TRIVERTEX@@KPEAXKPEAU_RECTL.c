/*
 * XREFs of ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029E9C0
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C0004AA0 (EngGradientFill.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C029DC5C (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C029DD8C (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C029FAAC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A05F8 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  struct _PANDEV *dhpdev; // r14
  unsigned int v14; // ebx
  BOOL v15; // esi
  int v17; // [rsp+50h] [rbp-A1h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-99h] BYREF
  SURFOBJ *psoDest; // [rsp+60h] [rbp-91h] BYREF
  _BYTE v20[112]; // [rsp+70h] [rbp-81h] BYREF

  v17 = 0;
  pco = a2;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  psoDest = a1;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v20, dhpdev, &psoDest, prclExtents, &v17, a2);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v14 = 1;
  }
  else
  {
    v15 = EngGradientFill(psoDest, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    if ( v17 == 1 )
      vPanningUpdate(dhpdev, prclExtents, pco);
    v14 = v15;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v20);
  return v14;
}
