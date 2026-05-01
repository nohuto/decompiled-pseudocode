/*
 * XREFs of ?UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z @ 0x1802EFBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800C9B9C (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1802F1E48 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 */

__int64 __fastcall TabViewManager::UpdatePropertySetWithTargetGroupForActivation(
        struct IWin32ApplicationView **this,
        struct IUnknown *a2)
{
  const char *v3; // r9
  __int64 result; // rax
  struct IApplicationViewCollection *v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v7; // [rsp+38h] [rbp+10h] BYREF
  struct IServiceProvider *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  try
  {
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(&v8, &v7);
    TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
      (struct IServiceProvider *)((unsigned __int64)(this - 10) & -(__int64)(this != (struct IWin32ApplicationView **)136)),
      v8,
      0LL,
      this[132],
      v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4B4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v3);
  }
  return result;
}
