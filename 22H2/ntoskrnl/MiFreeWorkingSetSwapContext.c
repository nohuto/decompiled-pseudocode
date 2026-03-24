/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1406FB1C0
 * Callers:
 *     MiBeginProcessClean @ 0x140350150 (MiBeginProcessClean.c)
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9B50 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1406BEA64 (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
