__int64 __fastcall PanTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        struct _CLIPOBJ *a4,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  RECTL *p_rclBkGround; // rax
  struct _PANDEV *dhpdev; // r15
  RECTL *v15; // rsi
  unsigned int v16; // ebx
  BOOL v17; // r14d
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlOrg; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pboOpaque; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *pboFore; // [rsp+78h] [rbp-88h]
  struct _RECTL v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[112]; // [rsp+90h] [rbp-70h] BYREF

  v19 = 0;
  pboFore = a7;
  pboOpaque = a8;
  pptlOrg = a9;
  p_rclBkGround = prclOpaque;
  pco = a4;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pso = a1;
  if ( !prclOpaque )
    p_rclBkGround = &pstro->rclBkGround;
  v15 = &pstro->rclBkGround;
  v25 = *p_rclBkGround;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v26, dhpdev, &pso, &v25, &v19, a4);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v16 = 1;
  }
  else
  {
    v17 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    if ( v19 == 1 )
    {
      if ( prclOpaque )
        v15 = prclOpaque;
      vPanningUpdate(dhpdev, v15, pco);
    }
    v16 = v17;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v26);
  return v16;
}
