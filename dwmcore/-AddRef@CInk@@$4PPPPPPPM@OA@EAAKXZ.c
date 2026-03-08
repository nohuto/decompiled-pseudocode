/*
 * XREFs of ?AddRef@CInk@@$4PPPPPPPM@OA@EAAKXZ @ 0x180117E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInk::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 224));
}
