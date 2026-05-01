/*
 * XREFs of IsPeoplePane @ 0x18004DF10
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004C914 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     wil::details::functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3__&_::Run @ 0x18004D720 (wil--details--functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3__-_--Run.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18004DC80 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x18045BBE4 (-IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlag.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18045DF84 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsPeoplePane(__int64 a1)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         &v4) >= 0
    && v4
    || (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
         &v4) >= 0
    && v4 )
  {
    return 1;
  }
  return v2;
}
