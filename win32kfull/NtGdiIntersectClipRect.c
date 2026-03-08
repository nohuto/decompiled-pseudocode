/*
 * XREFs of NtGdiIntersectClipRect @ 0x1C00DB9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiIntersectClipRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return GreIntersectClipRect(a1, a2, a3, a4, a5);
}
