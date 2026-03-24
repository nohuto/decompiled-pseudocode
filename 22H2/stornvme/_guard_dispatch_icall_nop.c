/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C0007D70
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00030F0 (NVMeCompletionDpcRoutine.c)
 *     StorNVMeDriverUnload @ 0x1C0007C10 (StorNVMeDriverUnload.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D258 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000D6B0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
