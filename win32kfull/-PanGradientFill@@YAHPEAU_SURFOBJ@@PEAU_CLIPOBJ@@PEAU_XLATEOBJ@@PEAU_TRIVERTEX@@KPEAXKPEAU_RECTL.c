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
