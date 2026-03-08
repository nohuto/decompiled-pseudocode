/*
 * XREFs of ?_Move_assign@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x180037468
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180037050 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1800375A0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Move_assign(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
    a1,
    a1,
    *(_QWORD *)(*a1 + 8LL));
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  a1[1] = 0LL;
  v5 = *a1;
  *a1 = *a2;
  result = a2[1];
  *a2 = v5;
  v7 = a1[1];
  a1[1] = result;
  a2[1] = v7;
  return result;
}
