/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAA@XZ @ 0x1800F19B8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0____::_1_::dtor$0 @ 0x18004E83B (_std--_Hash_std--_Umap_traits_unsigned___int64_InputSiteHierarchyManager--InputSite_ea_18004E83B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::~list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>(
        void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  void *v5; // rcx
  __int64 v6; // rcx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = (void *)v3[5];
      if ( v5 )
      {
        std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v3[7] - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
        v3[5] = 0LL;
        v3[6] = 0LL;
        v3[7] = 0LL;
      }
      v6 = v3[3];
      if ( v6 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x40);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x40);
}
