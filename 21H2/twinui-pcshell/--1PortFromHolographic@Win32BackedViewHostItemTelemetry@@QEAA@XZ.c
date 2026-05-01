/*
 * XREFs of ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x1802BC9E8
 * Callers:
 *     _lambda_cc5deaedd2cfca8d7c581af421c5ead5_::__lambda_cc5deaedd2cfca8d7c581af421c5ead5_ @ 0x1800C871C (_lambda_cc5deaedd2cfca8d7c581af421c5ead5_--__lambda_cc5deaedd2cfca8d7c581af421c5ead5_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state @ 0x1800C87A0 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_1800C87A0.c)
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C0280 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortFromHolographic_::_1_::dtor$0 @ 0x1802C03F0 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortFromHolographic_--_1_--dtor.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802BDBB0 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic(
        Win32BackedViewHostItemTelemetry::PortFromHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
