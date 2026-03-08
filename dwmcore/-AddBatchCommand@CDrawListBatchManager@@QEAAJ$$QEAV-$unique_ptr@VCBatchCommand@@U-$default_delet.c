/*
 * XREFs of ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000DDE0
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C358 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x1800C383C (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::AddBatchCommand(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = *a2;
  v3 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v7, 1LL);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x91u, 0LL);
  else
    *a2 = 0LL;
  return v5;
}
