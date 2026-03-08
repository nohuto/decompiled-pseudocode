/*
 * XREFs of _finite @ 0x1403D3790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl finite(double X)
{
  return ((*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) - 0x7FF0000000000000LL) >> 63;
}
