/*
 * XREFs of strrchr @ 0x18011E0D6
 * Callers:
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strrchr(const char *Str, int Ch)
{
  return __imp_strrchr(Str, Ch);
}
