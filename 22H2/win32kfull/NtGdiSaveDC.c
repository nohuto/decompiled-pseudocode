/*
 * XREFs of NtGdiSaveDC @ 0x1C0092560
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C0092580 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(__int64 a1)
{
  return GreSaveDCInternal(a1, 0LL);
}
