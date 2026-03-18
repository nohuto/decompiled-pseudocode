/*
 * XREFs of OSOpenHandle @ 0x1C008DF20
 * Callers:
 *     ACPIInitGlobalHeapSize @ 0x1C00878C8 (ACPIInitGlobalHeapSize.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D16C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C008DDC4 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C008E1A8 (OSOpenNextSubkey.c)
 *     OSReadRegValue @ 0x1C008E6B0 (OSReadRegValue.c)
 *     ACPIRootInitialize @ 0x1C0093778 (ACPIRootInitialize.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C009590C (ACPIThermalGetOverrideHandle.c)
 *     AcpiDiagInitialize @ 0x1C00A71F8 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A87F8 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A89A8 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     OSOpenUnicodeHandle @ 0x1C008E3EC (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v6 >= 0 )
  {
    v6 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      12,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
