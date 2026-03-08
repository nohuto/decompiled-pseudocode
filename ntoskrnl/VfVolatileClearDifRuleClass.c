/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x140ADAA7C
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140ABA284 (VfDriverUnloadImage.c)
 * Callees:
 *     CarCleanup @ 0x1405D1318 (CarCleanup.c)
 *     DifDeregisterAllPlugins @ 0x1405D27E8 (DifDeregisterAllPlugins.c)
 *     DifSetPluginRunningWithoutReboot @ 0x1405D2FE0 (DifSetPluginRunningWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140ABFBAC (VfClearDifWithoutReboot.c)
 */

__int64 VfVolatileClearDifRuleClass()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ViFullyInitialized || (VfOptionFlags & 0x800) != 0 )
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
    DifpPoolTags = 0LL;
    qword_140D17CD0 = 0LL;
    xmmword_140D17CC0 = 0LL;
    DifpPoolTagsSize = 0;
    DifpPoolTagsSizeBytes = 0;
    VfOptionFlags = 0;
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
