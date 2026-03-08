/*
 * XREFs of PoEndDeviceBusy @ 0x140584F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoEndDeviceBusy(PULONG IdlePointer)
{
  _InterlockedDecrement((volatile signed __int32 *)IdlePointer + 2);
}
