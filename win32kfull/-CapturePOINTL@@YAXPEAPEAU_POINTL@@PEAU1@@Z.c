/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C9914
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngFillPath @ 0x1C02CC0E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02CC2F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02CCA50 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CCC00 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
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
