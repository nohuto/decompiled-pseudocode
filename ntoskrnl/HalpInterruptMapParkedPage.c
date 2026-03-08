/*
 * XREFs of HalpInterruptMapParkedPage @ 0x1405182F0
 * Callers:
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 */

__int64 __fastcall HalpInterruptMapParkedPage(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *MemoryInternal; // rax
  unsigned __int64 v5; // rax

  v2 = 0;
  if ( a1 )
  {
    *(_QWORD *)(a2 + 24) = a1;
    v5 = HalpMap(a1, 1LL, 0, 0LL, 4u);
    *(_QWORD *)(a2 + 32) = v5;
    if ( v5 )
      return v2;
    return (unsigned int)-1073741670;
  }
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096, 0);
  *(_QWORD *)(a2 + 32) = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  *(PHYSICAL_ADDRESS *)(a2 + 24) = MmGetPhysicalAddress(MemoryInternal);
  return v2;
}
