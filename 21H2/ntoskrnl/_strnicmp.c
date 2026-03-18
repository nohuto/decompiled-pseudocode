/*
 * XREFs of _strnicmp @ 0x1403E1240
 * Callers:
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B0D360 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140B0D514 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140B18FFC (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140B2CF90 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403E11DC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
