/*
 * XREFs of ACPIFilterIrpQueryPnpDeviceState @ 0x1C0086510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C007BF98 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryPnpDeviceState(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(
           a1,
           a2,
           (__int64)ACPIBusAndFilterIrpQueryPnpDeviceState,
           a4,
           1,
           1,
           0);
}
