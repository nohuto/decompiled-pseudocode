__int64 __fastcall SepAdtCopyToLsaSharedMemory(HANDLE ProcessHandle, __int64 a2, unsigned int a3, PVOID *a4)
{
  __int64 v5; // rdi
  int v7; // ebx
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  BaseAddress = 0LL;
  v11 = 0LL;
  v5 = a3;
  RegionSize = a3;
  v7 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v7 >= 0 )
  {
    v7 = ZwWriteVirtualMemory((__int64)ProcessHandle, (__int64)BaseAddress);
    if ( v7 >= 0 )
    {
      if ( v5 == v11 )
      {
        *a4 = BaseAddress;
        return (unsigned int)v7;
      }
      v7 = -1073741823;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v7;
}
