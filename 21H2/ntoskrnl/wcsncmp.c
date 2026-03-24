/*
 * XREFs of wcsncmp @ 0x1403D4040
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F8578 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404BEE10 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405B1604 (EtwpApplyPredicate.c)
 *     LdrpResCompareResourceNames @ 0x14068D22C (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406C928C (PfSnFindPrefetchVolumeInfoInList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140734EF0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x140754394 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140758368 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4720 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E5C0C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E6B64 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E6DF8 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABA8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x14096851C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140969FA0 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B5F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B6158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41C04 (ExpWatchProductTypeInitialization.c)
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
