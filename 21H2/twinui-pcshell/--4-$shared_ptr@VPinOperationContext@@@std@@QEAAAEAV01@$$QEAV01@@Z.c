/*
 * XREFs of ??4?$shared_ptr@VPinOperationContext@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180136594
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18014D96C (-reset@-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AX.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<PinOperationContext>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v2 = a2[1];
  v4 = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v4;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
