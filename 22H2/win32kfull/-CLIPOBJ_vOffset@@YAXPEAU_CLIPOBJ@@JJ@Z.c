/*
 * XREFs of ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001AC50
 * Callers:
 *     OffTextOut @ 0x1C000B840 (OffTextOut.c)
 *     OffTransparentBlt @ 0x1C0018F80 (OffTransparentBlt.c)
 *     OffAlphaBlend @ 0x1C0019824 (OffAlphaBlend.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0019C20 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     OffBitBlt @ 0x1C001AAC0 (OffBitBlt.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1C015D38E (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027B120 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027CA60 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C027CF20 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C029CB80 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     OffDrawStream @ 0x1C02E849C (OffDrawStream.c)
 *     OffFillPath @ 0x1C02E85D8 (OffFillPath.c)
 *     OffGradientFill @ 0x1C02E8708 (OffGradientFill.c)
 *     OffLineTo @ 0x1C02E8884 (OffLineTo.c)
 *     OffPlgBlt @ 0x1C02E89F8 (OffPlgBlt.c)
 *     OffStretchBlt @ 0x1C02E8BAC (OffStretchBlt.c)
 *     OffStretchBltROP @ 0x1C02E8D44 (OffStretchBltROP.c)
 *     OffStrokeAndFillPath @ 0x1C02E8F0C (OffStrokeAndFillPath.c)
 *     OffStrokePath @ 0x1C02E9090 (OffStrokePath.c)
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
