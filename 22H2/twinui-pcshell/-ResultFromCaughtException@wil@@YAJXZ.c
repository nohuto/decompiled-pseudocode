/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18020EA1C
 * Callers:
 *     _wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8____::_1_::catch$7 @ 0x1800CE491 (_wil--ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8____--_1_--catch$7.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::catch$141 @ 0x1800E37BD (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800E37BD.c)
 *     __lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator()_::_1_::catch$6 @ 0x180136F04 (__lambda_d2b9f9141b354d7aab2c271df0a099ad_--operator()_--_1_--catch$6.c)
 *     _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$1 @ 0x18017448D (_wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$42 @ 0x1801744CB (_wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____--_1_--catch$42.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18020CB00 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x180317EAC (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x180318376 (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$8.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x180318637 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$91 @ 0x180324569 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$91.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18032EE4C (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x18032FA44 (_ViewManagerBridge--OnConnected_--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x18043FDA3 (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____::_1_::catch$1 @ 0x180442637 (_wil--ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____::_1_::catch$1 @ 0x1804586B7 (_wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____--_1_--catch$1.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v3), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, 2442LL, (__int64)"wil", (const char *)0x8007023ELL);
    __debugbreak();
  }
  return result;
}
