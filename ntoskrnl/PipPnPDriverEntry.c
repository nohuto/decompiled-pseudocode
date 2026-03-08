/*
 * XREFs of PipPnPDriverEntry @ 0x140B32140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PipPnPDriverEntry(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rax

  DriverExtension = a1->DriverExtension;
  PnpDriverObject = a1;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)xHalGetInterruptTranslator;
  a1->MajorFunction[27] = (PDRIVER_DISPATCH)IopPnPDispatch;
  a1->MajorFunction[22] = (PDRIVER_DISPATCH)IopPowerDispatch;
  a1->MajorFunction[23] = (PDRIVER_DISPATCH)IopSystemControlDispatch;
  return 0LL;
}
