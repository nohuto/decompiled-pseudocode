/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A830
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C030A728 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C030AF10 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrResetFromTimeoutAsync(struct _TDR_RECOVERY_CONTEXT *BugCheckParameter1)
{
  __int64 v2; // rax
  struct _WORK_QUEUE_ITEM *v3; // r8

  v2 = operator new[](0x28uLL, 0x4B677844u, 64LL);
  if ( !v2 )
    TdrBugcheckOnTimeout((ULONG_PTR)BugCheckParameter1);
  *(_QWORD *)(v2 + 32) = BugCheckParameter1;
  TdrReferenceRecoveryContext(BugCheckParameter1);
  v3->List.Flink = 0LL;
  v3->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v3->Parameter = v3;
  ExQueueWorkItem(v3, CriticalWorkQueue);
}
