/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000B5D8
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C000B48C (ACPIAmliDoubleToName.c)
 *     ACPIBuildDockExtension @ 0x1C000CEDC (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0012FA8 (ACPIBuildProcessorExtension.c)
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0029D20 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C002A12C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A404 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C002A650 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C002A974 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C002AA64 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABD0 (ACPIGetProcessorIDWide.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     ConvertToString @ 0x1C0059B20 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C008D69C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D920 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C008DDB4 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A8998 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A9FEC (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  return v4;
}
