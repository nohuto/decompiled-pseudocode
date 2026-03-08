/*
 * XREFs of HalAllocateCommonBufferV3 @ 0x14050C4E0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferExV3 @ 0x14050C450 (HalAllocateCommonBufferExV3.c)
 */

__int64 __fastcall HalAllocateCommonBufferV3(__int64 a1, unsigned int a2, __int64 a3)
{
  return HalAllocateCommonBufferExV3(a1, 0LL, a2, a3, 1, 0x80000000);
}
