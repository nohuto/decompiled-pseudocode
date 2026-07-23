/*
 * XREFs of RtlpAllocDeallocQueryBuffer @ 0x180045F2C
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

PVOID __fastcall RtlpAllocDeallocQueryBuffer(PSIZE_T RegionSize, void *a2, ULONG_PTR a3, NTSTATUS *a4)
{
  PVOID result; // rax
  NTSTATUS v7; // r8d
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  PVOID v9; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  result = 0LL;
  BaseAddress = 0LL;
  v7 = 0;
  if ( a2 )
  {
    v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v9, &v10, 0x8000u);
    result = BaseAddress;
  }
  if ( RegionSize )
  {
    v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
    result = BaseAddress;
    if ( v7 < 0 )
      result = 0LL;
  }
  if ( a4 )
    *a4 = v7;
  return result;
}
