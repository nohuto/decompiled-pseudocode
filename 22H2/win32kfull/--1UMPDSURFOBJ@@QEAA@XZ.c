/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02C8580 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02C8E50 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02C98F0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02C9A40 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CA140 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02CA560 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CA710 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CC410 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CD670 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C02C71B0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
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
