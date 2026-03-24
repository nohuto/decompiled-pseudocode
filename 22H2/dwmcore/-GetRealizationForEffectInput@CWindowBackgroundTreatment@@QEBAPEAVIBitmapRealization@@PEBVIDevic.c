/*
 * XREFs of ?GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@PEBVIDeviceTarget@@@Z @ 0x18001172C
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180010F4C (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVIDeviceTarget@@@Z @ 0x1800117C8 (-lower_bound@-$_Hash@V-$_Umap_traits@PEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Mic.c)
 */

struct IBitmapRealization *__fastcall CWindowBackgroundTreatment::GetRealizationForEffectInput(
        CWindowBackgroundTreatment *this,
        const struct IDeviceTarget *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  const struct IDeviceTarget *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = 0LL;
  if ( !*((_BYTE *)this + 359) )
    goto LABEL_8;
  std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::lower_bound(
    (char *)this + 72,
    &v7,
    &v8);
  if ( v7 == *((_QWORD *)this + 10) )
    goto LABEL_8;
  std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::lower_bound(
    (char *)this + 72,
    &v7,
    &v8);
  if ( v7 == *((_QWORD *)this + 10) )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_8:
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
      return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v6 + 8) + 16LL) + v6 + 8);
    else
      return 0LL;
  }
  v4 = *(_QWORD *)(v7 + 24);
  if ( v4 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v4 + 8) + 16LL) + v4 + 8);
  return (struct IBitmapRealization *)v2;
}
