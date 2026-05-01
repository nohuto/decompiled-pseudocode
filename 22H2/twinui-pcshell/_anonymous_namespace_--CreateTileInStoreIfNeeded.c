/*
 * XREFs of _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x180138A24
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116BA4 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@X@-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ??$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUISecondaryTilePrivate@StartScreen@UI@Internal@23@XZ @ 0x180133220 (--$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@IUnknown@Foundation@Windows.c)
 *     _lambda_7ebe327a947a791a3f61eeb2c5c67313_::__lambda_7ebe327a947a791a3f61eeb2c5c67313_ @ 0x1801358A8 (_lambda_7ebe327a947a791a3f61eeb2c5c67313_--__lambda_7ebe327a947a791a3f61eeb2c5c67313_.c)
 *     ?TileId@?$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180142F8C (-TileId@-$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@w.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
HSTRING __fastcall anonymous_namespace_::CreateTileInStoreIfNeeded(HSTRING a1, const void **a2, __int64 *a3)
{
  winrt::impl **v6; // rax
  winrt::impl *v7; // rbx
  HSTRING v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  winrt::impl *v14; // [rsp+20h] [rbp-60h] BYREF
  HSTRING v15; // [rsp+28h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __m128i si128; // [rsp+40h] [rbp-40h]
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-20h] BYREF

  v15 = a1;
  v18[1] = a3;
  v14 = 0LL;
  if ( *a3 )
  {
    v6 = (winrt::impl **)winrt::impl::consume_Windows_UI_StartScreen_ISecondaryTile<winrt::Windows::UI::StartScreen::ISecondaryTile>::TileId(
                           a3,
                           &v15);
    if ( &v14 != v6 )
    {
      v7 = *v6;
      *v6 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v14);
      v14 = v7;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>(
      (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3,
      &v15);
    v8 = v15;
    v9 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 96LL))(v15);
    winrt::check_hresult(v9);
    v10 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 104LL))(v8);
    winrt::check_hresult(v10);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  }
  v11 = std::wstring::wstring((__int64)v19, a2);
  v16 = *(_OWORD *)v11;
  si128 = *(__m128i *)(v11 + 16);
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 24) = 7LL;
  *(_WORD *)v11 = 0;
  winrt::hstring::hstring((winrt::hstring *)v18, &v14);
  *(_OWORD *)a1 = v16;
  *((__m128i *)a1 + 1) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v16) = 0;
  v12 = v18[0];
  v18[0] = 0LL;
  *((_QWORD *)a1 + 4) = v12;
  *((_BYTE *)a1 + 40) = 1;
  lambda_7ebe327a947a791a3f61eeb2c5c67313_::__lambda_7ebe327a947a791a3f61eeb2c5c67313_((__int64)&v16);
  std::wstring::_Tidy_deallocate(v19);
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v14);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a3);
  return a1;
}
