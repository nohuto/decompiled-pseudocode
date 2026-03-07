void __fastcall InteractionSourceManager::~InteractionSourceManager(InteractionSourceManager *this)
{
  __int64 ***v2; // rsi
  __int64 **i; // rbx
  __int64 v4; // rcx

  InteractionSourceManager::ClearActiveManipulations(this);
  v2 = (__int64 ***)*((_QWORD *)this + 3);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    CChainingHelper::ClearAllConfigurations((CChainingHelper *)i[3]);
    CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 16LL), (struct CResource *)i[2]);
  }
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear((char *)this + 16);
  ReleaseInterface<CWeakReference<CResource>>((__int64 *)this + 1);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::~deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>((void **)this + 10);
  std::_Deallocate<16,0>(*((void **)this + 5), (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>>>(
    v4,
    *((_QWORD ***)this + 3));
  std::_Deallocate<16,0>(*((void **)this + 3), 0x20uLL);
}
