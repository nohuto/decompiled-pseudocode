/*
 * XREFs of ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x180141748
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$1 @ 0x1801402D4 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        char a4)
{
  void *v7; // rax
  std::_Ref_count_base *v8; // rcx
  char v10[8]; // [rsp+30h] [rbp-2D8h] BYREF
  unsigned int v11[166]; // [rsp+38h] [rbp-2D0h] BYREF
  _QWORD *v12; // [rsp+2D0h] [rbp-38h]

  v12 = a3;
  v10[0] = a4;
  v7 = operator new(0x290uLL);
  v11[0] = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_1(
    v11,
    (__int64)v7 + 96,
    a2,
    a3,
    v10,
    a1);
  v8 = (std::_Ref_count_base *)a3[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
