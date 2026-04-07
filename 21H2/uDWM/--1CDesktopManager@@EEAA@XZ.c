/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x180085860
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x180085C00 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180040608 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042DAC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800514A0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x180085B74 (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180085C50 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180085CA0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x180085CF0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180085D38 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180085DC0 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x180087328 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x180087464 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x18009D668 (--1CContactManager@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800AE5A0 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800BE4A0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800BF980 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v2; // rbp
  CBaseObject **v4; // rsi
  CBaseObject **v5; // rdi
  CAnimationClockCoordinator *v6; // rcx
  __int64 v7; // rdi
  CTransitionVisualController *v8; // rcx
  __int64 v9; // rdi
  CWindowList *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  CTextCache *v14; // rcx
  CIconicBitmapRegistry *v15; // rcx
  CImmersiveIconicBitmapRegistry *v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  CCompositor *v19; // rcx
  CBaseObject *v20; // rcx
  __int64 v21; // rcx
  CBaseObject *v22; // rcx
  void *v23; // rdx
  CBaseObject *v24; // rcx
  CBaseObject **v25; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 150);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v25 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 576, a2, &v25);
    v4 = v25;
    if ( v25 )
    {
      v5 = v25;
      do
      {
        CBaseObject::Release(*v5++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  v6 = (CAnimationClockCoordinator *)*((_QWORD *)this + 25);
  if ( v6 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v6, a2);
    *((_QWORD *)this + 25) = 0LL;
  }
  v7 = *((_QWORD *)this + 30);
  if ( v7 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 30));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v7);
    *((_QWORD *)this + 30) = 0LL;
  }
  v8 = (CTransitionVisualController *)*((_QWORD *)this + 31);
  if ( v8 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v8, a2);
    *((_QWORD *)this + 31) = 0LL;
  }
  v9 = *((_QWORD *)this + 24);
  if ( v9 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 24));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
    *((_QWORD *)this + 24) = 0LL;
  }
  v10 = (CWindowList *)*((_QWORD *)this + 61);
  if ( v10 )
  {
    CWindowList::`vector deleting destructor'(v10, 1u);
    *((_QWORD *)this + 61) = 0LL;
  }
  if ( *((_QWORD *)this + 65) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 65) = 0LL;
  }
  CDesktopManager::ReleaseDCompResources(this);
  CDesktopManager::ReleaseDXGIAdapter(this);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 34,
    0LL);
  v11 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = *((_QWORD *)this + 27);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 29);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (CTextCache *)*((_QWORD *)this + 33);
  if ( v14 )
  {
    CTextCache::`scalar deleting destructor'(v14, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
  v15 = (CIconicBitmapRegistry *)*((_QWORD *)this + 37);
  if ( v15 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v15, 1u);
    *((_QWORD *)this + 37) = 0LL;
  }
  v16 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 38);
  if ( v16 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v16, 1u);
    *((_QWORD *)this + 38) = 0LL;
  }
  v17 = (__int64 *)*((_QWORD *)this + 36);
  if ( v17 )
  {
    v18 = *v17;
    if ( *v17 )
    {
      *v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    (*(void (__fastcall **)(WPF::HeapBase *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v17);
    *((_QWORD *)this + 36) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v19 = (CCompositor *)*((_QWORD *)this + 5);
  if ( v19 )
  {
    CCompositor::Shutdown(v19);
    v20 = (CBaseObject *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v20 )
      CBaseObject::Release(v20);
  }
  v21 = *((_QWORD *)this + 39);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    *((_QWORD *)this + 39) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 100);
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  if ( v22 )
    CBaseObject::Release(v22);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 94);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 72);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 34,
    v23);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 16);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 12);
  v24 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v24 )
    CBaseObject::Release(v24);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
