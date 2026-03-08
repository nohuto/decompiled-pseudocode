/*
 * XREFs of _stricmp @ 0x1403D3BD0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x140502810 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1405029B0 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABA164 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140AC049C (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140B4E7D0 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140B52640 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140B5C310 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D3B7C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
