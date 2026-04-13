/*
 * XREFs of ??0?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@1@@Z @ 0x18007F46C
 * Callers:
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x18007F060 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@XZ @ 0x18007F580 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V-$al.c)
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18007FA4C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(
        __int64 *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 **v4; // r8
  __int64 *i; // rcx
  __int64 v6; // rax
  __int64 j; // rcx
  __int64 *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>>::_Buyheadnode(a1);
  *a1 = v2;
  try
  {
    *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(a1);
    a1[1] = qword_18019D440;
    v3 = (_QWORD *)*a1;
    v4 = *(__int64 ***)(*a1 + 8);
    if ( *((_BYTE *)v4 + 25) )
    {
      *v3 = v3;
      *(_QWORD *)(*a1 + 16) = *a1;
    }
    else
    {
      for ( i = *v4; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v4 = (__int64 **)i;
      *v3 = v4;
      v6 = *(_QWORD *)(*a1 + 8);
      for ( j = *(_QWORD *)(v6 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v6 = j;
      *(_QWORD *)(*a1 + 16) = v6;
    }
    result = a1;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tidy(a1);
    throw;
  }
  return result;
}
