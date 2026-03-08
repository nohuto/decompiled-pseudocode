/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1800375A0
 * Callers:
 *     ?_Move_assign@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x180037468 (-_Move_assign@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@AEAAXA.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180037510 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1800375A0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1800375A0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      operator delete(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
