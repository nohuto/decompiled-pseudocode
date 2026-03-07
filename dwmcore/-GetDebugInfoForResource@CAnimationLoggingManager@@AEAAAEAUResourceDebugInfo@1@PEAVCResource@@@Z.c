struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::GetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rdx
  __int64 v4; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CResource *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a2);
  if ( !DebugInfoForResource )
  {
    v4 = *(_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Try_emplace<CResource * const &,>(
                      (char *)this + 96,
                      v6,
                      &v7);
    ++*((_DWORD *)this + 48);
    DebugInfoForResource = (struct CAnimationLoggingManager::ResourceDebugInfo *)(v4 + 24);
    *(_DWORD *)DebugInfoForResource = *((_DWORD *)this + 48);
    *((_DWORD *)v7 + 8) |= 0x10u;
  }
  return DebugInfoForResource;
}
