/*
 * XREFs of ?GetSize@CD2DBitmap@@$4PPPPPPPM@OA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD2DBitmap::GetSize(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetSize((CD2DBitmap *)(a1 - *(int *)(a1 - 4) - 224), a2);
}
