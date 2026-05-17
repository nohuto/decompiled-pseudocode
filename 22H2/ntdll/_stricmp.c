/*
 * XREFs of _stricmp @ 0x18008DCC0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800CEAAC (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAA94 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800E0500 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     __ascii_stricmp @ 0x18008DC70 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
