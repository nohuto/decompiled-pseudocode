/*
 * XREFs of holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___ @ 0x1800C8374
 * Callers:
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C0280 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state_ @ 0x1800C770C (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32_ea_1800C770C.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state @ 0x1800C87A0 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_1800C87A0.c)
 *     ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802BAF74 (--$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@w.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802BB4A4 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_Tl.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  void *v8; // [rsp+20h] [rbp-188h] BYREF
  __int64 v9[2]; // [rsp+30h] [rbp-178h] BYREF
  void **v10; // [rsp+40h] [rbp-168h] BYREF

  v8 = a2;
  wil::com_weak_query_failfast<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem * &>(v9, &v8);
  v9[1] = (__int64)a2;
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    &v10,
    a3);
  v10 = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  v8 = operator new(0x158uLL);
  v6 = std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state_(
         (__int64)v8,
         v9);
  holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state(v9);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
