/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C0042018
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0036264 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C0041EEC (ApiSetEditionPostRawMouseInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C029D5B0 )
    return qword_1C029D5B0();
  else
    return 3221225659LL;
}
