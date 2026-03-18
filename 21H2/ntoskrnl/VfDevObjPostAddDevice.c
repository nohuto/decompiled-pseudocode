/*
 * XREFs of VfDevObjPostAddDevice @ 0x140A91784
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1402D2574 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      VfFilterAttach(TargetDevice);
  }
}
