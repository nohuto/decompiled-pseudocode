/*
 * XREFs of ?GetSize@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CHolographicInteropTarget::GetSize(__int64 a1, _DWORD *a2)
{
  return CHolographicInteropTarget::GetSize((CHolographicInteropTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
