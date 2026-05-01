/*
 * XREFs of ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@XZ @ 0x1800BF0A8
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C0F88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV-$c.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0DAC (--0-$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  tip::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)a1 = &tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_BYTE *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 288) = 1;
  return result;
}
