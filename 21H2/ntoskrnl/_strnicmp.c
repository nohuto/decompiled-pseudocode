/*
 * XREFs of _strnicmp @ 0x1403D1FF0
 * Callers:
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A4806C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140A4822C (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140A5E274 (IopStoreArcInformation.c)
 *     CmpAppendSection @ 0x140A6373C (CmpAppendSection.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D1F8C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
