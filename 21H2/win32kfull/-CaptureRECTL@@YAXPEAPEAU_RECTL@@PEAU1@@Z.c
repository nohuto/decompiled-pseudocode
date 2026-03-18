/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B1540 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _RECTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
