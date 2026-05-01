/*
 * XREFs of ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18044AC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18044A708 (-CreateTitlebarConfiguration@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitlebarConfig.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18044CB14 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::GetChromeConfigurationForView(
        KioskPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  KioskPositioner *v5; // rcx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  struct IApplicationViewTitlebarConfiguration *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  *a3 = 0;
  v5 = (KioskPositioner *)((char *)this - 104);
  try
  {
    if ( KioskPositioner::ShouldHandleView(v5, a2) )
    {
      v9 = *(struct IApplicationViewTitlebarConfiguration **)KioskPositioner::CreateTitlebarConfiguration(
                                                               v6,
                                                               (volatile int *)&v11);
      if ( v9 )
      {
        *a4 = v9;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      else
      {
        *a4 = 0LL;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x268,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)0x8000FFFFLL);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26C,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v7);
  }
  return result;
}
