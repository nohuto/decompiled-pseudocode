/*
 * XREFs of ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__ @ 0x180003380 (_dynamic_initializer_for__CCommonRegistryData--CpuClipAreaThreshold__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::CpuClipWarpPartitionThreshold__ @ 0x1800033B0 (_dynamic_initializer_for__CCommonRegistryData--CpuClipWarpPartitionThreshold__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__ @ 0x180003680 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--ExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__ @ 0x180003770 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinHeight__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__ @ 0x1800037A0 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinWidth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingResizeGrowth__ @ 0x1800037D0 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingResizeGrowth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::LayerClippingMode__ @ 0x180003830 (_dynamic_initializer_for__CCommonRegistryData--LayerClippingMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MaxCoverage__ @ 0x180003890 (_dynamic_initializer_for__CCommonRegistryData--MajorityScreenTest_MaxCoverage__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinArea__ @ 0x1800038C0 (_dynamic_initializer_for__CCommonRegistryData--MajorityScreenTest_MinArea__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinLength__ @ 0x1800038F0 (_dynamic_initializer_for__CCommonRegistryData--MajorityScreenTest_MinLength__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__ @ 0x180003920 (_dynamic_initializer_for__CCommonRegistryData--MaxD3DFeatureLevel__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__ @ 0x180003950 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSearchCount__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSize__ @ 0x180003980 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSize__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__ @ 0x1800039B0 (_dynamic_initializer_for__CCommonRegistryData--MousewheelAnimationDurationMs__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__ @ 0x1800039E0 (_dynamic_initializer_for__CCommonRegistryData--MousewheelScrollingMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__ @ 0x180003A10 (_dynamic_initializer_for__CCommonRegistryData--Scene--MsaaQualityMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayMinFPS__ @ 0x180003A70 (_dynamic_initializer_for__CCommonRegistryData--OverlayMinFPS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x180003AA0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--PeriodicFenceMinDifferenceMicrose.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x180003AD0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--RefreshRatePercentage__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::RenderThreadTimeoutMilliseconds__ @ 0x180003B00 (_dynamic_initializer_for__CCommonRegistryData--RenderThreadTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__ @ 0x180003B30 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffCountOfConsecutiveInciden.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__ @ 0x180003B60 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffThresholdInMS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetExtensionTimeMicroseconds__ @ 0x180003BC0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__ @ 0x180003BF0 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesReportPeriodMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds__ @ 0x180003C20 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceIdleIntervalMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds__ @ 0x180003C50 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceMaximumPeriodMilliseconds_.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800AE198 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall details::CRegistryKeyLoader<unsigned long>::Load(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( RegGetDwmDwordHelper(a1, (__int64)&v5, a3) )
    return v5;
  return a2;
}
