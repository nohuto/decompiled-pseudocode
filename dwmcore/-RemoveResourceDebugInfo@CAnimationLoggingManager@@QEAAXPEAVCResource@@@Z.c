void __fastcall CAnimationLoggingManager::RemoveResourceDebugInfo(CAnimationLoggingManager *this, struct CResource *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct CResource *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::find<void>(
    (char *)this + 96,
    &v4,
    &v5);
  if ( v4 != *((_QWORD *)this + 13) )
    std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Unchecked_erase((char *)this + 96);
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
