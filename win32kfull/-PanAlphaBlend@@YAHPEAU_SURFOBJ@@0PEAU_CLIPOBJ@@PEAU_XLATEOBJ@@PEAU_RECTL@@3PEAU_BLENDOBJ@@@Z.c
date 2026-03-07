__int64 __fastcall PanAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  struct _PANDEV *dhpdev; // r14
  unsigned int v10; // ebx
  BOOL v11; // esi
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-B8h] BYREF
  SURFOBJ *psoSrc; // [rsp+50h] [rbp-B0h] BYREF
  SURFOBJ *psoDest; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[224]; // [rsp+60h] [rbp-A0h] BYREF

  v13 = 0;
  pco = a3;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  psoDest = a1;
  psoSrc = a2;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v17, dhpdev, &psoDest, &psoSrc, prclDest, prclSrc, &v13, a3);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v10 = 1;
  }
  else
  {
    v11 = EngAlphaBlend(psoDest, psoSrc, pco, a4, prclDest, prclSrc, pBlendObj);
    if ( v13 == 1 )
      vPanningUpdate(dhpdev, prclDest, pco);
    v10 = v11;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v17);
  return v10;
}
