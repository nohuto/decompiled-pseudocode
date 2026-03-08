/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x140728100
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateVirtualMemory @ 0x140728160 (MmAllocateVirtualMemory.c)
 */

__int64 __fastcall NtAllocateVirtualMemoryEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        volatile void *Address,
        ULONGLONG a7)
{
  ULONGLONG ullMultiplicand; // [rsp+30h] [rbp-38h]

  LODWORD(ullMultiplicand) = a7;
  return MmAllocateVirtualMemory(
           a1,
           a2,
           a3,
           a4,
           a5,
           Address,
           ullMultiplicand,
           KeGetCurrentThread()->PreviousMode,
           0,
           0,
           0LL);
}
