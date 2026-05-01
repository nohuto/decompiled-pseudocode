/*
 * XREFs of ??$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUISecondaryTilePrivate@StartScreen@UI@Internal@23@XZ @ 0x180133220
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x180138A24 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD **); // rcx
  __int64 (__fastcall **v4)(_QWORD, void *, _QWORD **); // rax
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v3 = *a1;
  if ( v3 )
  {
    v4 = *v3;
    v7 = 0LL;
    v5 = (*v4)(
           v3,
           &winrt::impl::guid_storage<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::value,
           &v7);
    winrt::check_hresult(v5);
    *a2 = v7;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
