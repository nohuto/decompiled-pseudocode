/*
 * XREFs of ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D6F0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x18000D820 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000D874 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18008F5E0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180090EB8 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingCommand(CBatchOptimizer *this, CBatchCommand **a2)
{
  _OWORD *v4; // rsi
  __int64 v5; // rax
  CBatchCommand *v6; // rdx
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  int NearestRenderingLayerUnderEmptyLayer; // eax
  int v12; // edx
  __int64 v13; // rsi
  int *v14; // r9
  __int64 v15; // r8
  bool v16; // zf

  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  CBatchCommand::ApplyRenderState(*a2, this);
  v4 = (_OWORD *)((char *)this + 16);
  v5 = 520LL * *((int *)this + *((_DWORD *)this + 8) + 11);
  if ( *(_DWORD *)((char *)this + v5 + 100)
    || (v16 = *(_DWORD *)((char *)this + v5 + 96) == 20, *(_OWORD *)((char *)this + v5 + 80) = *v4, v16) )
  {
    *((_DWORD *)this + 6) = 24;
    *((_BYTE *)this + 28) = 3;
    CBatchOptimizer::AppendLayer(this);
  }
  v6 = *a2;
  v7 = *((int *)this + *((_DWORD *)this + 8) + 11);
  *a2 = 0LL;
  v8 = (char *)this + 520 * v7;
  v9 = *((unsigned int *)v8 + 24);
  *((_DWORD *)v8 + 24) = v9 + 1;
  *(_QWORD *)&v8[8 * v9 + 120] = v6;
  v10 = *((_DWORD *)this + 8);
  if ( v10 > 1 )
  {
    NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, v10 - 1);
    v12 = NearestRenderingLayerUnderEmptyLayer;
    if ( NearestRenderingLayerUnderEmptyLayer != v10 - 1 )
    {
      v13 = *(_QWORD *)v4;
      v14 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
      v15 = NearestRenderingLayerUnderEmptyLayer;
      while ( *((_QWORD *)this + 65 * *v14 + 10) != v13 )
      {
        ++v12;
        ++v15;
        ++v14;
        if ( v15 == v10 - 1 )
          return;
      }
      CBatchOptimizer::DiscardEmptyLayers(this, v12 + 1, v10 - v12 - 1);
    }
  }
}
