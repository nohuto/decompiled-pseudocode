/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__ @ 0x180003BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"TelemetryFramesReportPeriodMilliseconds", 300000LL, 0LL);
  CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds = result;
  return result;
}
