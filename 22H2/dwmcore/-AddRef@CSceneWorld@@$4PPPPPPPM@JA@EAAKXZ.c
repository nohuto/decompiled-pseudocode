/*
 * XREFs of ?AddRef@CSceneWorld@@$4PPPPPPPM@JA@EAAKXZ @ 0x1800F44D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSceneWorld::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 144));
}
