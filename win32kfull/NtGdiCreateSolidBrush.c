/*
 * XREFs of NtGdiCreateSolidBrush @ 0x1C00ECF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreateSolidBrush(__int64 a1, __int64 a2)
{
  return hCreateSolidBrushInternal(a1, 0LL, a2, 1LL);
}
