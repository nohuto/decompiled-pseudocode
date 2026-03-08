/*
 * XREFs of ?AddRef@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x180117F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD2DResource::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 104));
}
