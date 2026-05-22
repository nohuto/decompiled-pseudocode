/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA@XZ @ 0x1800F4BB8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient____0___::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient____0____::_1_::dtor$0 @ 0x18004F5F8 (_std--_Hash_std--_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_--InputObserverClient.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::~list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>(
        void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
