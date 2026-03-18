/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02C8580 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
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
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1C02C7034 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v4; // rdx

  if ( a2 == *((struct _CLIPOBJ **)this + 15) )
  {
    v4 = (struct _CLIPOBJ *)*((_QWORD *)this + 14);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v4 = CaptureAndMungeCLIPOBJ(a2, *((struct _CLIPOBJ **)this + 16), a3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( (*((_DWORD *)this + 107) & 0x100) != 0 && v4 && v4 < MmSystemRangeStart )
    return 0LL;
  return v4;
}
