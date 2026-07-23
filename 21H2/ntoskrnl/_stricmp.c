/*
 * XREFs of _stricmp @ 0x1403D1F40
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404BBD50 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404BBEF0 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x1405A0FBC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1405A1038 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C334C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409C891C (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409C9BDC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409DA00C (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409EFD54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A48180 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A5A198 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A6373C (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D1EEC (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
