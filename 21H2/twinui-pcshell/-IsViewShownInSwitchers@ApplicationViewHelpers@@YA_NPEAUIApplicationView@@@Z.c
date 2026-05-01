/*
 * XREFs of ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18014E880
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18044A700 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x18044BAD0 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ApplicationViewHelpers::IsViewShownInSwitchers(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)this + 216LL))(this, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
