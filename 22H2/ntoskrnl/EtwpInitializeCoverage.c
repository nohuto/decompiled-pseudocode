/*
 * XREFs of EtwpInitializeCoverage @ 0x140803324
 * Callers:
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C04320);
}
