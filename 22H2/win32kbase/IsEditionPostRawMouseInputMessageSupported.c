/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C023310C
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0054CAC (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C0207500 (ApiSetEditionPostRawMouseInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C0296C10 )
    return qword_1C0296C10();
  else
    return 3221225659LL;
}
