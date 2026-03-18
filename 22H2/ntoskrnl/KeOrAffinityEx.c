/*
 * XREFs of KeOrAffinityEx @ 0x14056F4D0
 * Callers:
 *     <none>
 * Callees:
 *     KiOrAffinityEx @ 0x1402C2A80 (KiOrAffinityEx.c)
 */

__int64 __fastcall KeOrAffinityEx(char *a1, _WORD *a2, _BYTE *a3)
{
  return KiOrAffinityEx(a1, a2, a3, 0x14u);
}
