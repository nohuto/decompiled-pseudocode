struct CDropShadow::ShadowIntermediates *__fastcall CDropShadow::GetEffectiveShadowIntermediates(
        CDropShadow *this,
        struct CVisual *a2)
{
  __int64 appended; // rax
  __int64 v4; // rdx
  struct CDropShadow::ShadowIntermediates *result; // rax
  struct CVisual *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_DWORD *)this + 31) != 1 )
    return (CDropShadow *)((char *)this + 128);
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v6, 8uLL);
  v4 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
         (_QWORD *)this + 25,
         &v6,
         appended);
  result = 0LL;
  if ( v4 != *((_QWORD *)this + 26) )
    return (struct CDropShadow::ShadowIntermediates *)(v4 + 24);
  return result;
}
