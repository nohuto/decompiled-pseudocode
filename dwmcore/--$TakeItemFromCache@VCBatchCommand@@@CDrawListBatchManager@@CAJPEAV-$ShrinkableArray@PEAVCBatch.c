/*
 * XREFs of ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008E7AC
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18008DF10 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180092408 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801FD230 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x1800C383C (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FBED8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  CBatchCommand *v8; // rax
  unsigned int v9; // ecx
  CBatchCommand *v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  CBatchCommand *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v8 = (CBatchCommand *)DefaultHeap::Alloc(0xB8uLL);
    v10 = v8;
    if ( !v8 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x16Du, 0LL);
      return v2;
    }
    *(_DWORD *)v8 = 0;
    v14 = v8;
    v11 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v14, 1LL);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Fu, 0LL);
      CBatchCommand::`scalar deleting destructor'(v10, v13);
      return v2;
    }
  }
  v5 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  v6 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v5;
  if ( v6 >= (unsigned int)v5 )
    v6 = v5;
  *(_DWORD *)(a1 + 32) = v6;
  return v2;
}
