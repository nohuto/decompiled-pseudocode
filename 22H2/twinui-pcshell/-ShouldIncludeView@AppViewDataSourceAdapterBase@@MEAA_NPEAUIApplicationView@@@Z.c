/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x1803AF790
 * Callers:
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1803AF6F0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AppViewDataSourceAdapterBase::ShouldIncludeView(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2)
{
  int v2; // eax
  char v3; // cl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v5);
  v3 = 0;
  if ( v2 >= 0 )
    return v5 != 0;
  return v3;
}
