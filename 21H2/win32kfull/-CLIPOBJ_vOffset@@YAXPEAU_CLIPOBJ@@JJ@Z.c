/*
 * XREFs of ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C002D358
 * Callers:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     OffTransparentBlt @ 0x1C00D6B88 (OffTransparentBlt.c)
 *     OffGradientFill @ 0x1C00D6ECC (OffGradientFill.c)
 *     OffStretchBlt @ 0x1C00D72BC (OffStretchBlt.c)
 *     OffAlphaBlend @ 0x1C00D76B8 (OffAlphaBlend.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136110 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     OffStrokePath @ 0x1C0138BB8 (OffStrokePath.c)
 *     OffLineTo @ 0x1C0147AEC (OffLineTo.c)
 *     OffStretchBltROP @ 0x1C014947C (OffStretchBltROP.c)
 *     OffCopyBits @ 0x1C01568A8 (OffCopyBits.c)
 *     OffDrawStream @ 0x1C015887C (OffDrawStream.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027CDC0 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027D860 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0293B40 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     OffFillPath @ 0x1C02C7904 (OffFillPath.c)
 *     OffPlgBlt @ 0x1C02C7A34 (OffPlgBlt.c)
 *     OffStrokeAndFillPath @ 0x1C02C7BF4 (OffStrokeAndFillPath.c)
 *     OffTextOut @ 0x1C02C7D78 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall CLIPOBJ_vOffset(struct _CLIPOBJ *a1, LONG a2, LONG a3)
{
  struct _POINTL v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (a2 || a3) )
  {
    a1->rclBounds.left += a2;
    a1->rclBounds.right += a2;
    a1->rclBounds.top += a3;
    a1->rclBounds.bottom += a3;
    if ( a1->iDComplexity )
    {
      v3.x = a2;
      v3.y = a3;
      RGNOBJ::bOffset((RGNOBJ *)&a1[2].rclBounds.top, &v3);
    }
  }
}
