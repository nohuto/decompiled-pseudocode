/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AFF0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C013BA90 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013D2A0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2650 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2CB0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B2E40 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B3800 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B39C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3E30 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4290 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B4690 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C011FCC0 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C016D7B0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
  UMPDSURFOBJ::Cleanup(this);
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
}
