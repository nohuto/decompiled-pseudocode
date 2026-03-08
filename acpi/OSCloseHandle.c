/*
 * XREFs of OSCloseHandle @ 0x1C008DB38
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C003D600 (ACPIRootPowerCallBack.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C00A71E8 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A87E8 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A8998 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A9FEC (ACPIRegDumpAcpiTable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA2F4 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
