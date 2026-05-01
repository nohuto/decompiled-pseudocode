/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803902B8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18016D550 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlAltTabViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      35LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(a1 + 8);
}
