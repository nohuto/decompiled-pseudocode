/*
 * XREFs of KeSubtractAffinityEx @ 0x140457950
 * Callers:
 *     <none>
 * Callees:
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, char *a2, _BYTE *a3)
{
  return KiSubtractAffinityEx(a1, a2, a3, 0x14u);
}
