/*
 * XREFs of isupper @ 0x1403D4590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isupper(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 1;
}
