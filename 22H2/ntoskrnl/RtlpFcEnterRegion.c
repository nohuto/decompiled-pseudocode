/*
 * XREFs of RtlpFcEnterRegion @ 0x14078DD48
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6268 (RtlpFcBufferManagerReferenceBuffers.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlpFcEnterRegion()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --result->KernelApcDisable;
  return result;
}
