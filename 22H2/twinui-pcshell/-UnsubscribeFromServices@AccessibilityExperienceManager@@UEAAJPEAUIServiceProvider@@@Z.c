/*
 * XREFs of ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E0930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::UnsubscribeFromServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+80h] [rbp+50h] BYREF
  __int64 v13; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 7);
  v4 = *((_QWORD *)this + 27);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 27));
    v9 = 0LL;
    v3 = v4;
    v13 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  v5 = *((_QWORD *)this + 40);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v12, (__int64 *)this + 45);
  v6 = *((_DWORD *)this + 52);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v11, (__int64 *)this + 30);
  v7 = *((_DWORD *)this + 53);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  *((_QWORD *)this + 40) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  *((_DWORD *)this + 52) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 53) = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 && v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, v7);
  if ( v12 && v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v6);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return 0LL;
}
