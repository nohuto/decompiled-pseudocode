/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001ED10
 * Callers:
 *     ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18000A54C (--1CCachedWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ??4?$ComPtr@VIBitmapRealization@@@WRL@Microsoft@@QEAAAEAV012@PEAVIBitmapRealization@@@Z @ 0x18000B318 (--4-$ComPtr@VIBitmapRealization@@@WRL@Microsoft@@QEAAAEAV012@PEAVIBitmapRealization@@@Z.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4E24 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800B6800 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x180222ADC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180222D90 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x180223E50 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x180223F5C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x180224110 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180224240 (-OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x180224690 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18022473C (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024DB40 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    v3 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
