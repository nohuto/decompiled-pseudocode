/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18000C4AC
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@1@AEBV?$allocator@PEAUIUnknown@@@1@@Z @ 0x18000BD7C (--0-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknown@@@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18021CB30 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  SIZE_T size_of; // rax
  unsigned __int64 *v10; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v12; // rcx

  v5 = a1[1];
  v7 = (char *)v5 - (char *)*a1;
  v8 = v7 >> 3;
  if ( v7 >> 3 >= a2 )
  {
    result = 0LL;
    v12 = (unsigned __int64)(v7 + 7) >> 3;
    if ( *a1 > v5 )
      v12 = 0LL;
    if ( v12 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v12);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v10 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v8 )
      std::_Deallocate<16,0>(*a1, 8 * v8);
    result = &v10[a2];
    *a1 = v10;
    a1[1] = result;
    a1[2] = result;
    while ( v10 != result )
      *v10++ = a3;
  }
  return result;
}
