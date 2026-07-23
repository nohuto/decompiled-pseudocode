/*
 * XREFs of MiCreateRotateView @ 0x1406A06B0
 * Callers:
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14023E894 (MiGetInPageSupportBlock.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14025B21C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140297040 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _SLIST_ENTRY *Pool; // rbx
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY v5; // rcx

  Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x48uLL, 0x77776D4Du);
  if ( Pool )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x208uLL) >= 0 )
      {
        LODWORD(Pool[4].Next) = 8;
        *((_QWORD *)&Pool->Next + 1) = v3;
        MiInsertVadEvent(a1, Pool, 0);
        return 1LL;
      }
      ExFreePoolWithTag(Pool, 0);
      v5 = v3;
    }
    else
    {
      v5 = Pool;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
