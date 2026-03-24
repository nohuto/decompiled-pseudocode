/*
 * XREFs of _strnicmp @ 0x1403D1E80
 * Callers:
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x14087966C (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A4706C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140A4722C (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140A5D274 (IopStoreArcInformation.c)
 *     CmpAppendSection @ 0x140A6273C (CmpAppendSection.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D1E1C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
