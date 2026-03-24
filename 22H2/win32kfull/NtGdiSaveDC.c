/*
 * XREFs of NtGdiSaveDC @ 0x1C0111B50
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C016C554 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
