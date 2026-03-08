/*
 * XREFs of PspDeleteUserStack @ 0x140799590
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 */

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
