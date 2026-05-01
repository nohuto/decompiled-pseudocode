/*
 * XREFs of ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18011A5FC
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x18011A4DC (--0-$heap_implements@V-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@1@AEBV?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@1@@Z @ 0x1800E7210 (--0-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_JV-$_U.c)
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800ED408 (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K.c)
 *     ??$call@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?AUPackageCatalog@ApplicationModel@Windows@2@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@Z @ 0x1801198F8 (--$call@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@-$factory_cache_entry@UPackageCatalog@Ap.c)
 *     ??0mutex@std@@QEAA@XZ @ 0x18035FBE0 (--0mutex@std@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1804BAC08 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1804D1234 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1804D1598 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=18
winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rcx
  GUID v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  *((_QWORD *)this + 11) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component(this);
  *(_QWORD *)v2 = &winrt::Windows::Internal::Shell::implementation::AppBackupListener::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *(_QWORD *)(v2 + 8) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *(_QWORD *)(v2 + 16) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *(_QWORD *)(v2 + 32) = &winrt::Windows::Internal::Shell::implementation::AppBackupListener::`vftable';
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_OWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_OWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_QWORD *)(v2 + 240) = 0LL;
  v3 = v2 + 248;
  v12 = v2 + 248;
  *(_DWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_QWORD *)(v2 + 264) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x70uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = v4;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  v6 = 16LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
    (_QWORD *)(v3 + 24),
    0x10uLL);
  v7 = *(_QWORD **)(v3 + 24);
  do
  {
    *v7++ = v5;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(v3 + 32) = v7;
  *(_QWORD *)(v3 + 48) = 7LL;
  *(_QWORD *)(v3 + 56) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  std::mutex::mutex((winrt::Windows::Internal::Shell::implementation::AppBackupListener *)((char *)this + 312));
  *((_QWORD *)this + 49) = 0LL;
  HIDWORD(v12) = ((unsigned __int64)this + 400) >> 32;
  LODWORD(v12) = 0;
  std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>(
    (__int64)this + 400,
    &v12,
    v8);
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 7LL;
  *((_WORD *)this + 232) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 7LL;
  *((_WORD *)this + 248) = 0;
  winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>::call<_lambda_012ba66bd771075c52d904e15f0e6430_ &>(
    v9,
    &v12);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 96, &v12);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
  v11 = GUID_2eea1178_e9d9_45a1_8d5c_aff70a8187f8;
  winrt::immersive_shell_component::register_service_information<_GUID const>(this, &v11);
  return this;
}
