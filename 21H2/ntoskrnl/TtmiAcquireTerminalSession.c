/*
 * XREFs of TtmiAcquireTerminalSession @ 0x1409A4BF0
 * Callers:
 *     TtmpScheduledEvaluationWorker @ 0x1409A3B80 (TtmpScheduledEvaluationWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall TtmiAcquireTerminalSession(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  result = *(_QWORD *)(a2 + 16);
  *a1 = result;
  return result;
}
