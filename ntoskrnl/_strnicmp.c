/*
 * XREFs of _strnicmp @ 0x1403D3C80
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B4E6B8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140B4E874 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140B5C310 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140B6F0F0 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D3C1C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
