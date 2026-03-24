/*
 * XREFs of NtGdiSaveDC @ 0x1C0111ED0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C016CE64 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
