/*
 * XREFs of _stricmp @ 0x1403D16D0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404BBA60 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404BBC00 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x1405A0CCC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1405A0D48 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C235C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409C792C (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409C8BEC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409D901C (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A47180 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A59198 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A6273C (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D167C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
