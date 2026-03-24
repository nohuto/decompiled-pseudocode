/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C013BC80 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngGradientFill @ 0x1C02B27D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B2C70 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3540 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B3980 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

char __fastcall ECLIPOBJTMPBOUNDED::bValid(ECLIPOBJTMPBOUNDED *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 176) || *((_QWORD *)this + 21) )
    return 1;
  return result;
}
