/*
 * XREFs of VfFillAllocatePagesForMdl @ 0x140AE09B8
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140ADF970 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140ADFC00 (VerifierMmAllocatePagesForMdlEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 */

void __fastcall VfFillAllocatePagesForMdl(PMDL MemoryDescriptorList, int a2, char a3)
{
  ULONG ByteCount; // edi
  PVOID MappedSystemVa; // r14
  unsigned int v6; // esi
  PVOID v7; // rax
  void *v8; // rbp

  if ( (a3 & 1) != 0 && a2 == 1 )
  {
    ByteCount = MemoryDescriptorList->ByteCount;
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    v6 = 4096;
    MemoryDescriptorList->ByteCount = 4096;
    v7 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v8 = v7;
    if ( v7 )
    {
      if ( ByteCount < 0x1000 )
        v6 = ByteCount;
      VfFillAllocatedMemory(v7, v6);
      MmUnmapLockedPages(v8, MemoryDescriptorList);
      MemoryDescriptorList->MappedSystemVa = MappedSystemVa;
    }
    MemoryDescriptorList->ByteCount = ByteCount;
  }
}
