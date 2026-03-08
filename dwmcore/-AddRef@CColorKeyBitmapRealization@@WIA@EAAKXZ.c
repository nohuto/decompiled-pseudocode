/*
 * XREFs of ?AddRef@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x18011DD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorKeyBitmapRealization::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 128));
}
