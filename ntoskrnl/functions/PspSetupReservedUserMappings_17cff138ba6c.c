__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, $115DCDF994C6370D29323EAB0E0C9502 *a2, _QWORD *a3)
{
  int v5; // ebx
  int VirtualMemory; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = *(_DWORD *)(a3[26] + 8LL) & 0x1000060;
  if ( !v5 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0, (__int64)a2);
  if ( v5 == 0x1000000 || !v5 )
    goto LABEL_11;
  BaseAddress = (PVOID)4;
  if ( v5 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v5 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_11:
    v8 = 0LL;
    if ( a3[32] )
    {
      v9 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemoryEx(-1LL, v9 + a3[35]);
        if ( VirtualMemory < 0 )
          break;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < a3[32] );
    }
  }
  KiUnstackDetachProcess(a2);
  return (unsigned int)VirtualMemory;
}
