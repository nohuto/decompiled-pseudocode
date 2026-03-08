/*
 * XREFs of IovUtilWatermarkIrp @ 0x1402092B8
 * Callers:
 *     PnpAsynchronousCall @ 0x1406885F8 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140ACAC28 (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
