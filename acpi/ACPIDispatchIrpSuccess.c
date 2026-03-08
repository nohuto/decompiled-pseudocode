/*
 * XREFs of ACPIDispatchIrpSuccess @ 0x1C00245F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchIrpSuccess(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
