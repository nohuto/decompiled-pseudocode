/*
 * XREFs of ACPIFilterIrpEject @ 0x1C0085A60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C007BF98 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpEject(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, (__int64)ACPIBusAndFilterIrpEject, a4, 0, 1, 0);
}
