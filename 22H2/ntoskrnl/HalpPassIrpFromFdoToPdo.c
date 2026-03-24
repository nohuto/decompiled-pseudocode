/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x1403A6B9C
 * Callers:
 *     HalpDispatchPnp @ 0x1407645A0 (HalpDispatchPnp.c)
 *     HalpDispatchWmi @ 0x1407D5240 (HalpDispatchWmi.c)
 *     HalpDispatchPower @ 0x140998190 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
