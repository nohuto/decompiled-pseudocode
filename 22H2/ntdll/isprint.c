/*
 * XREFs of isprint @ 0x18008D150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180166150[v1] & 0x157;
}
