/*
 * XREFs of ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800EB990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1800EA43C (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1800EC2A8 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800EC524 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800ECA48 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF3E0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  int v4; // r8d
  unsigned int WindowForView; // eax
  unsigned __int64 v6; // rdi
  HWND v7; // rdi
  HWND PropW; // rax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  PVOID v12[3]; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( v4 == 6 )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
          (__int64)a1,
          (__int64)&v13,
          WindowForView);
      }
    }
    else
    {
      v6 = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
      v11 = v6;
      wil::srwlock::lock_exclusive(a1 + 75, &v10);
      std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
        &a1[76],
        v12,
        &v11);
      if ( v12[0] != a1[77].Ptr )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          v6);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
    }
  }
  else
  {
    v7 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    PropW = (HWND)GetPropW(v7, (LPCWSTR)0xA920);
    if ( PropW )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
        v7,
        PropW);
  }
  return 0LL;
}
