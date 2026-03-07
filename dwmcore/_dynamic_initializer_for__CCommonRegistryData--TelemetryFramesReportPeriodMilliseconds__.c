__int64 dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"TelemetryFramesReportPeriodMilliseconds", 300000LL, 0LL);
  CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds = result;
  return result;
}
