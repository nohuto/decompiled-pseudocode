/*
 * XREFs of HalpDmaGrowContiguousMapBuffers @ 0x1409315C0
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404FF9C0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x1409307C0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050DFA0 (HalpDmaAllocateContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowContiguousMapBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // eax
  struct _MDL *v7; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  PHYSICAL_ADDRESS v10; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  v2 = 16;
  v10.QuadPart = 0LL;
  v3 = a2;
  P = 0LL;
  if ( *(_BYTE *)(a1 + 153) )
    v2 = a2;
  while ( v3 )
  {
    v5 = v3;
    if ( v3 >= v2 )
      v5 = v2;
    v6 = HalpDmaAllocateContiguousMemory(a1, v5, &BaseAddress, &v10, &P);
    if ( v6 )
    {
      if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)BaseAddress, v10.QuadPart, v6) )
      {
        v7 = (struct _MDL *)P;
        if ( P )
        {
          if ( BaseAddress )
            MmUnmapLockedPages(BaseAddress, (PMDL)P);
          MmFreePagesFromMdl(v7);
          ExFreePoolWithTag(v7, 0);
        }
        else
        {
          MmFreeContiguousMemory(BaseAddress);
        }
        return;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      v3 -= v5;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 153) || v2 <= 0x10 || v3 <= 0x10 )
        return;
      v2 = 16;
    }
  }
}
