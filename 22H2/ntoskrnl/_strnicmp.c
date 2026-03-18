/*
 * XREFs of _strnicmp @ 0x1403D91A0
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B56978 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140B56B34 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140B5E7E0 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140B733D8 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D913C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
