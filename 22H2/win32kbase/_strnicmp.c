/*
 * XREFs of _strnicmp @ 0x1C00C57CC
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0016CD0 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     rimLoadImage @ 0x1C006D450 (rimLoadImage.c)
 *     ivrLoadImage @ 0x1C01BA908 (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00C5768 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
