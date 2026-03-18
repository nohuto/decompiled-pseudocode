/*
 * XREFs of rand @ 0x1403E2660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140C09480 = 214013 * dword_140C09480 + 2531011;
  return (dword_140C09480 >> 16) & 0x7FFF;
}
