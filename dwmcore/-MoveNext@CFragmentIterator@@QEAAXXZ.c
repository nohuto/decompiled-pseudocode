/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18002D3FC
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCShaderCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180026734 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCShaderCache@@IAEBUShaderLinkingConfig@@PEAPEAVC.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18002AA88 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18002AB38 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18002ADC8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AE5C (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AF10 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18002CF54 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1) - 16LL;
  *((_QWORD *)this + 1) = v1;
  if ( (v1 - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(v1 - 8);
    CFragmentIterator::FindFirst(this);
  }
}
