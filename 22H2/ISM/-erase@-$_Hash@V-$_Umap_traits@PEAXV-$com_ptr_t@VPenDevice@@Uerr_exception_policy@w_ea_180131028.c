/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180131028
 * Callers:
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801303B8 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18008E208 (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180130F38 (-clear@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180130F9C (-erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // r8
  _QWORD *v9; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-10h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
    a1,
    &v9,
    a2);
  v3 = v9;
  v4 = 0LL;
  v5 = v9;
  while ( v5 != v10 )
  {
    v5 = (_QWORD *)*v5;
    ++v4;
  }
  v6 = (_QWORD *)a1[1];
  if ( v9 == (_QWORD *)*v6 && v10 == v6 )
  {
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::clear((__int64)a1);
  }
  else
  {
    while ( v3 != v10 )
    {
      v8 = (__int64)v3;
      v3 = (_QWORD *)*v3;
      std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
        a1,
        (__int64)&v11,
        v8);
    }
  }
  return v4;
}
