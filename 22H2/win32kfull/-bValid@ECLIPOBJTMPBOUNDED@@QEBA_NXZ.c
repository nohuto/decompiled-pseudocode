/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CA140 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall ECLIPOBJTMPBOUNDED::bValid(ECLIPOBJTMPBOUNDED *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 168) || *((_QWORD *)this + 20) )
    return 1;
  return result;
}
