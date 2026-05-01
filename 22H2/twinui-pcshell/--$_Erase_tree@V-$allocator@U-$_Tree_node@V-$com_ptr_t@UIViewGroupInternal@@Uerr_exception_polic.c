/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1802FAA0C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1802FAA0C (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_polic.c)
 *     ??1ViewGroupManager@@UEAA@XZ @ 0x1802FAF2C (--1ViewGroupManager@@UEAA@XZ.c)
 *     ??1?$set@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x1803059CC (--1-$set@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U-$less@X@std@@V-$allo.c)
 *     ??1ViewGroup@@EEAA@XZ @ 0x180305A98 (--1ViewGroup@@EEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180308898 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_180308898.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1802FAA0C (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_polic.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rbx

  v3 = a3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,void *>>>(
      a1,
      a2,
      *(_QWORD *)(v3 + 16));
    v6 = (__int64 *)v3;
    v3 = *(_QWORD *)v3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v6 + 4);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
  }
}
