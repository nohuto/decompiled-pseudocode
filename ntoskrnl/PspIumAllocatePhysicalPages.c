/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x1405A36E0
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MmFreeSecureKernelPages @ 0x1406558DC (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, ULONG_PTR a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 SecureKernelPages; // rax
  unsigned int v8; // ebx
  void *v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  memset(&MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  SecureKernelPages = MmAllocateSecureKernelPages(a2, a5);
  v8 = 0;
  v9 = (void *)SecureKernelPages;
  if ( !SecureKernelPages )
    return 3221225495LL;
  if ( a1 )
  {
    v12 = *(_DWORD *)(SecureKernelPages + 40);
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v13 = v12 >> 12;
    v17 = *(_QWORD *)(SecureKernelPages + 8LL * (v13 - 1) + 48);
    v14 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v15 = v14;
    if ( !v14 )
    {
      MmFreeSecureKernelPages(v9, 0LL);
      v8 = -1073741670;
      goto LABEL_9;
    }
    memmove(v14, v9, 8LL * v13 + 48);
    v15[10] -= 4096;
    MmUnmapLockedPages(v15, &MemoryDescriptorList);
    v11 = v17;
  }
  else
  {
    v11 = *(_QWORD *)(SecureKernelPages + 48);
  }
  *a4 = v11;
LABEL_9:
  ExFreePoolWithTag(v9, 0);
  return v8;
}
