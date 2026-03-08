/*
 * XREFs of SetWF @ 0x1C012C6AC
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

char __fastcall SetWF(__int64 *a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 1);
}
