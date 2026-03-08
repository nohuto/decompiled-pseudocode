/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x18011C390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(__int64 a1)
{
  return CD2DResource::IsPrimaryResource((CD2DResource *)(a1 - *(int *)(a1 - 4) - 208));
}
