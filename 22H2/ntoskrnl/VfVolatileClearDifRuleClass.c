/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x140ADEA7C
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140ABDED4 (VfDriverUnloadImage.c)
 * Callees:
 *     CarCleanup @ 0x1405D37C8 (CarCleanup.c)
 *     DifDeregisterAllPlugins @ 0x1405D4C98 (DifDeregisterAllPlugins.c)
 *     DifSetPluginRunningWithoutReboot @ 0x1405D5490 (DifSetPluginRunningWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140AC3BAC (VfClearDifWithoutReboot.c)
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
    qword_140D18030 = 0LL;
    xmmword_140D18020 = 0LL;
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
