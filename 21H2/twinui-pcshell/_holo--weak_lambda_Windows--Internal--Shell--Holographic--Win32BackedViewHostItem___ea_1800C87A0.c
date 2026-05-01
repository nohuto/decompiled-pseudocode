/*
 * XREFs of _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state @ 0x1800C87A0
 * Callers:
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___ @ 0x1800C8374 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_cc5deae.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_1_::dtor$2 @ 0x1800C8424 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_cc5dea.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state_::_Destroy @ 0x1800C95C0 (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32_ea_1800C95C0.c)
 * Callees:
 *     ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x1802BC9E8 (--1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state(
        __int64 *a1)
{
  Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)(a1 + 2));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
