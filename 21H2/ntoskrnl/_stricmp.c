/*
 * XREFs of _stricmp @ 0x1403E1190
 * Callers:
 *     HalGetEnvironmentVariable @ 0x140508580 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140508720 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140A7BE54 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140A82B0C (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140AA8D9C (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140B0D470 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140B1789C (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140B18FFC (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403E113C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
