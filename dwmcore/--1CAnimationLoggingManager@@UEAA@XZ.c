void __fastcall CAnimationLoggingManager::~CAnimationLoggingManager(CAnimationLoggingManager *this)
{
  __int64 v2; // rcx

  std::wstring::_Tidy_deallocate((_QWORD *)this + 20);
  std::_Deallocate<16,0>(
    *((void **)this + 15),
    (*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
    v2,
    *((_QWORD *)this + 13));
  std::_Deallocate<16,0>(*((void **)this + 13), 0x48uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
