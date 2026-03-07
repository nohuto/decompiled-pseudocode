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
  __int64 v9; // rsi
  char *v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *Pool2; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // rax
  int v21; // [rsp+38h] [rbp-60h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = a2;
  Pool2 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePool2(64LL, a2 + 104LL, 1348627827LL);
  if ( !Pool2 )
    goto LABEL_2;
  v21 = a1;
  v15 = ((unsigned __int64)(a1 & 0xFFF) + v12 + 4095) >> 12;
  v16 = ExAllocatePool2(64LL, 8 * v15 + 48, 1346530675LL);
  v9 = v16;
  if ( !v16 )
    goto LABEL_2;
  *(_QWORD *)v16 = 0LL;
  *(_WORD *)(v16 + 8) = 8 * (v15 + 6);
  *(_WORD *)(v16 + 10) = 0;
  *(_QWORD *)(v16 + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v16 + 44) = a1 & 0xFFF;
  *(_DWORD *)(v16 + 40) = a2;
  MiProbeAndLockPages((_DWORD *)v16, 0, 0);
  v11 = 1;
  v10 = (*(_BYTE *)(v9 + 10) & 5) != 0
      ? *(char **)(v9 + 24)
      : (char *)MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v10 )
    goto LABEL_2;
  v17 = ((unsigned __int64)&Pool2[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  Pool2->State = 0;
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
         Pool2,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalPageErrorDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    Pool2 = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_2:
    v14 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, (PMDL)v9);
  if ( v11 )
    MmUnlockPages((PMDL)v9);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v14;
}
