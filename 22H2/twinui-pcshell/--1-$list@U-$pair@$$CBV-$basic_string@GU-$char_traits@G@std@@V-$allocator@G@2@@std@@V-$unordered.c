/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@@2@@std@@QEAA@XZ @ 0x18011B01C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$66 @ 0x18011A764 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_18011A764.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801181C8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_1801181C8.c)
 */

void __fastcall __1__list_U__pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__unordered_map_Uhstring_winrt__V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__U__hash_Uhstring_winrt___4_U__equal_to_Uhstring_winrt___4_V__allocator_U__pair___CBUhstring_winrt__V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std___4__2__std__V__allocator_U__pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__unordered_map_Uhstring_winrt__V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__U__hash_Uhstring_winrt___4_U__equal_to_Uhstring_winrt___4_V__allocator_U__pair___CBUhstring_winrt__V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std___4__2__std___2__std__QEAA_XZ(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>>>(
        (__int64)a1,
        v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x70);
}
