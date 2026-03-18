/*
 * XREFs of RtlpFcEnterRegion @ 0x1407D1628
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035CC4C (RtlpFcBufferManagerReferenceBuffers.c)
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
