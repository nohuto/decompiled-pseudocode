/*
 * XREFs of ??1_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@XZ @ 0x180135974
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$2 @ 0x18012E102 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18012E102.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x180136424 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_06451eacb7a8912ae3302a5615ee0eb8_::~_lambda_06451eacb7a8912ae3302a5615ee0eb8_(
        _lambda_06451eacb7a8912ae3302a5615ee0eb8_ *this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim((_lambda_06451eacb7a8912ae3302a5615ee0eb8_ *)((char *)this + 48));
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
