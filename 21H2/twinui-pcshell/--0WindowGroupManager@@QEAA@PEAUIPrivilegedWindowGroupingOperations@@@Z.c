/*
 * XREFs of ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180303C10
 * Callers:
 *     ??$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowGroupManager@@@12@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180303470 (--$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801AA5F4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801AD41C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=7
WindowGroupManager *__fastcall WindowGroupManager::WindowGroupManager(
        WindowGroupManager *this,
        struct IPrivilegedWindowGroupingOperations *a2)
{
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rbp
  __int64 v7; // r8
  const char *v8; // r9
  volatile int *v9; // rdx
  signed int LastErrorFailHr; // eax
  wil::details::in1diag3 *v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  wil::details *Thread; // rax
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v18; // [rsp+58h] [rbp+10h]

  Microsoft::WRL::FtmBase::FtmBase((WindowGroupManager *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroupManager,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroupManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowGroupManager,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroupManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &WindowGroupManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &WindowGroupManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &WindowGroupManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowGroupManager,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroupManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &WindowGroupManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v18 = v18;
  v18[1] = v18;
  v18[2] = v18;
  *((_WORD *)v18 + 12) = 257;
  *((_QWORD *)this + 10) = v18;
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IPrivilegedWindowGroupingOperations *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 14,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
  }
  v11 = retaddr;
  if ( LastErrorFailHr < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v11,
      56LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    __debugbreak();
  }
  v12 = *((_QWORD *)this + 8);
  while ( v12 >= 0 )
  {
    if ( (_DWORD)v12 != 0x7FFFFFFF )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v12 + 1, v12);
      if ( v13 != v12 )
        continue;
    }
    goto LABEL_15;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v12 + 16), v9);
LABEL_15:
  Thread = (wil::details *)CreateThread(
                             0LL,
                             0LL,
                             (LPTHREAD_START_ROUTINE)lambda_74683e00bb44ac1c285a2f54870ed16f_::_lambda_invoker_cdecl_,
                             this,
                             0,
                             0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 13,
    Thread);
  if ( !*((_QWORD *)this + 13) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
      v15);
    goto LABEL_18;
  }
  return this;
}
