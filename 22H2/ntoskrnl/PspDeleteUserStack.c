/*
 * XREFs of PspDeleteUserStack @ 0x1406A1938
 * Callers:
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F9DE0 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  char v6; // al
  void *v7; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  KiStackAttachProcess(a1, 0LL, (__int64)v13, a4);
  v6 = *(_BYTE *)a4;
  if ( (*(_BYTE *)a4 & 2) != 0 )
  {
    v7 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v6 = *(_BYTE *)a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    v6 = *(_BYTE *)a4;
  }
  if ( (v6 & 8) != 0 )
  {
    v10 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v10;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, (__int64 *)&BaseAddress, 0x8000, 0, 0x40000000);
  }
  return KiUnstackDetachProcess((__int64)v13, 0);
}
