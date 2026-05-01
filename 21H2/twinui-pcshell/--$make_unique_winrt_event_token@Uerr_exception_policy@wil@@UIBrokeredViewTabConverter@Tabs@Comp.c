/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@1@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1804BA988
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BB308 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGI@AA @ 0x180164DF0 (--_9IPropertyValue@Foundation@Windows@@$BGI@AA.c)
 *     ??$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1804BA8AC (--$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Window.c)
 */

_QWORD *wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,long (Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *> *>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        ...)
{
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  __int64 v13; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *));
  v13 = va_arg(va1, _QWORD);
  v4 =  Windows::Foundation::IPropertyValue::`vcall'{104,{flat}}((__int64)a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  *a1 = v13;
  a1[1] = 0LL;
  a1[2] =  ISwitchItemController::`vcall'{112,{flat}};
  v11 = a2;
  v5 = wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(
         v9,
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))va);
  v6 = *v5;
  *v5 = 0LL;
  v7 = a1[1];
  a1[1] = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  return a1;
}
