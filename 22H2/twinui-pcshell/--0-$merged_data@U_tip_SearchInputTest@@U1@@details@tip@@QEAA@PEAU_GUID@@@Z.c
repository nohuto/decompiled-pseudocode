/*
 * XREFs of ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z @ 0x1800BEF98
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDBC (--$open@V-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA-AV-$ti.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0D8C (--0-$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z @ 0x1800C1194 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  tip::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)a1 = &tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  *(_BYTE *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 288) = 1;
  tip::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2);
  return a1;
}
