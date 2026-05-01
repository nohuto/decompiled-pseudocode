/*
 * XREFs of ??$call@AEAV_lambda_8eb0229a865306011360fe7506f306d2_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?AURandomAccessStreamReference@Streams@Storage@Windows@2@AEAV_lambda_8eb0229a865306011360fe7506f306d2_@@@Z @ 0x180133B48
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@winrt@@YA?AUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x180133FE0 (--$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@w.c)
 *     ?CreateFromStream@?$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AURandomAccessStreamReference@Streams@Storage@Windows@3@AEBUIRandomAccessStream@5673@@Z @ 0x1801388CC (-CreateFromStream@-$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandom.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::call<_lambda_8eb0229a865306011360fe7506f306d2_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF

  v7 = a2;
  v8[2] = &qword_180651128;
  _InterlockedIncrement64(&qword_180651128);
  if ( `winrt::impl::call_factory<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,_lambda_8eb0229a865306011360fe7506f306d2_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
      &`winrt::impl::call_factory<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,_lambda_8eb0229a865306011360fe7506f306d2_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180651128);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651128);
    v8[0] = L"Windows.Storage.Streams.RandomAccessStreamReference";
    v8[1] = 51LL;
    winrt::param::hstring::hstring(string, (__int64)v8);
    winrt::get_activation_factory<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>(&v10, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v10, &v7);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    if ( v5 )
    {
      v8[3] = &qword_180651128;
      _InterlockedIncrement64(&qword_180651128);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,_lambda_8eb0229a865306011360fe7506f306d2_>'::`2'::factory,
              v10,
              0LL) )
      {
        v10 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651130);
      }
      winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
        &`winrt::impl::call_factory<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,_lambda_8eb0229a865306011360fe7506f306d2_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180651128);
    }
    else
    {
      winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
        &v10,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
  }
  return a2;
}
