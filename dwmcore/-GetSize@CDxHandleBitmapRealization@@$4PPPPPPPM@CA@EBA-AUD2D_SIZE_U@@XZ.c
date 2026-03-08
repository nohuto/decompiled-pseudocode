/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011E250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(__int64 a1, _DWORD *a2)
{
  return CDxHandleBitmapRealization::GetSize((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
