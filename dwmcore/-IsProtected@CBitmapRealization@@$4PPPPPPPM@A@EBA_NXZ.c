/*
 * XREFs of ?IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011DB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(__int64 a1)
{
  return CBitmapRealization::IsProtected((CBitmapRealization *)(a1 - *(int *)(a1 - 4)));
}
