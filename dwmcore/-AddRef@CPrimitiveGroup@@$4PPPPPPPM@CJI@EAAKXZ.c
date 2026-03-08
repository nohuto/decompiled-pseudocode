/*
 * XREFs of ?AddRef@CPrimitiveGroup@@$4PPPPPPPM@CJI@EAAKXZ @ 0x180117F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPrimitiveGroup::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 664));
}
