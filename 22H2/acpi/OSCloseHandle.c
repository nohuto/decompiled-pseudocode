/*
 * XREFs of OSCloseHandle @ 0x1C0096D0C
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0031590 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064824 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC3BC (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC6F4 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BC920 (ACPIInitGetPlatformOverrides.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD2FC (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00BDE98 (AcpiDiagInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
