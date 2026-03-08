/*
 * XREFs of ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029F4D0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C001A540 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C029DC5C (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C029DD8C (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C029FAAC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A05F8 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

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
