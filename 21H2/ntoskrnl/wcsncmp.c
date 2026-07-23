/*
 * XREFs of wcsncmp @ 0x1403D41B0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F85A8 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404BF050 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405B1834 (EtwpApplyPredicate.c)
 *     LdrpResCompareResourceNames @ 0x1405ED09C (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140677B7C (PfSnFindPrefetchVolumeInfoInList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x140754554 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140758528 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4880 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E5D6C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E6CC4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E6F58 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x1409686FC (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x14096A180 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B6F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B7158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
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
