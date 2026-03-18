/*
 * XREFs of HMAllocObject @ 0x1C002DC20
 * Callers:
 *     <none>
 * Callees:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  return HMAllocObjectEx(a1, a2, a3, a4, 0);
}
