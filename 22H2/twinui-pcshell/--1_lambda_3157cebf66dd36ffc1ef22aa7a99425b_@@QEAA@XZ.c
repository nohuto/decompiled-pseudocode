/*
 * XREFs of ??1_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@XZ @ 0x18013583C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x180131602 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_180131602.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1801362E0 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_3157cebf66dd36ffc1ef22aa7a99425b_::~_lambda_3157cebf66dd36ffc1ef22aa7a99425b_(
        _lambda_3157cebf66dd36ffc1ef22aa7a99425b_ *this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((_lambda_3157cebf66dd36ffc1ef22aa7a99425b_ *)((char *)this + 48));
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
