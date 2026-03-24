/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02666F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C02665E8 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0266E00 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrResetFromTimeoutAsync(struct _TDR_RECOVERY_CONTEXT *BugCheckParameter1)
{
  _QWORD *v2; // rax
  struct _WORK_QUEUE_ITEM *v3; // r8

  v2 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( !v2 )
    TdrBugcheckOnTimeout((ULONG_PTR)BugCheckParameter1);
  v2[4] = BugCheckParameter1;
  TdrReferenceRecoveryContext(BugCheckParameter1);
  v3->List.Flink = 0LL;
  v3->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v3->Parameter = v3;
  ExQueueWorkItem(v3, CriticalWorkQueue);
}
