/*
 * XREFs of VfDevObjPreAddDevice @ 0x140ACF1C8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1402F8E78 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
