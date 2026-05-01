/*
 * XREFs of ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180216420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x180214608 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::PresentationChangedForView(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  FullScreenPositioner *v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IPresentationRequestedArgs *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  try
  {
    if ( ((__int64 (*)(void))a3->lpVtbl->QueryInterface)() >= 0 )
      FullScreenPositioner::ApplyPresentationChanges(v4, a2, v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x24A,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v5);
  }
  return result;
}
