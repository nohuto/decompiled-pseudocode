/*
 * XREFs of ?IsRegistered@?$consume_Windows_Management_Deployment_IDeploymentResult2@UDeploymentResult@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A7BAC
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Management_Deployment_IDeploymentResult2<winrt::Windows::Management::Deployment::DeploymentResult>::IsRegistered(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v1)(_QWORD, void *, __int64 *); // r9
  __int64 v2; // rcx
  unsigned int v3; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = *a1;
  v2 = 0LL;
  if ( v1 )
  {
    v6 = 0LL;
    (**v1)(v1, &winrt::impl::guid_storage<winrt::Windows::Management::Deployment::IDeploymentResult2>::value, &v6);
    v2 = v6;
  }
  v7 = v2;
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 48LL))(v2, &v5);
  winrt::check_hresult(v3);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  return v5;
}
