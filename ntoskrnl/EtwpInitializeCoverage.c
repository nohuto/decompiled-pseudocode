/*
 * XREFs of EtwpInitializeCoverage @ 0x14080F52C
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C042F0);
}
