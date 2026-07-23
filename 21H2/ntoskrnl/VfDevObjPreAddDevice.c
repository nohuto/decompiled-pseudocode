/*
 * XREFs of VfDevObjPreAddDevice @ 0x1409D70F8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14036F7E0 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14037DB20 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
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
