/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBAAEBUD2D_RECT_F@@XZ @ 0x1801062F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct D2D_RECT_F *__fastcall CHWDrawListEntry::GetBounds(CHWDrawListEntry *this)
{
  return (const struct D2D_RECT_F *)(*((_QWORD *)this + 8) + 76LL);
}
