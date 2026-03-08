/*
 * XREFs of WbAllocateMemoryBlock @ 0x140753534
 * Callers:
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     WbAlloc @ 0x1406AF510 (WbAlloc.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MmAllocateVirtualMemory @ 0x140728160 (MmAllocateVirtualMemory.c)
 *     WbFreeMemoryBlock @ 0x140754DEC (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, __int64 **a2)
{
  int VirtualMemory; // edi
  PVOID *v4; // rax
  _QWORD *v5; // rbp
  __int64 *v6; // r15
  PMDL *v7; // r12
  _QWORD *v8; // r14
  __int64 *v9; // rbx
  ULONGLONG v11; // [rsp+30h] [rbp-58h]
  PVOID *BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  VirtualMemory = WbAlloc(0x440u, &BaseAddress);
  if ( VirtualMemory < 0 )
  {
    v9 = (__int64 *)BaseAddress;
  }
  else
  {
    v4 = BaseAddress;
    *BaseAddress = 0LL;
    v5 = v4 + 4;
    v6 = (__int64 *)(v4 + 1);
    v4[1] = (PVOID)0x10000;
    v7 = (PMDL *)(v4 + 3);
    v4[3] = 0LL;
    v8 = v4 + 135;
    v4[4] = 0LL;
    v4[4] = 0LL;
    v4[135] = 0LL;
    v9 = (__int64 *)BaseAddress;
    BaseAddress[2] = KeGetCurrentThread()->ApcState.Process;
    v9[134] = 0LL;
    memset((char *)v9 + 44, 0, 0x400uLL);
    LODWORD(v11) = 0;
    VirtualMemory = MmAllocateVirtualMemory(-1, v9, v6, 4096, 32, 0LL, v11, 0, 0x20000000, 2, (__int64)v8);
    if ( VirtualMemory >= 0 )
    {
      if ( *v8 )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable((void *)*v9, *(_DWORD *)v6, v7, v5);
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v9;
          v9 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock((PVOID *)v9);
  return (unsigned int)VirtualMemory;
}
