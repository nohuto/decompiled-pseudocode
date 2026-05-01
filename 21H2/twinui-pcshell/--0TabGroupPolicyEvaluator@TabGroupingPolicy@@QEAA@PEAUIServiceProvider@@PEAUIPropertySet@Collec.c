/*
 * XREFs of ??0TabGroupPolicyEvaluator@TabGroupingPolicy@@QEAA@PEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1802F1924
 * Callers:
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1802F1E48 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

TabGroupingPolicy::TabGroupPolicyEvaluator *__fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::TabGroupPolicyEvaluator(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        struct IServiceProvider *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct IWin32ApplicationView *a4,
        struct IApplicationViewCollection *a5)
{
  unsigned int v8; // r8d

  *(_QWORD *)this = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 2) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a5 + 8LL))(a5);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)this + 3,
    (__int64)a4);
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(
    (HSTRING_HEADER *)this + 3,
    (const WCHAR **)off_180540EF8,
    v8);
  return this;
}
