/*
 * XREFs of ?AddRef@CDDARenderTarget@@$4PPPPPPPM@IDA@EAAKXZ @ 0x180119790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 2096));
}
