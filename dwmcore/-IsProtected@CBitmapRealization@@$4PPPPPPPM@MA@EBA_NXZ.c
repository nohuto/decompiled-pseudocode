/*
 * XREFs of ?IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ @ 0x18011EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(__int64 a1)
{
  return CBitmapRealization::IsProtected((CBitmapRealization *)(a1 - *(int *)(a1 - 4) - 192));
}
