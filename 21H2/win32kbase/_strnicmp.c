/*
 * XREFs of _strnicmp @ 0x1C00D6178
 * Callers:
 *     rimLoadImage @ 0x1C0056CD4 (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC250 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ivrLoadImage @ 0x1C01F102C (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00D6114 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
