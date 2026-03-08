/*
 * XREFs of ?IsProtected@CSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSectionBitmapRealization::IsProtected(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - *(int *)(a1 - 4)));
}
