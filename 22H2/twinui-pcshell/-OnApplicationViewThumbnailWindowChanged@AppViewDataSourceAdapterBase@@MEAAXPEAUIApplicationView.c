/*
 * XREFs of ?OnApplicationViewThumbnailWindowChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803ADB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewThumbnailWindowChanged(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  if ( a3 )
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
      this,
      a2);
}
