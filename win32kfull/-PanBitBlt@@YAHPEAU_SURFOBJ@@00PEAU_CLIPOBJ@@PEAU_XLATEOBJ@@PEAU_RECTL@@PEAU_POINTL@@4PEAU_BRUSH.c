__int64 __fastcall PanBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  struct _PANDEV *dhpdev; // rdi
  unsigned int v15; // ebx
  LONG right; // r8d
  LONG x; // r9d
  int v18; // ecx
  LONG y; // r10d
  int v20; // eax
  bool v21; // cc
  LONG bottom; // r8d
  LONG top; // edx
  int v24; // ecx
  BOOL v25; // r14d
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v28; // [rsp+68h] [rbp-98h] BYREF
  CLIPOBJ *pco; // [rsp+78h] [rbp-88h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-80h] BYREF
  SURFOBJ *psoTrg; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptlBrush; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *pbo; // [rsp+98h] [rbp-68h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-60h]
  _BYTE v35[224]; // [rsp+B0h] [rbp-50h] BYREF

  pptlMask = a8;
  pbo = a9;
  pptlBrush = a10;
  pco = a4;
  dhpdev = 0LL;
  psoTrg = a1;
  psoSrc = a2;
  v15 = 1;
  v27 = 0;
  if ( a1->iType == 1 )
    dhpdev = (struct _PANDEV *)a1->dhpdev;
  if ( a2 && a2->iType == 1 )
    dhpdev = (struct _PANDEV *)a2->dhpdev;
  if ( pptlSrc && a2 )
  {
    right = prclTrg->right;
    x = pptlSrc->x;
    v18 = right - prclTrg->left;
    y = pptlSrc->y;
    v20 = prclTrg->left - right;
    v21 = right < prclTrg->left;
    v28.left = pptlSrc->x;
    bottom = prclTrg->bottom;
    top = prclTrg->top;
    if ( v21 )
      v18 = v20;
    v28.top = y;
    v28.right = x + v18;
    v24 = bottom - top;
    if ( bottom < top )
      v24 = top - bottom;
    v28.bottom = y + v24;
  }
  else
  {
    *(_QWORD *)&v28.right = 0LL;
    *(_QWORD *)&v28.left = 0LL;
  }
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v35, dhpdev, &psoTrg, &psoSrc, prclTrg, &v28, &v27, a4);
  if ( !(unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v25 = EngBitBlt(psoTrg, psoSrc, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    if ( v27 == 1 )
      vPanningUpdate(dhpdev, prclTrg, pco);
    v15 = v25;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v35);
  return v15;
}
