/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x140A9CAB4
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140A7C248 (VfDriverUnloadImage.c)
 * Callees:
 *     CarCleanup @ 0x140603390 (CarCleanup.c)
 *     DifDeregisterAllPlugins @ 0x1406045C8 (DifDeregisterAllPlugins.c)
 *     DifSetPluginRunningWithoutReboot @ 0x140604D28 (DifSetPluginRunningWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140A82240 (VfClearDifWithoutReboot.c)
 */

__int64 VfVolatileClearDifRuleClass()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    DifDeregisterAllPlugins();
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    CarCleanup();
    VfDifRunningWithoutReboot = 0;
    DifSetPluginRunningWithoutReboot(0);
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    MmVerifierData = 0;
    if ( VfInitializedWithoutReboot )
    {
      VfClearDifWithoutReboot();
      VfInitializedWithoutReboot = 0;
    }
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v0;
}
