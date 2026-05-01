/*
 * XREFs of ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800F6610
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800A30C4 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800ECA90 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800EE728 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F6388 (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F63D0 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800F6E5C (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800F80E0 (-SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800FA4F8 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800FDF84 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE7A8 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800FE990 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180100AC8 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NXZ @ 0x180100E4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256DD4 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged(
        HWND *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs *a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 *v8; // rax
  bool v9; // r14
  _QWORD *v10; // rax
  int v11; // ebx
  __int64 *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r15
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // r13d
  __int64 (__fastcall *v21)(__int64, _QWORD, HSTRING *); // rbx
  unsigned int v22; // eax
  __m128i v23; // xmm1
  __int64 *v24; // rax
  HSTRING *v25; // rax
  const WCHAR *StringRawBuffer; // rax
  __m128i v27; // xmm1
  _QWORD *v28; // rax
  const struct winrt::hstring *v29; // rax
  _QWORD *v30; // rax
  const struct winrt::hstring *v31; // rax
  HSTRING v32; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v33; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v34; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v35; // [rsp+40h] [rbp-31h] BYREF
  __int64 v36; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v37; // [rsp+50h] [rbp-21h] BYREF
  __int64 v38; // [rsp+58h] [rbp-19h] BYREF
  __int64 v39; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v40[16]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v41[32]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v42; // [rsp+E8h] [rbp+77h] BYREF
  HSTRING v43; // [rsp+F0h] [rbp+7Fh] BYREF

  v5 = 0;
  v6 = 0;
  LODWORD(v42) = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 56LL))(*(_QWORD *)a3, &v42);
  winrt::check_hresult(v7);
  if ( (_BYTE)v42 && *((_BYTE *)this + 184) )
  {
    v8 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
           (__int64 *)a3,
           &v34);
    v9 = 1;
    LODWORD(v42) = 1;
    v10 = winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
            v8,
            &v33);
    v11 = 3;
    LODWORD(v42) = 3;
    if ( *v10 )
    {
      v12 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
              (__int64 *)a3,
              &v32);
      LODWORD(v42) = 7;
      v11 = 15;
      v9 = *winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
              v12,
              &v43) == 0LL;
    }
    if ( (v11 & 8) != 0 )
    {
      v11 &= ~8u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    }
    if ( (v11 & 4) != 0 )
    {
      v11 &= ~4u;
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v32);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
    v6 = v11 & 0xFFFFFFFC;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v34);
    if ( v9 )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v42);
    else
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(this, &v42);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 64LL))(*(_QWORD *)a3, &v42);
    winrt::check_hresult(v13);
    if ( (_BYTE)v42 )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(this, &v42);
  }
  v42 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 72LL))(*(_QWORD *)a3, &v42);
  winrt::check_hresult(v14);
  v15 = v42;
  v39 = v42;
  v16 = v6 | 0x10;
  v17 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 56LL))(v42, &v43);
  winrt::check_hresult(v18);
  v19 = 0;
  while ( 1 )
  {
    v20 = v16;
    if ( v19 == (_DWORD)v43 )
      break;
    v32 = 0LL;
    LODWORD(v42) = v16 | 0x40;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v15 + 48LL);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    v22 = v21(v15, v5, &v32);
    winrt::check_hresult(v22);
    v16 = v20 & 0xFFFFFF9F | 0x20;
    v23 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(&v32, v40);
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(
           v23.m128i_i64[0],
           _mm_srli_si128(v23, 8).m128i_i64[0],
           L"Title",
           _mm_srli_si128(*(__m128i *)&off_180509CB0, 8).m128i_i64[0]) )
    {
      v24 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
              (__int64 *)a3,
              &v33);
      v25 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
                         v24,
                         &v34);
      StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v25, 0LL);
      SetWindowTextW(this[4], StringRawBuffer);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v33);
    }
    else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
    {
      v27 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(&v32, v41);
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(
             v27.m128i_i64[0],
             _mm_srli_si128(v27, 8).m128i_i64[0],
             L"TreatAsSecondaryTileId",
             _mm_srli_si128(*(__m128i *)&off_180509CC0, 8).m128i_i64[0]) )
      {
        v28 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                (__int64 *)a3,
                &v36);
        v29 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                               v28,
                                               &v35);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v29);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v36);
        v30 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                (__int64 *)a3,
                &v38);
        v31 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                               v30,
                                               &v37);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v31);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v38);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this);
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    v19 = ++v17;
    v5 = v17;
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v39);
}
