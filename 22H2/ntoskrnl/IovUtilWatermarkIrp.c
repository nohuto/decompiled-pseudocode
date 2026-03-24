/*
 * XREFs of IovUtilWatermarkIrp @ 0x1403615A4
 * Callers:
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750270 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x14076872C (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408B2A10 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409D16AC (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
