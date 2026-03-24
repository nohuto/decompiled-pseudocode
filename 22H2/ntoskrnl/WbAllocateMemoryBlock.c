/*
 * XREFs of WbAllocateMemoryBlock @ 0x140666584
 * Callers:
 *     WbAllocateUserMemory @ 0x1406672B4 (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406666C8 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbFreeMemoryBlock @ 0x140667C48 (WbFreeMemoryBlock.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, _QWORD *a2)
{
  int VirtualMemory; // edi
  ULONGLONG v5; // [rsp+30h] [rbp-58h]

  VirtualMemory = WbAlloc(0x440uLL);
  if ( VirtualMemory >= 0 )
  {
    MEMORY[0] = 0LL;
    MEMORY[8] = 0x10000LL;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 0LL;
    MEMORY[0x438] = 0LL;
    MEMORY[0x10] = KeGetCurrentThread()->ApcState.Process;
    MEMORY[0x430] = 0LL;
    memset((void *)0x2C, 0, 0x400uLL);
    LODWORD(v5) = 0;
    VirtualMemory = MmAllocateVirtualMemory(-1, 0LL, (__int64 *)8, 4096, 32, 0LL, v5, 0, 0x20000000, 2, 1080LL);
    if ( VirtualMemory >= 0 )
    {
      if ( MEMORY[0x438] )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(MEMORY[0], MEMORY[8], 24LL, 32LL);
        if ( VirtualMemory >= 0 && a2 )
          *a2 = 0LL;
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock(0LL);
  return (unsigned int)VirtualMemory;
}
