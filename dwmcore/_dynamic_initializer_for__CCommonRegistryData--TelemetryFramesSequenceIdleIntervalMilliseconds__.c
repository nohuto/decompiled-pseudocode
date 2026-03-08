/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds__ @ 0x180003C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

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
