/*
 * XREFs of ?AddRef@CRenderData@@$4PPPPPPPM@BDI@EAAKXZ @ 0x18011A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderData::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 312));
}
