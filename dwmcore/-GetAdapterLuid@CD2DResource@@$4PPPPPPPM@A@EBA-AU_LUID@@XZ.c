/*
 * XREFs of ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011ABF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD2DResource::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CD2DResource::GetAdapterLuid((CD2DResource *)(a1 - *(int *)(a1 - 4)), a2);
}
