/*
 * XREFs of HalAllocateCommonBufferExV2 @ 0x1403ABEB0
 * Callers:
 *     HalAllocateCommonBufferV2 @ 0x1403ABE80 (HalAllocateCommonBufferV2.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 */

void *__fastcall HalAllocateCommonBufferExV2(__int64 a1, __int64 *a2, int a3, PHYSICAL_ADDRESS *a4, int a5, int a6)
{
  __int64 v8; // r8
  void *ContiguousNodeMemory; // rax
  void *v10; // rbx

  if ( a2 )
    v8 = *a2;
  else
    v8 = *(_QWORD *)(a1 + 144);
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                   a3,
                                   0,
                                   v8,
                                   *(_BYTE *)(a1 + 153) != 0 ? 0 : 0x10000,
                                   *(_BYTE *)(a1 + 445) != 0 ? 4 : 516,
                                   a6);
  v10 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    *a4 = MmGetPhysicalAddress(ContiguousNodeMemory);
  return v10;
}
