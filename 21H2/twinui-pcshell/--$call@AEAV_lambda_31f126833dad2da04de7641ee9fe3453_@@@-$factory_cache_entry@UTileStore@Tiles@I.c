/*
 * XREFs of ??$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@Z @ 0x1800E5CEC
 * Callers:
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1800E7800 (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUri@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800A2E84 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800E696C (--$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA-AUITileSto.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_31f126833dad2da04de7641ee9fe3453_ &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD **a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = a2;
  v9[2] = &qword_180651008;
  _InterlockedIncrement64(&qword_180651008);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory,_lambda_31f126833dad2da04de7641ee9fe3453_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &`winrt::impl::call_factory<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory,_lambda_31f126833dad2da04de7641ee9fe3453_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180651008);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651008);
    v9[0] = L"Windows.Internal.Tiles.TileStore";
    v9[1] = 32LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
    if ( v5 )
    {
      v9[3] = &qword_180651008;
      _InterlockedIncrement64(&qword_180651008);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory,_lambda_31f126833dad2da04de7641ee9fe3453_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651010);
      }
      winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
        &`winrt::impl::call_factory<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory,_lambda_31f126833dad2da04de7641ee9fe3453_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180651008);
    }
    else
    {
      winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
        &v7,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
