/*
 * XREFs of ACPIFilterIrpQueryCapabilities @ 0x1C0085EE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C007BFA8 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(
           a1,
           a2,
           (__int64)ACPIBusAndFilterIrpQueryCapabilities,
           a4,
           1,
           1,
           0);
}
