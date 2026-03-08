/*
 * XREFs of ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FBED8
 * Callers:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18000D970 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18008DF10 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008E7AC (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180092408 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800D1140 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x18010033C (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801FD230 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1802020F4 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18000DA44 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CBatchCommand *__fastcall CBatchCommand::`scalar deleting destructor'(CBatchCommand *this)
{
  CBatchCommand::Destroy(this);
  operator delete(this);
  return this;
}
