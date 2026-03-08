/*
 * XREFs of ?GetSize@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011DEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSectionBitmapRealization::GetSize(__int64 a1, _DWORD *a2)
{
  return CSectionBitmapRealization::GetSize((CSectionBitmapRealization *)(a1 - *(int *)(a1 - 4) - 200), a2);
}
