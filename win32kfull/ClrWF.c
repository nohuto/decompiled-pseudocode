/*
 * XREFs of ClrWF @ 0x1C012C660
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

char __fastcall ClrWF(__int64 *a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 1);
}
