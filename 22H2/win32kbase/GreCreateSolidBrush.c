/*
 * XREFs of GreCreateSolidBrush @ 0x1C0061330
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C0060550 (hCreateSolidBrushInternal.c)
 */

HBRUSH __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
