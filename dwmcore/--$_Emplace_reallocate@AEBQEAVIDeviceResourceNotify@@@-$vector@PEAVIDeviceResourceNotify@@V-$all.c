/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002CD5C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18002CE6C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECCC8 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F6F78 (-AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F8360 (-AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800FA8E0 (-AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801B9848 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1802209FC (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022A1C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180284A30 (-AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B0724 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802B0D60 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAXQEAPEAVIDeviceResourceNotify@@_K1@Z @ 0x1800B99F4 (-_Change_array@-$vector@PEAVIDeviceResourceNotify@@V-$allocator@PEAVIDeviceResourceNotify@@@std@.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

char *__fastcall std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[8 * v5];
  *(_QWORD *)v14 = *a3;
  v15 = v13;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v15 = v14 + 8;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<IDeviceResourceNotify *>::_Change_array(a1, v13, v9, v3);
  return v14;
}
