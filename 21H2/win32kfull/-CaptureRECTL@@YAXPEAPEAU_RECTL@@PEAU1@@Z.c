/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AFF0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C013BA90 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2650 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2CB0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02B39C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B4690 (NtGdiEngTransparentBlt.c)
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
