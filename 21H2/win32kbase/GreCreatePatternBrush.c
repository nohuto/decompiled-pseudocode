/*
 * XREFs of GreCreatePatternBrush @ 0x1C00C5B00
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HBITMAP a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
