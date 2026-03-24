/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C0092300
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0092320 (GreGetDeviceCaps.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  return GreGetDeviceCaps(a1, a2);
}
