/*
 * XREFs of _Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager___&_ITitleBarController___&_ITabViewManager___&_Windows::Foundation::IEventHandler_IInspectable______&_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&_IPrivilegedForegroundOperations___&__::_1_::dtor$0 @ 0x180305295
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ @ 0x180305B50 (--1-$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager_____ITitleBarController_____ITabViewManager_____Windows::Foundation::IEventHandler_IInspectable________Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const___IPrivilegedForegroundOperations______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<ViewGroup>::~ComPtr<ViewGroup>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
