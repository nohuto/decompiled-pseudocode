/*
 * XREFs of isprint @ 0x1403D4530
 * Callers:
 *     SmSanitizeString @ 0x1405C831C (SmSanitizeString.c)
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 0x157;
}
