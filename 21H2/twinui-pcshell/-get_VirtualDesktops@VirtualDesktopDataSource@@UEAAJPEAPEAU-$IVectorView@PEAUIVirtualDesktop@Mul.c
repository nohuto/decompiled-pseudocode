/*
 * XREFs of ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1803E5A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801D6E20 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??$Make@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@5678@@Z @ 0x1803E2A8C (--$Make@V-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultE.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803E37C0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803E4078 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803E4614 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopDataSource::get_VirtualDesktops(RTL_SRWLOCK *this, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rsi
  PVOID Ptr; // rbx
  int v6; // ebx
  int v7; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v8; // rdi
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  struct IVirtualDesktop *v12; // rbx
  int WinRTDesktopForInternalDesktopInternal; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  int v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  struct IVirtualDesktop *v20[2]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+50h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v24; // [rsp+B0h] [rbp+38h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v25; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+48h] BYREF
  struct IVirtualDesktop *v27; // [rsp+C8h] [rbp+50h] BYREF

  *a2 = 0LL;
  v4 = this + 41;
  AcquireSRWLockShared(this + 41);
  Ptr = this[14].Ptr;
  if ( Ptr )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, &v26);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      v8 = 0LL;
      v25 = 0LL;
      v6 = 0;
      Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::permission>((__int64 *)&v24);
      v9 = v24;
      if ( v24 )
      {
        v8 = v24;
        v24 = 0LL;
        v25 = v9;
      }
      else
      {
        v6 = -2147024882;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      if ( v6 >= 0 )
      {
        details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
          (__int64)&v17,
          v26);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v19,
          (__int64)&v17,
          0);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v21,
          (__int64)&v17,
          v18);
        while ( (_DWORD)v19 != v21 || v20[1] != (struct IVirtualDesktop *)v22[1] )
        {
          v12 = v20[0];
          v27 = v20[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
          v24 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
          WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                                     (struct IThumbnailDeviceSource **)this,
                                                     v12,
                                                     &v24);
          v6 = WinRTDesktopForInternalDesktopInternal;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v15 = 198LL;
            goto LABEL_21;
          }
          WinRTDesktopForInternalDesktopInternal = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v8 + 104LL))(
                                                     v8,
                                                     v24);
          v6 = WinRTDesktopForInternalDesktopInternal;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v15 = 199LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v15,
              (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
            goto LABEL_22;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
          LODWORD(v19) = v19 + 1;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v19);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, _QWORD *))(*(_QWORD *)v8 + 64LL))(
                v8,
                a2);
        v6 = v14;
        if ( v14 >= 0 )
          goto LABEL_22;
        v10 = (unsigned int)v14;
        v11 = 202LL;
      }
      else
      {
        v10 = (unsigned int)v6;
        v11 = 193LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)v10);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v6;
}
