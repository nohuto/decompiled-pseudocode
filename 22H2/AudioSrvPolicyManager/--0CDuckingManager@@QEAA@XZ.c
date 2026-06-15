/*
 * XREFs of ??0CDuckingManager@@QEAA@XZ @ 0x1800089D0
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000609C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A19C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
CDuckingManager *__fastcall CDuckingManager::CDuckingManager(CDuckingManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents,IAudioDuckingManager>::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents,IAudioDuckingManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioDuckingManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDuckingManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 1) = &CDuckingManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioDuckingManager>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CDuckingManager *)((char *)this + 72));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 176), 0, 0);
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 28) = v2;
  v3 = v2;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  *((_QWORD *)this + 30) = v4;
  *((_QWORD *)this + 32) = v4 + 16;
  v5 = 16LL;
  do
  {
    *v4++ = v3;
    --v5;
  }
  while ( v5 );
  *((_QWORD *)this + 31) = v4;
  *((_QWORD *)this + 33) = 7LL;
  *((_QWORD *)this + 34) = 8LL;
  *((_DWORD *)this + 54) = 1065353216;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 360) = 0;
  _Mtx_init_in_situ((CDuckingManager *)((char *)this + 368), 2);
  *((_DWORD *)this + 72) = 3;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 1;
  *((_DWORD *)this + 88) = 72;
  *((_DWORD *)this + 112) = 2;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  return this;
}
