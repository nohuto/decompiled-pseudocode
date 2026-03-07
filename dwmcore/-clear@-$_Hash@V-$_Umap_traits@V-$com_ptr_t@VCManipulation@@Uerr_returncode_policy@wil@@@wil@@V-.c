void __fastcall std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear(
        unsigned __int64 *a1)
{
  void *v2; // rdi
  unsigned __int64 v3; // rcx

  if ( a1[2] )
  {
    std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>>>(
      (__int64)a1,
      (_QWORD **)a1[1]);
    *(_QWORD *)a1[1] = a1[1];
    *(_QWORD *)(a1[1] + 8) = a1[1];
    a1[2] = 0LL;
    v2 = (void *)a1[3];
    v3 = (a1[4] - (unsigned __int64)v2 + 7) >> 3;
    if ( (unsigned __int64)v2 > a1[4] )
      v3 = 0LL;
    if ( v3 )
      memset64(v2, a1[1], v3);
  }
}
