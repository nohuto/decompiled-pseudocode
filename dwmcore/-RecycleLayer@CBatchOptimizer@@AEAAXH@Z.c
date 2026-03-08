/*
 * XREFs of ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D930
 * Callers:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000D874 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180090EB8 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::RecycleLayer(CBatchOptimizer *this, __int64 a2)
{
  int v2; // eax
  int *v3; // r10
  int v4; // r11d

  v2 = *((_DWORD *)this + 8) - 1;
  if ( (_DWORD)a2 != v2 )
  {
    a2 = (int)a2;
    v3 = (int *)((char *)this + 4 * (int)a2 + 48);
    v4 = *v3;
    do
    {
      ++a2;
      *v3 = v3[1];
      ++v3;
    }
    while ( a2 != v2 );
    *((_DWORD *)this + v2 + 12) = v4;
  }
  --*((_DWORD *)this + 8);
}
