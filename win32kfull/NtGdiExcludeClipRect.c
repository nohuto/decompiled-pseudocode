/*
 * XREFs of NtGdiExcludeClipRect @ 0x1C0087FE0
 * Callers:
 *     <none>
 * Callees:
 *     GreExcludeClipRect @ 0x1C0088000 (GreExcludeClipRect.c)
 */

__int64 __fastcall NtGdiExcludeClipRect(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return GreExcludeClipRect(a1, a5);
}
