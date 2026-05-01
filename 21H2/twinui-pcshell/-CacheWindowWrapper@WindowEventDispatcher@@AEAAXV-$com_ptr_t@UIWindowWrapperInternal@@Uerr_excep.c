/*
 * XREFs of ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800263B0
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180029070 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180030320 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180327430 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x180024C80 (--$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800835C0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowEventDispatcher::CacheWindowWrapper(__int64 a1, __int64 **a2, _QWORD *a3, const char *a4)
{
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rdx
  __int64 *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  const WCHAR *v14; // [rsp+28h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*a3 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0xA71,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      a4);
    __debugbreak();
  }
  v7 = *a2;
  v8 = **a2;
  v15 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v15 = *a3;
  *((_QWORD *)&v15 + 1) = v9;
  (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v8 + 304))(v7, &v15, (unsigned int)a4);
  v10 = *(__int64 ***)(a1 + 376);
  if ( *(__int64 ***)(a1 + 384) == v10 )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
      a1 + 368,
      v10,
      a2);
  }
  else
  {
    v11 = *a2;
    *v10 = *a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
    *(_QWORD *)(a1 + 376) += 8LL;
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *))(**a2 + 288))(*a2);
  v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64 *))(**a2 + 272))(*a2);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CachedView<unsigned short const *,unsigned int>(&v14, &v13);
  if ( *a2 )
    (*(void (__fastcall **)(__int64 *))(**a2 + 16))(*a2);
  v12 = (std::_Ref_count_base *)a3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
