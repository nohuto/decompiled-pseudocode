/*
 * XREFs of EtwpCompareGuid @ 0x1408A3A70
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
