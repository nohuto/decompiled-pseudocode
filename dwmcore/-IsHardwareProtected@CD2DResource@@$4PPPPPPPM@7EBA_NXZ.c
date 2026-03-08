/*
 * XREFs of ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x18011BCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsHardwareProtected(__int64 a1)
{
  return CD2DResource::IsHardwareProtected((CD2DResource *)(a1 - *(int *)(a1 - 4) - 8));
}
