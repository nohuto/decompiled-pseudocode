/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x14067E58C
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A40560 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1407659CC (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
