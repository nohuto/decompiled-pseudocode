/*
 * XREFs of RtlpLockStack @ 0x180083D28
 * Callers:
 *     RtlLockCurrentThread @ 0x180083C70 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x18009F690 (NtLockVirtualMemory.c)
 */

NTSTATUS RtlpLockStack()
{
  struct _TEB *v0; // rdx
  void *StackBase; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  StackBase = v0->NtTib.StackBase;
  v2 = (unsigned __int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  for ( i = (unsigned __int64)StackBase - 4096; i >= v2; i -= 4096LL )
    ;
  BaseAddress = (char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  RegionSize = (ULONG_PTR)StackBase - v2;
  return NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
}
