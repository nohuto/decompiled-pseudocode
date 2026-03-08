/*
 * XREFs of HalpDmaGrowScatterMapBuffers @ 0x1409316C4
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404FF9C0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x1409307C0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14050E5D4 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140931508 (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowScatterMapBuffers(PHYSICAL_ADDRESS *a1, unsigned int a2)
{
  PMDL v3; // rax
  struct _MDL *v4; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v4 = v3;
  if ( v3 )
  {
    if ( !HalpDmaCommitScatterMapBuffers((__int64)a1, (__int64)BaseAddress, 0LL, 0, v3) )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, v4);
      MmFreePagesFromMdl(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}
