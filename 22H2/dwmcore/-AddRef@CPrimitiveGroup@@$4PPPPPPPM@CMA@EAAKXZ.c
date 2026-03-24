/*
 * XREFs of ?AddRef@CPrimitiveGroup@@$4PPPPPPPM@CMA@EAAKXZ @ 0x1800F4460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPrimitiveGroup::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 704));
}
