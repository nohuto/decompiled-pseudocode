/*
 * XREFs of ?FindPackagesForUserWithPackageTypes@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA?AU?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@3@AEBUhstring@param@3@0AEBW4PackageTypes@Deployment@Management@73@@Z @ 0x180120BC8
 * Callers:
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180125968 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::FindPackagesForUserWithPackageTypes(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5)
{
  void (__fastcall ***v8)(_QWORD, void *, _QWORD **); // r10
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v8 = *a1;
  v9 = 0LL;
  v14 = 0LL;
  if ( v8 )
  {
    v13 = 0LL;
    (**v8)(v8, &winrt::impl::guid_storage<winrt::Windows::Management::Deployment::IPackageManager2>::value, &v13);
    v9 = (__int64)v13;
  }
  v12 = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v9 + 112LL))(
          v9,
          *a3,
          *a4,
          *a5,
          &v14);
  winrt::check_hresult(v10);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
  *a2 = v14;
  return a2;
}
