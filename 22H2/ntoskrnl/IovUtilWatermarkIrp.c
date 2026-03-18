/*
 * XREFs of IovUtilWatermarkIrp @ 0x140302C64
 * Callers:
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790740 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1407954A4 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACEAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140ACEC28 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
