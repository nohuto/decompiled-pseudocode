/*
 * XREFs of ?AddRef@CInteraction@@WEA@EAAKXZ @ 0x18011DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteraction::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 64));
}
