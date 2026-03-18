/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  struct _POINTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _POINTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
