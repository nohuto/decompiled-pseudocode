/*
 * XREFs of wcsncmp @ 0x1403D3940
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F7C58 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404BED50 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405B1544 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406335BC (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x140671DCC (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407285CC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x140753B84 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140757B58 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14078B004 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4770 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E5C5C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E6BB4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E6E48 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABF8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x14096856C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140968B44 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140969FF0 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B5F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B6158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
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
