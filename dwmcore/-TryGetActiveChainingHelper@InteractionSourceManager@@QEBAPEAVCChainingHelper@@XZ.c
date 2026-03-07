struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(InteractionSourceManager *this)
{
  __int64 v1; // rbx
  __int64 appended; // rax
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 14) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11)
                                 + 8 * ((*((_QWORD *)this + 12) - 1LL) & (*((_QWORD *)this + 13) >> 1)))
                     + 8 * (*((_QWORD *)this + 13) & 1LL));
      appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v7, 8uLL);
      v5 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
             (char *)this + 16,
             v4,
             appended);
      if ( v5 != *((_QWORD *)this + 3) )
        return *(struct CChainingHelper **)(v5 + 24);
    }
  }
  return (struct CChainingHelper *)v1;
}
