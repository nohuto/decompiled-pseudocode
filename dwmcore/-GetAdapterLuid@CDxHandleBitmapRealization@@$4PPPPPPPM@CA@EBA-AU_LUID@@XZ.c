/*
 * XREFs of ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AU_LUID@@XZ @ 0x18011E0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDxHandleBitmapRealization::GetAdapterLuid((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
