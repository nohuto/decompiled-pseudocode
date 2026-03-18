/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C02C2400
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C02A7D84 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(HSURF a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
