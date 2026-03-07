__int64 dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(
             L"TelemetryFramesSequenceIdleIntervalMilliseconds",
             1000LL,
             0LL);
  CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds = result;
  return result;
}
