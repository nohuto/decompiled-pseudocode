/*
 * XREFs of MmAllocateContiguousMemory @ 0x14061BCB0
 * Callers:
 *     DifMmAllocateContiguousMemoryWrapper @ 0x1405E45F0 (DifMmAllocateContiguousMemoryWrapper.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx
  SIZE_T v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = NumberOfBytes;
  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140C65820 )
    v2 = qword_140C65820;
  return (PVOID)MiAllocateContiguousMemory(&v4, 0LL, v2, 0LL, 6u, 0x80000000, MiSystemPartition, 0x546E6F43u, 0);
}
