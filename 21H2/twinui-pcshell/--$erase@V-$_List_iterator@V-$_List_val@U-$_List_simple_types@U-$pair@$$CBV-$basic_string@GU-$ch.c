/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@1@V21@@Z @ 0x1800E642C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______int64_std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____int64____0___::_Insert_unverified_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____int64__________::_1_::catch$48 @ 0x1800E4ECB (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1800E4ECB.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180076704 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@2@@Z @ 0x1800EF144 (-erase@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_K@std@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,unsigned __int64>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  const unsigned __int8 *v4; // rdx
  bool v6; // cf
  __int64 v7; // r8
  __int64 appended; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

  v4 = (const unsigned __int8 *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 40) < 8uLL;
  v7 = *(_QWORD *)(a3 + 32);
  if ( !v6 )
    v4 = *(const unsigned __int8 **)v4;
  appended = std::_Fnv1a_append_bytes((__int64)a1, v4, 2 * v7);
  v10 = a1[3];
  v11 = 2 * (a1[6] & appended);
  if ( *(_QWORD **)(v10 + 16 * (a1[6] & appended) + 8) == v9 )
  {
    if ( *(_QWORD **)(v10 + 16 * (a1[6] & appended)) == v9 )
    {
      *(_QWORD *)(v10 + 16 * (a1[6] & appended)) = a1[1];
      v10 = a1[3];
      v12 = a1[1];
    }
    else
    {
      v12 = v9[1];
    }
    *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
  }
  else if ( *(_QWORD **)(v10 + 16 * (a1[6] & appended)) == v9 )
  {
    *(_QWORD *)(v10 + 16 * (a1[6] & appended)) = *v9;
  }
  std::list<std::pair<std::wstring const,unsigned __int64>>::erase(a1 + 1, a2, v9);
  return a2;
}
