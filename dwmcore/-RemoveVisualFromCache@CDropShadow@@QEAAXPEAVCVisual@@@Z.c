void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  _QWORD *v3; // rdi
  __int64 appended; // rax
  __int64 v5; // rax
  struct CVisual *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (_QWORD *)((char *)this + 200);
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v6, 8uLL);
  v5 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
         v3,
         &v6,
         appended);
  if ( v5 != *((_QWORD *)this + 26) )
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Unchecked_erase(
      v3,
      v5);
}
