/*
 * XREFs of ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal3@@PEAUIApplicationView@@@Z @ 0x1800F27E0
 * Callers:
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800ED150 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8F04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8F04.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::MoveProxyWindowsToDesktop(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktopManagerInternal3 *a3,
        struct IApplicationView *a4)
{
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  int (__fastcall *v10)(struct IApplicationViewCollection *, _QWORD, __int64 *); // rdi
  int v11; // eax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this, v12);
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    v10 = *(int (__fastcall **)(struct IApplicationViewCollection *, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v14);
    if ( v10(a2, *(_QWORD *)(i[4] + 32LL), &v14) >= 0 && v14 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal3 *, __int64, struct IApplicationView *))(*(_QWORD *)a3 + 120LL))(
              a3,
              v14,
              a4);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v12);
}
