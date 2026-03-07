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
