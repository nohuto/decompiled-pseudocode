/*
 * XREFs of _strnicmp @ 0x1C00C543C
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0015860 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     rimLoadImage @ 0x1C006C9A0 (rimLoadImage.c)
 *     ivrLoadImage @ 0x1C01BA9D8 (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00C53D8 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
