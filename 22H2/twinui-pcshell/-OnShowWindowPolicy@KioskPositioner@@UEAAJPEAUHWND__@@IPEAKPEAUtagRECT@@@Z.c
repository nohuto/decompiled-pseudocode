/*
 * XREFs of ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x18044BF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D664C (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18044B7C8 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18044BAC8 (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::OnShowWindowPolicy(
        KioskPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *lprc)
{
  int (*v8)(void); // rbx
  KioskPositioner *v9; // rcx
  KioskPositioner *v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v14 = 0LL;
  v8 = *(int (**)(void))(**((_QWORD **)this + 8) + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v14);
  try
  {
    if ( v8() >= 0
      && KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), v14)
      && KioskPositioner::IsWin32ApplicationView(v9, v14)
      && !KioskPositioner::IsOwnedAppWindow(v10, a2) )
    {
      *a4 = 2;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39D,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v11);
  }
  return result;
}
