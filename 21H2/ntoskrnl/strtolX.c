/*
 * XREFs of strtolX @ 0x1403D1640
 * Callers:
 *     atol @ 0x1403D1A90 (atol.c)
 * Callees:
 *     strtoxlX @ 0x1403D13E0 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
