/*
 * XREFs of HalAllocateCommonBufferV2 @ 0x1403ABE80
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferExV2 @ 0x1403ABEB0 (HalAllocateCommonBufferExV2.c)
 */

__int64 __fastcall HalAllocateCommonBufferV2(int a1, int a2, int a3, char a4)
{
  return HalAllocateCommonBufferExV2(a1, 0, a2, a3, a4, 0x80000000);
}
