/*
 * XREFs of _controlfp @ 0x1800946C4
 * Callers:
 *     atan @ 0x18008E9F0 (atan.c)
 *     atan2 @ 0x18008EC50 (atan2.c)
 *     cos @ 0x18008F6C0 (cos.c)
 *     sin @ 0x18008FAE0 (sin.c)
 *     tan @ 0x180091E30 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
