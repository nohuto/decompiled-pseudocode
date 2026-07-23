/*
 * XREFs of rand @ 0x1403D3420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140C0F1A0 = 214013 * dword_140C0F1A0 + 2531011;
  return (dword_140C0F1A0 >> 16) & 0x7FFF;
}
