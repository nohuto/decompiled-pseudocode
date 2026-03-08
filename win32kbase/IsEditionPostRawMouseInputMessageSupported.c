/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C0271EC0
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C007B530 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C0241C48 (ApiSetEditionPostRawMouseInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C02D7D88 )
    return qword_1C02D7D88();
  else
    return 3221225659LL;
}
