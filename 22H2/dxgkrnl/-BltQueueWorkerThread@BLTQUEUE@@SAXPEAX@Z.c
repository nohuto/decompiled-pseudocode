/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C016D860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0127404 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)StartContext + 16) + 8LL))(*((_QWORD **)StartContext + 16));
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  BLTQUEUE::BltQueueWorker(StartContext);
}
