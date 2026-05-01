/*
 * XREFs of ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800EA6B8
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x1800ECB20 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800EF650 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001E264 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800E864C (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1800EA624 (-EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNoti.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBAIXZ @ 0x1800EC664 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800ECAD8 (-HomeGeographicRegion@-$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18021A904 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  int v4; // r14d
  int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // eax
  struct IUnknown *v8; // rdx
  int v9; // eax
  unsigned int v10; // r13d
  int v11; // r12d
  __int64 (__fastcall *v12)(__int64, _QWORD, void **); // rbx
  void **v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  bool v17; // bl
  _QWORD *v18; // rax
  unsigned int v19; // eax
  const struct _tlgProvider_t *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  const struct _tlgProvider_t *v23; // rcx
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-18h] BYREF
  __int64 v29; // [rsp+48h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+50h] BYREF
  int v32; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+60h] BYREF

  LODWORD(v31) = 0;
  v30 = 0LL;
  v26 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 54) + 48LL))(
         *((_QWORD *)this + 54),
         *((_QWORD *)this + 56),
         0LL,
         &v26);
  winrt::check_hresult(v2);
  v3 = v26;
  v29 = v26;
  v4 = 1;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v30);
  v5 = 0;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v30);
  winrt::check_hresult(v7);
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = v4;
    if ( v9 == (_DWORD)v30 )
      break;
    v33 = 0LL;
    LODWORD(v31) = v4 | 4;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v3 + 48LL);
    v13 = winrt::put_abi((winrt *)&v33, v8);
    v14 = v12(v26, v10, v13);
    winrt::check_hresult(v14);
    v4 |= 2u;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 64LL))(v33, &v32);
    winrt::check_hresult(v15);
    if ( v32 == 1 )
    {
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::EnsureTileRemoved(
        (RTL_SRWLOCK *)this,
        (const struct winrt::Windows::Internal::Tiles::ITileNotification *)&v33);
    }
    else if ( !v32 )
    {
      v16 = winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
              &v33,
              &v27);
      v17 = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(v16) == 1;
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v27);
      if ( v17 )
      {
        v18 = (_QWORD *)winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
                          &v33,
                          &v28);
        v31 = 0LL;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v18 + 104LL))(*v18, &v31);
        winrt::check_hresult(v19);
        v4 = v11 | 0xA;
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v28);
        if ( winrt::operator==((__int64)&v31, L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App")
          || winrt::operator==((__int64)&v31, L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App")
          || winrt::operator==((__int64)&v31, L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App")
          || winrt::operator==((__int64)&v31, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App")
          || winrt::operator==((__int64)&v31, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App") )
        {
          ++v5;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v31);
      }
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v33);
    v9 = ++v6;
    v10 = v6;
    v3 = v26;
  }
  if ( *((_BYTE *)this + 832) )
  {
    v20 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v20 > 5u && tlgKeywordOn((__int64)v20, 0x400000000000LL) )
    {
      v31 = 0x2000000LL;
      LODWORD(v30) = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v21,
        byte_18059F738,
        0LL,
        v22,
        (__int64)&v30,
        (__int64)&v31);
    }
    *((_BYTE *)this + 832) = 0;
  }
  else if ( v5 )
  {
    v23 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v23 > 5u )
    {
      if ( tlgKeywordOn((__int64)v23, 0x400000000000LL) )
      {
        v30 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v24,
          (int)&unk_18059F794,
          0,
          v25,
          (__int64)&v30);
      }
    }
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v29);
}
