/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x180036E18
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180036504 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x180036EC0 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x180036F18 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180036F18.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18010CCB4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 i; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  LOBYTE(v6) = a3;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_(
                                             a1,
                                             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                                             v5,
                                             v6);
  v7 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v9 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min(v8);
    *v10 = v9;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(v11 + 8);
    for ( i = *(_QWORD *)(v12 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v12 = i;
    *(_QWORD *)(v11 + 16) = v12;
  }
  return a1;
}
