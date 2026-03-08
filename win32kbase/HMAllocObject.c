/*
 * XREFs of HMAllocObject @ 0x1C00122A0
 * Callers:
 *     <none>
 * Callees:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HMAllocObjectEx(a1, a2, a3, a4, 0);
}
