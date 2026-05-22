/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180092940
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$4 @ 0x180051173 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180051173.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x180092527 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x180092537 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092537.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x180092547 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092547.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x180092557 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092557.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x180092567 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092567.c)
 *     _SpatialInteractionDevices::EnumerateDevices_::_1_::dtor$2 @ 0x1800C6165 (_SpatialInteractionDevices--EnumerateDevices_--_1_--dtor$2.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1800D14FC (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--OnDisplayChan.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1800D1508 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D1508.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$2 @ 0x1800D3AA8 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D3AA8.c)
 *     _MPCConstantManagerClient::OnConstantChanged_::_1_::dtor$0 @ 0x180116C8D (_MPCConstantManagerClient--OnConstantChanged_--_1_--dtor$0.c)
 *     _StringToHstringVectorParser_::_1_::dtor$1 @ 0x180118AF7 (_StringToHstringVectorParser_--_1_--dtor$1.c)
 *     _StringToHstringVectorParser_::_1_::dtor$2 @ 0x180118B03 (_StringToHstringVectorParser_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$2 @ 0x18015ACF1 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_18015ACF1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo_::_1_::dtor$0 @ 0x18016C8FE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--FillDeviceInfo_--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
