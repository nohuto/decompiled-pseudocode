/*
 * XREFs of ?Release@CSceneWorld@@$4PPPPPPPM@LA@EAAKXZ @ 0x18011A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSceneWorld::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 176));
}
