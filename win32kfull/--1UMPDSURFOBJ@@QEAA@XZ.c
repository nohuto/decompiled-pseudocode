/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02CAC30 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02CB4E0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02CBF90 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02CC0E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02CC2F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CC710 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02CCA50 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CCC00 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CF650 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C02C9970 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
  UMPDSURFOBJ::Cleanup(this);
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
}
