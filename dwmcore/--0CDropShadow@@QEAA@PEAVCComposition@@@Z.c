/*
 * XREFs of ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800F7E20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@1@AEBV?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@1@@Z @ 0x1800F7F54 (--0-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@PEAV.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800F7FC8 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 */

CDropShadow *__fastcall CDropShadow::CDropShadow(CDropShadow *this, struct CComposition *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CDropShadow *result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  *((_QWORD *)this + 8) = &CDropShadow::`vbtable'{for `CContent'};
  *((_QWORD *)this + 38) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 37) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 38) + 4LL) + 304) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v4 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CDropShadow::`vftable';
  v8 = 0;
  *(_QWORD *)((char *)this + *(int *)(v4 + 4) + 64) = &CDropShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CDropShadow::`vftable'{for `IContent'};
  v5 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v5 + 60) = v5 - 216;
  v6 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v6 + 60) = v6 - 232;
  *((_DWORD *)this + 22) = 1091567616;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1065353216;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>(
    (char *)this + 200,
    &v8);
  CDropShadow::ShadowIntermediates::SetMask((CDropShadow *)((char *)this + 128), this, 0LL);
  result = this;
  *((_DWORD *)this + 21) = 1065353216;
  return result;
}
