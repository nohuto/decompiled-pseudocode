/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C39F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B13F0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1801B1F08 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803C37A4 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803C3908 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  __int64 v6; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // si
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v22; // [rsp+90h] [rbp+40h]
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  int v24; // [rsp+A8h] [rbp+58h]

  v17 = 0LL;
  v16 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 328));
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v17, (__int64 *)this + 50);
  v22 = *((_DWORD *)this + 54);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v16, (__int64 *)this + 37);
  v5 = *((_DWORD *)this + 55);
  v6 = *((_QWORD *)this + 39);
  if ( v6 )
  {
    v23 = *((_QWORD *)this + 39);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
    v3 = v6;
    v23 = 0LL;
    v15 = v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  LODWORD(v23) = *((_DWORD *)this + 59);
  v24 = *((_DWORD *)this + 60);
  v7 = *((_DWORD *)this + 61);
  v8 = *((_QWORD *)this + 40);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 40));
    v4 = v8;
    v8 = 0LL;
    v19 = 0LL;
    v18 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  *((_QWORD *)this + 26) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  *((_DWORD *)this + 54) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
  *((_DWORD *)this + 55) = v8;
  *((_QWORD *)this + 28) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  *(_QWORD *)((char *)this + 236) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  *((_DWORD *)this + 61) = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v16 && v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, v5);
  if ( v17 && v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
  v9 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)((char *)this - 48));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1828LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_32;
  }
  v12 = *((_QWORD *)this + 28);
  if ( v12 )
    UnregisterScaleChangeEvent(v12);
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 496));
  v13 = Microsoft::WRL::operator!=<IApplicationViewCollection>(&v15);
  if ( v13 && (_DWORD)v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  if ( v13 && v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v9 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)((char *)this - 48));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1847LL;
    goto LABEL_25;
  }
  if ( v4 && v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, v7);
  if ( *((_QWORD *)this + 108) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (Concurrency::details::_RefCounter **)this + 108,
      0LL);
  v10 = 0;
LABEL_32:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v18);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v15);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v16);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v17);
  return v10;
}
