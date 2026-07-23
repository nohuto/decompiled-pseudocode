/*
 * XREFs of RtlpFcEnterRegion @ 0x14078E008
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6AB8 (RtlpFcBufferManagerReferenceBuffers.c)
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
