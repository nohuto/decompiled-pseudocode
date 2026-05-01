/*
 * XREFs of ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z @ 0x1800A1E50
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A86B8 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A13E8 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8D8 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

_QWORD *__fastcall tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`scalar deleting destructor'(
        _QWORD *a1)
{
  *a1 = &tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`vftable';
  tip::details::shared_data<0,0,0>::on_destroy(a1 + 1);
  std::wstring::_Tidy_deallocate(a1 + 48);
  std::wstring::_Tidy_deallocate(a1 + 44);
  std::wstring::_Tidy_deallocate(a1 + 39);
  std::wstring::_Tidy_deallocate(a1 + 34);
  tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(a1 + 1));
  return a1;
}
