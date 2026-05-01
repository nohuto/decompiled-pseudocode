/*
 * XREFs of ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802DE8F4
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1802ED2E0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180056D1C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800C9B7C (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802D2C0C (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIPrope.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *TabViewManager::GetActivationValueSet(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, GUID *, void **),
        ...)
{
  void *v5; // rbx
  void (__fastcall *v6)(__int64, GUID *, IUnknown **); // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d
  void *v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  IUnknown *v13; // [rsp+78h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+38h]
  va_list va1; // [rsp+80h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, IUnknown *);
  if ( v13 )
  {
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(a2, (IUnknown **)va);
  }
  else
  {
    (**a3)(a3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v11);
    v5 = v11;
    if ( v11
      && (v13 = 0LL,
          v6 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 8) + 32LL),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va),
          v6(a1 + 8, &GUID_00000000_0000_0000_c000_000000000046, (IUnknown **)va),
          Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v12, v13, v5),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va),
          (v7 = v12) != 0) )
    {
      v12 = 0LL;
      *a2 = v7;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
      wil::ActivateInstance<Windows::Foundation::Collections::IPropertySet>((__int64)a2, v8, v9);
    }
  }
  return a2;
}
