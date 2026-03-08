/*
 * XREFs of ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214
 * Callers:
 *     ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001BC20 (-GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002CD5C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032B7C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A40 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C0DC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C524 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ??1CGradientSource@@MEAA@XZ @ 0x1800B623C (--1CGradientSource@@MEAA@XZ.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800B72EC (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800F0120 (--$destruct_range@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXP.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)a1 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
