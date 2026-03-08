/*
 * XREFs of MiCreateRotateView @ 0x140A2E550
 * Callers:
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  struct _SLIST_ENTRY *Pool; // rbx
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rcx

  Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x48uLL, 0x77776D4Du);
  if ( !Pool )
    return 0LL;
  v4 = MiGetInPageSupportBlock(0, 0LL);
  if ( !v4 )
  {
    v5 = Pool;
LABEL_5:
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  if ( (int)PsChargeProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x208uLL) < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    v5 = v4;
    goto LABEL_5;
  }
  LODWORD(Pool[4].Next) = 8;
  *((_QWORD *)&Pool->Next + 1) = v4;
  MiInsertVadEvent(a1, (unsigned __int64 *)Pool, 0);
  return 1LL;
}
