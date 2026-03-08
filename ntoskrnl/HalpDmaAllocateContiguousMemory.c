/*
 * XREFs of HalpDmaAllocateContiguousMemory @ 0x14050DFA0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409315C0 (HalpDmaGrowContiguousMapBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousMemory(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        PHYSICAL_ADDRESS *a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // rbx
  char v9; // bp
  __int64 v10; // rdi
  char i; // r15
  void *ContiguousNodeMemory; // rax
  void *v13; // r12
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v5 = *(_QWORD *)(a1 + 144);
  v6 = (unsigned __int64)a2 << 12;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 153) || a2 > 0x10 )
    v8 = 0LL;
  else
    v8 = 0x10000LL;
  v9 = 0;
  while ( 2 )
  {
    if ( (_DWORD)v5 == -1 )
      v10 = 0x1000000LL;
    else
      v10 = 0LL;
    for ( i = 0; ; i = 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v6, v10, v5, v8, 4, 0x80000000);
      v13 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *a3 = v13;
        *a4 = PhysicalAddress;
        goto LABEL_19;
      }
      if ( i || !v10 )
        break;
      v10 = 0LL;
    }
    if ( !v9 && v8 )
    {
      v9 = 1;
      v8 = 0LL;
      continue;
    }
    break;
  }
  v7 = 0;
LABEL_19:
  *a5 = 0LL;
  return v7;
}
