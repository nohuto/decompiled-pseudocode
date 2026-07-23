/*
 * XREFs of isprint @ 0x1403D28A0
 * Callers:
 *     SmSanitizeString @ 0x14059D3E0 (SmSanitizeString.c)
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
