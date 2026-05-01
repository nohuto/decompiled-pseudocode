/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x1804AF4D0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x1804AED88 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801B1D60 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??$QueueTask@AEAV_lambda_ba612c6bfe63a6e8fafaf220a28082f2_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@KAEAV_lambda_ba612c6bfe63a6e8fafaf220a28082f2_@@@Z @ 0x1804AEE8C (--$QueueTask@AEAV_lambda_ba612c6bfe63a6e8fafaf220a28082f2_@@@ComTaskPool@Internal@Windows@@SAJW4.c)
 */

__int64 __fastcall VirtualDesktopAnimationSyncNotificationInstance::RuntimeClassInitialize(
        VirtualDesktopAnimationSyncNotificationInstance *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3,
        struct IObjectArray *a4,
        unsigned int a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  char v19; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[5] = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_BYTE *)v9 + 40) = 0;
    *((_DWORD *)v9 + 12) = 0;
    *v9 = &CRefCountedObject<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  v21 = v10;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  v11 = *((_QWORD *)this + 2);
  if ( v11 != v10 )
  {
    v21 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v12 = *((_QWORD *)this + 2);
    v11 = v10;
    *((_QWORD *)this + 2) = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = *((_QWORD *)this + 2);
    }
  }
  if ( v11 )
  {
    v14 = (RTL_SRWLOCK *)(v10 + 32);
    AcquireSRWLockExclusive((PSRWLOCK)(v10 + 32));
    if ( (char *)this + 24 != &v19 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        (RTL_SRWLOCK **)this + 3,
        (RTL_SRWLOCK *)(v10 + 32));
      v14 = 0LL;
    }
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 8), (__int64)a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 16), (__int64)a3);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 24), (__int64)a4);
    v21 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v17 = Windows::Internal::ComTaskPool::QueueTask<_lambda_ba612c6bfe63a6e8fafaf220a28082f2_ &>(v16, v15, a5, &v21);
    v13 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v17);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  else
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v13;
}
