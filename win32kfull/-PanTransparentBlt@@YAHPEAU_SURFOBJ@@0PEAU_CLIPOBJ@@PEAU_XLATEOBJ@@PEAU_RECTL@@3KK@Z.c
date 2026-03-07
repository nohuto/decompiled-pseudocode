__int64 __fastcall PanTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDst,
        struct _RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  struct _PANDEV *dhpdev; // r14
  unsigned int v11; // ebx
  BOOL v12; // esi
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-B8h] BYREF
  SURFOBJ *psoSrc; // [rsp+50h] [rbp-B0h] BYREF
  SURFOBJ *psoDst; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[224]; // [rsp+60h] [rbp-A0h] BYREF

  v14 = 0;
  pco = a3;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  psoDst = a1;
  psoSrc = a2;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v18, dhpdev, &psoDst, &psoSrc, prclDst, prclSrc, &v14, a3);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v11 = 1;
  }
  else
  {
    v12 = EngTransparentBlt(psoDst, psoSrc, pco, a4, prclDst, prclSrc, iTransColor, ulReserved);
    if ( v14 == 1 )
      vPanningUpdate(dhpdev, prclDst, pco);
    v11 = v12;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v18);
  return v11;
}
