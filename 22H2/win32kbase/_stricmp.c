/*
 * XREFs of _stricmp @ 0x1C00C5938
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00CFC70 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     __ascii_stricmp @ 0x1C00C58F0 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
