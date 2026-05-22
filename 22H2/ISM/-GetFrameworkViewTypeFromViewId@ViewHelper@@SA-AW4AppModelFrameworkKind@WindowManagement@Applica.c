/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEF8
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B7CA8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x1800182F0 (--B-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001AF4C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180042C30 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BCEB0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x1800BE120 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+28h] [rbp-8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  v2 = 6;
  ViewHierarchyWithWindowManager::GetView(a1, &v11, a2);
  if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(&v11) )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                                 &v11,
                                                                 &v9);
    if ( v3 )
    {
      v10 = 0LL;
      v5 = (**v3)(
             v3,
             &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::value,
             &v10);
      winrt::check_hresult(v5);
      v4 = v10;
    }
    else
    {
      v4 = 0LL;
    }
    v8 = v4;
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
    if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(&v8) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 120LL))(v4, &v10);
      winrt::check_hresult(v6);
      v2 = v10;
    }
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  }
  if ( v11 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v11);
  return v2;
}
