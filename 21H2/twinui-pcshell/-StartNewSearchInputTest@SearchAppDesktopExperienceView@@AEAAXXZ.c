/*
 * XREFs of ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944
 * Callers:
 *     ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C0150 (-LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1888 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFF8 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QEAPEBG@Z @ 0x1800BECBC (--$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QE.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDDC (--$open@V-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA-AV-$ti.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF178 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF22C (--4-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800BF554 (-CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1338 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?test_id@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA?AU_GUID@@XZ @ 0x1800C1394 (-test_id@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA-AU_GUID@@X.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchAppDesktopExperienceView::StartNewSearchInputTest(SearchAppDesktopExperienceView *this)
{
  __int64 *v1; // rdi
  winrt::hstring *v2; // rax
  HSTRING *v3; // rdi
  HSTRING v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-10h] BYREF
  void *v7; // [rsp+50h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+18h] BYREF

  v7 = this;
  v1 = (__int64 *)`anonymous namespace'::g_searchAppExperienceView;
  if ( (unsigned __int16)GetKeyboardLayout(0) == 1033 )
  {
    if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool(v1 + 41) )
    {
      v5 = *(_OWORD *)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::test_id(
                        v1 + 41,
                        v6);
      tip::open<tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>>(&v7, &v5);
      if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((__int64 *)&v7) )
      {
        SearchAppDesktopExperienceView::CompleteSearchInputTest((SearchAppDesktopExperienceView *)v1);
LABEL_9:
        wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(&v7);
        return;
      }
      wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(&v7);
    }
    v7 = 0LL;
    tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator=(
      (void **)v1 + 41,
      (__int64)&v7);
    tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::start(v1 + 41, v6);
    v5 = *(_OWORD *)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::test_id(
                      v1 + 41,
                      v6);
    v2 = winrt::to_hstring((winrt::hstring *)&StringRawBuffer, (unsigned int *)&v5);
    v3 = (HSTRING *)(v1 + 42);
    if ( v3 != (HSTRING *)v2 )
    {
      v4 = *(HSTRING *)v2;
      *(_QWORD *)v2 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(v3);
      *v3 = v4;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&StringRawBuffer);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v3, 0LL);
    CortanaProactiveTelemetry::SearchAppDesktopExperienceView_SearchInputTestStarted<unsigned short const *>((__int64 *)&StringRawBuffer);
    goto LABEL_9;
  }
}
