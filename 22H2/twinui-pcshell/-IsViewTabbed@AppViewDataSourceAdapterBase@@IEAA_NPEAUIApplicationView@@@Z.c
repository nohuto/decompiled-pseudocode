/*
 * XREFs of ?IsViewTabbed@AppViewDataSourceAdapterBase@@IEAA_NPEAUIApplicationView@@@Z @ 0x1803AD6A4
 * Callers:
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803AB210 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x1803AF1E4 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1803AF6F0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AppViewDataSourceAdapterBase::IsViewTabbed(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  if ( v2 && (*(int (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v2 + 72LL))(v2, a2, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
