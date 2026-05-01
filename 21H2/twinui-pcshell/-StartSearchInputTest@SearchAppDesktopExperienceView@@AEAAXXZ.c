/*
 * XREFs of ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AC0
 * Callers:
 *     ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C0150 (-LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFF8 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QEAPEBG@Z @ 0x1800BECBC (--$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QE.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF178 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF22C (--4-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1338 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?test_id@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA?AU_GUID@@XZ @ 0x1800C1394 (-test_id@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA-AU_GUID@@X.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchAppDesktopExperienceView::StartSearchInputTest(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView *v1; // rdi
  __int64 v2; // rax
  winrt::hstring *v3; // rax
  HSTRING *v4; // rdi
  HSTRING v5; // rbx
  unsigned int v6; // [rsp+20h] [rbp-20h] BYREF
  __int16 v7; // [rsp+24h] [rbp-1Ch]
  __int16 v8; // [rsp+26h] [rbp-1Ah]
  char v9; // [rsp+28h] [rbp-18h]
  char v10; // [rsp+29h] [rbp-17h]
  char v11; // [rsp+2Ah] [rbp-16h]
  char v12; // [rsp+2Bh] [rbp-15h]
  char v13; // [rsp+2Ch] [rbp-14h]
  char v14; // [rsp+2Dh] [rbp-13h]
  char v15; // [rsp+2Eh] [rbp-12h]
  char v16; // [rsp+2Fh] [rbp-11h]
  _BYTE v17[16]; // [rsp+30h] [rbp-10h] BYREF
  void *v18; // [rsp+50h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+18h] BYREF

  v18 = this;
  v1 = `anonymous namespace'::g_searchAppExperienceView;
  if ( (unsigned __int16)GetKeyboardLayout(0) == 1033 )
  {
    v18 = 0LL;
    tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator=(
      (void **)v1 + 41,
      (__int64)&v18);
    tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::start((char *)v1 + 328, &v6);
    v2 = tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::test_id(
           (char *)v1 + 328,
           v17);
    v6 = *(_DWORD *)v2;
    v7 = *(_WORD *)(v2 + 4);
    v8 = *(_WORD *)(v2 + 6);
    v9 = *(_BYTE *)(v2 + 8);
    v10 = *(_BYTE *)(v2 + 9);
    v11 = *(_BYTE *)(v2 + 10);
    v12 = *(_BYTE *)(v2 + 11);
    v13 = *(_BYTE *)(v2 + 12);
    v14 = *(_BYTE *)(v2 + 13);
    v15 = *(_BYTE *)(v2 + 14);
    v16 = *(_BYTE *)(v2 + 15);
    v3 = winrt::to_hstring((winrt::hstring *)&StringRawBuffer, &v6);
    v4 = (HSTRING *)((char *)v1 + 336);
    if ( v4 != (HSTRING *)v3 )
    {
      v5 = *(HSTRING *)v3;
      *(_QWORD *)v3 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(v4);
      *v4 = v5;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&StringRawBuffer);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v4, 0LL);
    CortanaProactiveTelemetry::SearchAppDesktopExperienceView_SearchInputTestStarted<unsigned short const *>((__int64 *)&StringRawBuffer);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(&v18);
  }
}
