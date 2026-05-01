/*
 * XREFs of _lambda_7ebe327a947a791a3f61eeb2c5c67313_::operator() @ 0x180136D7C
 * Callers:
 *     wil::details::lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___::_lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___ @ 0x180135D38 (wil--details--lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___--_lambda_call__lambda_7ebe.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800A0F90 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::UI::StartScreen::SecondaryTile_winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate_::call__lambda_578f4592fdb1e9538d178bf5bf68d9f5__&_ @ 0x180133A10 (winrt--impl--factory_cache_entry_winrt--Windows--UI--StartScreen--SecondaryTile_winrt--Windows--.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7ebe327a947a791a3f61eeb2c5c67313_::operator()(const WCHAR *sourceString)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  const char *v4; // r9
  HSTRING string; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)sourceString + 4) )
  {
    try
    {
      winrt::impl::factory_cache_entry_winrt::Windows::UI::StartScreen::SecondaryTile_winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate_::call__lambda_578f4592fdb1e9538d178bf5bf68d9f5____(
        (__int64)sourceString,
        &v7);
      v2 = *((_QWORD *)sourceString + 4);
      winrt::param::hstring::hstring(&string, sourceString);
      v3 = (*(unsigned int (__fastcall **)(__int64, HSTRING, __int64))(*(_QWORD *)v7 + 72LL))(v7, string, v2);
      winrt::check_hresult(v3);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x252,
        (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v4);
    }
  }
}
