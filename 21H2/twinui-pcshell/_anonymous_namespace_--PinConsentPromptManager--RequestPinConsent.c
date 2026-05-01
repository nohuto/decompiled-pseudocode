/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x18013F9E4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$1 @ 0x18013E23C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  void *v8; // rax
  std::_Ref_count_base *v9; // rcx
  unsigned int v11[182]; // [rsp+30h] [rbp-318h] BYREF
  _QWORD *v12; // [rsp+308h] [rbp-40h]

  v12 = a3;
  v8 = operator new(0x2D0uLL);
  v11[0] = 0;
  anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_1(v11, (__int64)v8 + 96, a2, a3, a4, a1);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
