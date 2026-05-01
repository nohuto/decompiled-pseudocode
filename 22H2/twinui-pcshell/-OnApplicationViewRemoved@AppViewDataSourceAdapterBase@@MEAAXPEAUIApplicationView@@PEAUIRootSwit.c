/*
 * XREFs of ?OnApplicationViewRemoved@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803ADB40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x1803AF1E4 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewRemoved(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  if ( a3 )
    AppViewDataSourceAdapterBase::RemoveItemForView(this, a2);
}
