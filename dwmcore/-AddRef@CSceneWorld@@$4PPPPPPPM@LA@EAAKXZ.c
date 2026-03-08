/*
 * XREFs of ?AddRef@CSceneWorld@@$4PPPPPPPM@LA@EAAKXZ @ 0x18011A470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSceneWorld::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 176));
}
