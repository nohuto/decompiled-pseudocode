/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@2@V32@@Z @ 0x1803C66E4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Insert_unverified_unsigned_int_const__std::_Not_a_node_tag__::_1_::catch$47 @ 0x1803B4A1F (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_1803B4A1F.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Insert_unverified_unsigned_int_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int____std::_Iterator_base0____::_1_::catch$55 @ 0x1803B4BB6 (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_1803B4BB6.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180076704 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@IV?$allocator@I@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@2@@Z @ 0x1803C6778 (-erase@-$list@IV-$allocator@I@std@@@std@@QEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_ty.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 4uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  v10 = *(_QWORD *)std::list<unsigned int>::erase(a1 + 1, &v12, v6);
  result = a2;
  *a2 = v10;
  return result;
}
