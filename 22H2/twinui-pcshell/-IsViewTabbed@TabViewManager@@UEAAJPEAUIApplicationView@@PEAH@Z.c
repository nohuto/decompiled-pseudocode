/*
 * XREFs of ?IsViewTabbed@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1802E12E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802EE374 (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 */

__int64 __fastcall TabViewManager::IsViewTabbed(TabViewManager *this, struct IApplicationView *a2, int *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  TabViewManager::TryGetTabForViewImpl((char *)this - 136, &v5, a2);
  *a3 = v5 != 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  return 0LL;
}
