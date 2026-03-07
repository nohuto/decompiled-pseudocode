__int64 dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(
             L"TelemetryFramesSequenceMaximumPeriodMilliseconds",
             1000LL,
             0LL);
  CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds = result;
  return result;
}
