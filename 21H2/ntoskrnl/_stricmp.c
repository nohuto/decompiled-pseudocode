/*
 * XREFs of _stricmp @ 0x1403D1DD0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404BBB10 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404BBCB0 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x1405A0D8C (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1405A0E08 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C234C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409C791C (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409C8BDC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409D900C (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A47180 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A59198 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A6273C (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D1D7C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
