/*
 * XREFs of ?AddRef@CGenericInk@@$4PPPPPPPM@BHI@EAAKXZ @ 0x1800F4380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGenericInk::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 376));
}
