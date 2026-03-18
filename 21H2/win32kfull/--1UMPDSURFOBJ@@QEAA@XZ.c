/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B1540 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C010A45C (--1CAutoTGO@@QEAA@XZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C015F730 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
  UMPDSURFOBJ::Cleanup(this);
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
}
