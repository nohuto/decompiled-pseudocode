/*
 * XREFs of ??1?$list@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAA@XZ @ 0x180097A40
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ConsumerControlDeviceCollection::UsageList_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ConsumerControlDeviceCollection::UsageList____0___::_Hash_std::_Umap_traits_unsigned_long_ConsumerControlDeviceCollection::UsageList_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ConsumerControlDeviceCollection::UsageList____0____::_1_::dtor$0 @ 0x180097878 (_std--_Hash_std--_Umap_traits_unsigned_long_ConsumerControlDeviceCollection--UsageList_std--_Uha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::~list<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
