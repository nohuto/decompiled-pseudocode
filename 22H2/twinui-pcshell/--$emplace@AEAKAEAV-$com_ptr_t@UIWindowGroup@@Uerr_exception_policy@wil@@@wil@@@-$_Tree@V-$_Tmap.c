/*
 * XREFs of ??$emplace@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803038E0
 * Callers:
 *     ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x180304170 (-CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1802BAB18 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::emplace<unsigned long &,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy> &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rbp
  _QWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *((_DWORD *)v9 + 8) = *a3;
  v11 = *a4;
  v9[5] = *a4;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>> &,std::_Tree_node<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>,void *> *>(
    a1,
    a2,
    v10,
    (_DWORD *)v9 + 8,
    v9);
  return a2;
}
