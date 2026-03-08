/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C358 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x180085A34 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1800F2520 (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x1801166B0 (-GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct ClipPlaneInfoRef **v5; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  struct CD2DTarget *CurrentTargetNoRef; // rax
  int v12; // eax
  unsigned int v13; // ecx
  struct CHwLightCollectionBuffer *v14; // rdx
  struct CDrawListEntryBatch *v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  struct CDrawListEntryBatch *v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 17);
  v20 = (struct CDrawListEntryBatch *)v5;
  if ( v5 )
  {
    if ( v5[4] == a3 )
    {
      v7 = CDrawListEntryBatch::SetLightingCollection(v5, a2);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1F4u, 0LL);
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v18 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
      v9 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1F0u, 0LL);
    }
  }
  else
  {
    CurrentTargetNoRef = CD2DContext::GetCurrentTargetNoRef(this);
    v12 = CDrawListBatchManager::OpenDrawListEntryBatch(
            (CD2DContext *)((char *)this + 8),
            *((struct IDeviceTarget **)CurrentTargetNoRef + 3),
            &v20);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1E1u, 0LL);
    }
    else
    {
      v14 = a2;
      v15 = v20;
      v16 = CDrawListEntryBatch::SetLightingCollection((struct CHwLightCollectionBuffer **)v20, v14);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1E3u, 0LL);
      else
        Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=((char *)v15 + 32, a3);
    }
  }
  return v9;
}
