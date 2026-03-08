/*
 * XREFs of ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE5550
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViIrqlLogCRStackTrace @ 0x140AE5594 (ViIrqlLogCRStackTrace.c)
 */

struct _KTHREAD *ViIrqlKeLeaveCriticalRegion_Entry()
{
  struct _KTHREAD *result; // rax

  ViIrqlLogCRStackTrace();
  result = KeGetCurrentThread();
  if ( result->KernelApcDisable > 0 )
    return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(0xC4u, 0x3EuLL, 0LL, 0LL, 0LL);
  return result;
}
