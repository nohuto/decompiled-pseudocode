/*
 * XREFs of strcpy @ 0x1403D37A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Dest, const char *Source)
{
  return (char *)__entry_from_strcat_in_strcpy(Dest, Source);
}
