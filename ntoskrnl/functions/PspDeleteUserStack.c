__int64 __fastcall PspDeleteUserStack(struct _KPROCESS *a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  void *v6; // rax
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  if ( (*a4 & 2) != 0 )
  {
    v6 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v6;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a4 & 4) != 0 )
  {
    v8 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  if ( (*a4 & 8) != 0 )
  {
    v9 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v9;
    MmFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &RegionSize, (__int64 *)&BaseAddress, 0x8000, 0, 0x40000000);
  }
  return KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
}
