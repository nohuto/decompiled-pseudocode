/*
 * XREFs of ??1?$unordered_map@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E8224
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$0 @ 0x1800EAE6A (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1800EAE6A.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E4500 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE45C (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::unordered_map<unsigned __int64,std::wstring>::~unordered_map<unsigned __int64,std::wstring>(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx

  std::vector<void *>::_Tidy(a1 + 24);
  v3 = *(_QWORD ***)(a1 + 8);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>(
        v2,
        v4);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x38);
}
