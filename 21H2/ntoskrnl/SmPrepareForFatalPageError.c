/*
 * XREFs of SmPrepareForFatalPageError @ 0x14059FFD8
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14059BB04 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039E7B0 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalPageError(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        PVOID BaseAddress)
{
  struct _MDL *v9; // rsi
  char *v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rbx
  struct _MDL *v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // rax
  int v21; // [rsp+38h] [rbp-60h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = a2;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              a2 + 104LL,
                                                              0x50626D73u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v21 = a1;
  v15 = ((unsigned __int64)(a1 & 0xFFF) + v12 + 4095) >> 12;
  v16 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 48, 0x50426D73u);
  v9 = v16;
  if ( !v16 )
    goto LABEL_2;
  v16->Next = 0LL;
  v16->Size = 8 * (v15 + 6);
  v16->MdlFlags = 0;
  v16->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v16->ByteOffset = a1 & 0xFFF;
  v16->ByteCount = a2;
  MiProbeAndLockPages((__int64)v16, 0, 0);
  v11 = 1;
  v10 = (char *)((v9->MdlFlags & 5) != 0
               ? v9->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( !v10 )
    goto LABEL_2;
  v17 = ((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag->State = 0;
  *(_QWORD *)(v17 + 32) = 0LL;
  *(_QWORD *)(v17 + 40) = 0LL;
  *(_QWORD *)(v17 + 48) = 0LL;
  *(_QWORD *)(v17 + 56) = 0LL;
  *(_DWORD *)v17 = 65539;
  *(_DWORD *)(v17 + 4) = a3;
  *(_DWORD *)(v17 + 8) = a4;
  *(_DWORD *)(v17 + 12) = a2;
  *(_DWORD *)(v17 + 16) = a5;
  v18 = (unsigned int)(a7 - v21);
  *(_DWORD *)(v17 + 20) = v18;
  *(_QWORD *)(v17 + 24) = a6;
  *(_QWORD *)(v17 + 32) = MmGetPhysicalAddress(&v10[v18]).QuadPart / 4096;
  v19.QuadPart = (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000
               ? -1LL
               : MmGetPhysicalAddress(&v10[a3 - 1 + *(unsigned int *)(v17 + 20)]).QuadPart / 4096;
  *(PHYSICAL_ADDRESS *)(v17 + 40) = v19;
  *(_QWORD *)(v17 + 48) = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
  memmove((void *)(v17 + 56), v10, a2);
  if ( KeRegisterBugCheckReasonCallback(
         PoolWithTag,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalPageErrorDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    PoolWithTag = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_2:
    v14 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, v9);
  if ( v11 )
    MmUnlockPages(v9);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v14;
}
