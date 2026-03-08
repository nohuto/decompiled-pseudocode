/*
 * XREFs of ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029EE90
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C029DA64 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C029DCF4 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C029FAAC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A05F8 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        struct _POINTL *a7,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _POINTL *a10,
        ULONG iMode)
{
  struct _PANDEV *dhpdev; // r14
  unsigned int v14; // ebx
  BOOL v15; // esi
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *pco; // [rsp+68h] [rbp-98h] BYREF
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h] BYREF
  SURFOBJ *psoDest; // [rsp+78h] [rbp-88h] BYREF
  POINTL *pptlMask; // [rsp+80h] [rbp-80h]
  POINTL *pptlHTOrg; // [rsp+88h] [rbp-78h]
  _BYTE v23[224]; // [rsp+90h] [rbp-70h] BYREF

  v17 = 0;
  pptlHTOrg = a7;
  pco = a4;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pptlMask = a10;
  psoDest = a1;
  psoSrc = a2;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v23, dhpdev, &psoDest, &psoSrc, prclDest, prclSrc, &v17, a4);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v14 = 1;
  }
  else
  {
    v15 = EngStretchBlt(psoDest, psoSrc, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
    if ( v17 == 1 )
      vPanningUpdate(dhpdev, prclDest, pco);
    v14 = v15;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v23);
  return v14;
}
