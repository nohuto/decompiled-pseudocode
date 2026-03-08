/*
 * XREFs of ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA?AU_LUID@@XZ @ 0x18011EAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDxHandleBitmapRealization::GetAdapterLuid((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 104), a2);
}
