/*
 * XREFs of ??$cx_safe_cast@UITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUITabController@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x18039389C
 * Callers:
 *     ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180395D04 (-TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035BE00 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ITabController,IInspectable *>(
        __int64 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64, __int64 *); // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(*a1);
  v2 = __abi_winrt_cast_to(0, v1, (__int64)&_uuidof__AUITabController_Tabs_ComposableShell_Internal_Windows__);
  v3 = __abi_winrt_ptr_ctor(v2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v1)[2])(v1);
  return v3;
}
