/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds__ @ 0x180003C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

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
