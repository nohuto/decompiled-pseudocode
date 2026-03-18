/*
 * XREFs of wcsncmp @ 0x1403DB3F0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403587F0 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14050792C (HalpInsertProfileSource.c)
 *     CarFindDriverInfoByDriverName @ 0x1405D3080 (CarFindDriverInfoByDriverName.c)
 *     EtwpApplyPredicate @ 0x140604CD4 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14075CE24 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x1407BD308 (LdrpResCompareResourceNames.c)
 *     pIoQueryBusDescription @ 0x1407CEFB8 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x14086B530 (WmipFindISinGEbyName.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097F748 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984CE0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1409863F8 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x140987C18 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140987C94 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4AD4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140A54BF8 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140A54E6C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140A555C4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56998 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CA68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpDeviceEquals @ 0x140AB30B0 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140AB3370 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
