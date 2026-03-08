/*
 * XREFs of ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x18010D49C
 * Callers:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@U?$_Tree_id@PEAU?$_Tree_node@_KPEAX@std@@@2@QEAU32@@Z @ 0x180036B2C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@U-$_.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Insert_node @ 0x1800FDA7C (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800FDA7C.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18010D0A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU-$_Tree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = *v2;
  if ( !*(_BYTE *)(*v2 + 25LL) )
    *(_QWORD *)(*v2 + 8LL) = a2;
  v2[1] = *(_QWORD *)(a2 + 8);
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = *(_QWORD **)(a2 + 8);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
  }
  *v2 = a2;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
