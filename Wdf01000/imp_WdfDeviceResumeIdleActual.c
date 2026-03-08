/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x1C00331A0
 * Callers:
 *     <none>
 * Callees:
 *     ResumeIdleWorker @ 0x1C00314AC (ResumeIdleWorker.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  ResumeIdleWorker(DriverGlobals, Device, Tag, Line, File);
}
