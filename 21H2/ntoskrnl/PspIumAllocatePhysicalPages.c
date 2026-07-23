/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x140583A84
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmAllocateSecureKernelPages @ 0x140553614 (MmAllocateSecureKernelPages.c)
 *     MmFreeSecureKernelPages @ 0x140553944 (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, ULONG_PTR **a2, unsigned int a3, ULONG_PTR *a4, _DWORD *a5)
{
  ULONG_PTR *SecureKernelPages; // rax
  unsigned int v8; // ebx
  struct _MDL *v9; // rdi
  ULONG_PTR v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v17; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  memset(&MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  SecureKernelPages = MmAllocateSecureKernelPages(a2, (unsigned int)(a1 + 1), a3, 0, a5);
  v8 = 0;
  v9 = (struct _MDL *)SecureKernelPages;
  if ( !SecureKernelPages )
    return 3221225495LL;
  if ( a1 )
  {
    v12 = *((_DWORD *)SecureKernelPages + 10);
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v13 = v12 >> 12;
    v17 = SecureKernelPages[v13 + 5];
    v14 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v15 = v14;
    if ( !v14 )
    {
      MmFreeSecureKernelPages(v9, 0);
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
    v11 = SecureKernelPages[6];
  }
  *a4 = v11;
LABEL_9:
  ExFreePoolWithTag(v9, 0);
  return v8;
}
