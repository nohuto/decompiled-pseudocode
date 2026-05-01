/*
 * XREFs of ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1804BA38C
 * Callers:
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x1804BB390 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  signed int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value, &v6);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
