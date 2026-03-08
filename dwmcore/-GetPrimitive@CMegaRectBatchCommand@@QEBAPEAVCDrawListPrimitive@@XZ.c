/*
 * XREFs of ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180085C7C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x180072BA0 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C358 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800903EC (-ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180202370 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 * Callees:
 *     <none>
 */

struct CDrawListPrimitive *__fastcall CMegaRectBatchCommand::GetPrimitive(CMegaRectBatchCommand *this)
{
  struct CDrawListPrimitive *result; // rax

  result = (struct CDrawListPrimitive *)*((_QWORD *)this + 12);
  if ( !result )
    return *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
  return result;
}
