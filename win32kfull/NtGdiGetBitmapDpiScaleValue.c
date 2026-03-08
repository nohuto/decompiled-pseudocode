/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C02C4C10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C02AA444 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  return GreGetBitmapDpiScaleValue(a1, a2);
}
