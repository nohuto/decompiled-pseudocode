/*
 * XREFs of RtlpFcEnterRegion @ 0x1407824A4
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
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
