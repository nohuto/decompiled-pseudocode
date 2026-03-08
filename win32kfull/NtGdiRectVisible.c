/*
 * XREFs of NtGdiRectVisible @ 0x1C0086F10
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C0086F6C (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
