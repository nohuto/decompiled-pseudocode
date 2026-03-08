/*
 * XREFs of ?Release@CInteraction@@WEA@EAAKXZ @ 0x1801199D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteraction::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 64));
}
