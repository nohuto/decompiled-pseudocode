/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C01500F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0014EA8 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
