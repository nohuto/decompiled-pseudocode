/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C003EAD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  return GreGetDeviceCaps(a1, a2);
}
