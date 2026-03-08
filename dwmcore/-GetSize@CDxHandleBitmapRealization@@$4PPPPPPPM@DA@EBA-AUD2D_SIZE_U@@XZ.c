/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(__int64 a1, _DWORD *a2)
{
  return CDxHandleBitmapRealization::GetSize((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 48), a2);
}
