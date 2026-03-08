/*
 * XREFs of PiSwPdoDriverEntry @ 0x140B32190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiSwPdoDriverEntry(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rax

  DriverExtension = a1->DriverExtension;
  PiSwDeviceDriverObject = a1;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)xHalGetInterruptTranslator;
  a1->MajorFunction[27] = (PDRIVER_DISPATCH)PiSwPdoPnPDispatch;
  a1->MajorFunction[22] = (PDRIVER_DISPATCH)IopPowerDispatch;
  a1->MajorFunction[23] = (PDRIVER_DISPATCH)IopSystemControlDispatch;
  return 0LL;
}
