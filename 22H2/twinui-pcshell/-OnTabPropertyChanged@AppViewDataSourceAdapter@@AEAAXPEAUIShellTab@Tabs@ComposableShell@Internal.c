/*
 * XREFs of ?OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1803ADF90
 * Callers:
 *     _lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07_::operator() @ 0x1800CD610 (_lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180026FFC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803ABEB4 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AF140 (-RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Win.c)
 *     ?UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803B01BC (-UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@.c)
 *     ?UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803B02EC (-UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803B03B0 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabPropertyChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        Microsoft::WRL::Wrappers::Details **a3)
{
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v6; // rsi
  HSTRING v7; // r8
  AppViewDataSourceAdapter *v8; // rcx
  HSTRING v9; // r8
  HSTRING v10; // r8
  HSTRING v11; // r8
  HSTRING v12; // r8
  AppViewDataSourceAdapter *v13; // rcx
  HSTRING v14; // r8
  int v15; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-49h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v17[2]; // [rsp+28h] [rbp-41h] BYREF
  HSTRING_HEADER v18; // [rsp+38h] [rbp-31h] BYREF
  HSTRING v19; // [rsp+50h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-11h] BYREF
  HSTRING v21; // [rsp+70h] [rbp+7h]
  HSTRING_HEADER v22; // [rsp+78h] [rbp+Fh] BYREF
  HSTRING v23; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = (struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *)&this[22];
  AcquireSRWLockExclusive(this + 22);
  v17[1] = v6;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, (__int64 *)v17, (__int64)a2);
  if ( v17[0] )
  {
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DisplayName", 0xCu, 0xBu);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v21, v7) )
    {
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UnselectedIcon", 0xFu, 0xEu);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v21, v9)
        && (v23 = 0LL,
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"SelectedIcon", 0xDu, 0xCu),
            (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v23, v10))
        && (v19 = 0LL,
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"DefaultIcon", 0xCu, 0xBu),
            (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v11)) )
      {
        v19 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"LastSelectedTime", 0x11u, 0x10u);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v12) )
        {
          v19 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"IsDestroyed", 0xCu, 0xBu);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v14) )
          {
            v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _BYTE *))(*(_QWORD *)a2 + 184LL))(
                    a2,
                    v16);
            if ( v15 < 0 )
            {
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                420LL,
                (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                (const char *)(unsigned int)v15);
              __debugbreak();
            }
            if ( v16[0] )
              AppViewDataSourceAdapter::RemoveItemForTab((AppViewDataSourceAdapter *)this, a2);
          }
        }
        else
        {
          AppViewDataSourceAdapter::UpdateTabActivationTimestamp(v13, a2, v17[0]);
        }
      }
      else
      {
        AppViewDataSourceAdapter::UpdateTabIcon((AppViewDataSourceAdapter *)this, a2, v17[0]);
      }
    }
    else
    {
      AppViewDataSourceAdapter::UpdateTabDisplayName(v8, a2, v17[0]);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v17);
  if ( v6 )
    ReleaseSRWLockExclusive((PSRWLOCK)v6);
}
