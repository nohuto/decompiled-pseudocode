/*
 * XREFs of MemUtilGetNextRegionInfo @ 0x1800865B4
 * Callers:
 *     MemUtilQueryProcessProcessModified @ 0x1800869A4 (MemUtilQueryProcessProcessModified.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilGetNextRegionInfo(
        HANDLE ProcessHandle,
        unsigned __int64 Address,
        unsigned __int64 a3,
        void *a4)
{
  char *v6; // rdi
  unsigned int v8; // ebx
  int VirtualMemory; // eax
  _BYTE VirtualMemoryInformation[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]

  v6 = (char *)Address;
  if ( Address >= a3 )
  {
    return 259;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      VirtualMemory = NtQueryVirtualMemory(ProcessHandle, v6, MemoryBasicVlmInformation, a4, 0x30uLL, 0LL);
      if ( VirtualMemory >= 0 )
        break;
      if ( VirtualMemory != -1073741503 )
        return RtlNtStatusToDosError(VirtualMemory);
      VirtualMemory = NtQueryVirtualMemory(
                        ProcessHandle,
                        v6,
                        MemoryBasicInformation,
                        VirtualMemoryInformation,
                        0x30uLL,
                        0LL);
      if ( VirtualMemory < 0 )
        return RtlNtStatusToDosError(VirtualMemory);
      v6 += v12;
      if ( (unsigned __int64)v6 >= a3 )
        return 259;
    }
  }
  return v8;
}
