/*
 * XREFs of HalpProcessorResumeFromIdle @ 0x1402CB770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

struct _KPRCB *HalpProcessorResumeFromIdle()
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( SLODWORD(result->HalReserved[2]) > 0 )
  {
    result = KeGetCurrentPrcb();
    if ( (result->HalReserved[2] & 1) == 0 )
    {
      result = (struct _KPRCB *)HalpProfileInterface[10];
      if ( result )
        return (struct _KPRCB *)((__int64 (*)(void))result)();
    }
  }
  return result;
}
