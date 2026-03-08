/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180020210 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x180029D90 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1800EFF60 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDevi.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801BA1EC (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x180220BB0 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x180221130 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x18025FF90 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAX.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802B0FC0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CD3DResource::RemoveResourceNotifier(CD3DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **v4; // rcx
  const struct IDeviceResourceNotify **v6; // rdx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 10);
  v4 = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 9);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 10) -= 8LL;
  }
}
