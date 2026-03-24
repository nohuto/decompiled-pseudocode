/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013D2A0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3E30 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4290 (NtGdiEngStrokePath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
