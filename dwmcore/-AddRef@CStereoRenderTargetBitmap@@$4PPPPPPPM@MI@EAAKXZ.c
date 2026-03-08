/*
 * XREFs of ?AddRef@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x18011F6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CStereoRenderTargetBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 200));
}
