/*
 * XREFs of OSOpenHandle @ 0x1C008FBB8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008FCF0 (ACPIRegReadAMLRegistryEntry.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00977FC (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0098A58 (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B2278 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2958 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00B2C68 (OSOpenNextSubkey.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BC920 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD2FC (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00BDE98 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     OSOpenUnicodeHandle @ 0x1C008FC50 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v7; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = v5;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xCu,
        (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
        v7,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
  }
  else
  {
    v5 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  return (unsigned int)v5;
}
