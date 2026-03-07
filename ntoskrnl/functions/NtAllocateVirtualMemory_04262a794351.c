NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  int v7; // esi
  int v9; // r14d
  char PreviousMode; // dl
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  PVOID v14; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR v15; // [rsp+70h] [rbp-78h] BYREF
  _DWORD v16[20]; // [rsp+90h] [rbp-58h] BYREF

  v7 = ZeroBits;
  v9 = (int)ProcessHandle;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  v14 = *BaseAddress;
  v15 = *RegionSize;
  v16[8] = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  result = MiAllocateVirtualMemoryCommon(
             v9,
             (unsigned int)&v14,
             v7,
             (unsigned int)&v15,
             AllocationType & 0xFFFFFF80,
             Protect,
             (__int64)v16,
             PreviousMode,
             0,
             0,
             0LL);
  if ( result >= 0 )
  {
    *BaseAddress = v14;
    *RegionSize = v15;
  }
  return result;
}
