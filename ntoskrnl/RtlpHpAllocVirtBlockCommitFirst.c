/*
 * XREFs of RtlpHpAllocVirtBlockCommitFirst @ 0x1405AB400
 * Callers:
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 */

char *__fastcall RtlpHpAllocVirtBlockCommitFirst(void *a1, _QWORD *a2, ULONG_PTR a3, ULONG_PTR *a4)
{
  char *v6; // rbx
  ULONG_PTR v7; // rdx
  ULONG_PTR v9; // [rsp+30h] [rbp-10h] BYREF
  PVOID v10; // [rsp+38h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+38h] BYREF
  ULONG_PTR v13; // [rsp+80h] [rbp+40h] BYREF

  v13 = a3;
  BaseAddress = a1;
  RegionSize = *a2 + a3 + 4096;
  v6 = 0LL;
  BaseAddress = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
  {
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v13, 0x4000u);
    v9 = 4096LL;
    v10 = (char *)BaseAddress + RegionSize - 4096;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, &v9, 0x4000u);
    v7 = RegionSize;
    v6 = (char *)BaseAddress + v13;
    *a2 = RegionSize - v9 - v13;
    *a4 = v7;
  }
  return v6;
}
