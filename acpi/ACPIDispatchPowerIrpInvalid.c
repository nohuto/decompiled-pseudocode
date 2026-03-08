/*
 * XREFs of ACPIDispatchPowerIrpInvalid @ 0x1C00245C0
 * Callers:
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpInvalid(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741822;
  IofCompleteRequest(a2, 0);
  return 3221225474LL;
}
