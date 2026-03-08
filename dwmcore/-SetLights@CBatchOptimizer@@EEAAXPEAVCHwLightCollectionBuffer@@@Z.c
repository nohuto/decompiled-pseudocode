/*
 * XREFs of ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1801063A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::SetLights(CBatchOptimizer *this, struct CHwLightCollectionBuffer *a2)
{
  *((_QWORD *)this + 2) = a2;
}
