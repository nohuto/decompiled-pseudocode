/*
 * XREFs of wcsncmp @ 0x1403D5ED0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1402ECE20 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14050584C (HalpInsertProfileSource.c)
 *     CarFindDriverInfoByDriverName @ 0x1405D0BD0 (CarFindDriverInfoByDriverName.c)
 *     EtwpApplyPredicate @ 0x140602884 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406A4844 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14076B210 (LdrpResCompareResourceNames.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x1408688F8 (WmipFindISinGEbyName.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097C698 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140981C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140983348 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x140984B68 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140984BE4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E1C34 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140A51F28 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140A521B8 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A53CE4 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpDeviceEquals @ 0x140AAF150 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140AAF410 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
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
