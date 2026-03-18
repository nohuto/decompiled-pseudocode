/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngFillPath @ 0x1C02C9A40 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02CA560 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CA710 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
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
