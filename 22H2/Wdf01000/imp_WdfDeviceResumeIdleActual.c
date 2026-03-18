/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x1C0016DA0
 * Callers:
 *     <none>
 * Callees:
 *     ResumeIdleWorker @ 0x1C0016DC0 (ResumeIdleWorker.c)
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
