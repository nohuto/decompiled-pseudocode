struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::TryGetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  __int64 v2; // rbx
  struct CResource *v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v2 = 0LL;
  if ( a2 )
  {
    std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::find<void>(
      (char *)this + 96,
      &v6,
      &v5);
    if ( v6 != *((_QWORD *)this + 13) )
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(v6 + 24);
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v2;
}
