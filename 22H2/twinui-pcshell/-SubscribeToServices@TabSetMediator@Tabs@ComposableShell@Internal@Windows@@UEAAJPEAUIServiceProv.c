/*
 * XREFs of ?SubscribeToServices@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x18030C280
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803099EC (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMedia.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::SubscribeToServices(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    QueryService = a2->lpVtbl->QueryService;
    v5 = (__int64 *)((char *)this + 136);
    v6 = *((_QWORD *)this + 17);
    *v5 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        37LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v7);
    v9 = SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),Windows::Internal::ComposableShell::Tabs::TabSetMediator *>(
           (__int64)this + 144,
           *v5,
           v8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        42LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v9);
    v10 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 37);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v10)(
            a2,
            &unk_1805B2A68,
            &GUID_d1710073_c814_4a0c_9685_00e44547418f,
            (char *)this + 296);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        44LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v11);
    v12 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 38);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)this + 304);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        45LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           v14);
  }
  return result;
}
