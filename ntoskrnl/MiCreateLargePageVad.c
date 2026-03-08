/*
 * XREFs of MiCreateLargePageVad @ 0x140A46988
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A40C34 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, void *a3)
{
  int v3; // r12d
  __int64 Pool; // rbx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r9d
  int v14; // ebp

  v3 = 1;
  Pool = 1LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
    Pool = -(__int64)(a3 != 0LL) & 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Pool )
  {
    Pool = (__int64)MiAllocatePool(64, 0x48uLL, 0x624C6D4Du);
    if ( !Pool )
      return 3221225626LL;
  }
  v11 = *(unsigned int *)(a2 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v12 )
  {
    if ( !a3 )
      goto LABEL_24;
LABEL_23:
    ObfReferenceObjectWithTag(a3, 0x746C6644u);
    *(_QWORD *)(Pool + 24) = a3;
    goto LABEL_24;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31)) )
  {
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return 3221225773LL;
  }
  if ( a3 )
    goto LABEL_23;
  if ( v13 || Process != (_KPROCESS *)a1 )
    v3 = 0;
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v14 = MiChargeFullProcessCommitment(a1, v12);
  if ( v3 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v14 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v12);
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)v14;
  }
LABEL_24:
  if ( Pool )
  {
    *(_DWORD *)(Pool + 64) = 16;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 0);
  }
  return 0LL;
}
