/*
 * XREFs of strcpy @ 0x1403D5460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Dest, const char *Source)
{
  return (char *)__entry_from_strcat_in_strcpy(Dest, Source);
}
