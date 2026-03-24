/*
 * XREFs of RtlpFcEnterRegion @ 0x14078DE48
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6968 (RtlpFcBufferManagerReferenceBuffers.c)
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
