/*
 * XREFs of NtGdiRectVisible @ 0x1C0088590
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00885EC (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
