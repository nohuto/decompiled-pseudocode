/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(__int64 a1)
{
  return CD2DResource::IsPrimaryResource((CD2DResource *)(a1 - *(int *)(a1 - 4)));
}
