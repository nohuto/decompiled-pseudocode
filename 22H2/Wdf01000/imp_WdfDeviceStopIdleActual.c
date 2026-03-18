/*
 * XREFs of imp_WdfDeviceStopIdleActual @ 0x1C0016C60
 * Callers:
 *     <none>
 * Callees:
 *     StopIdleWorker @ 0x1C0016C88 (StopIdleWorker.c)
 */

int __fastcall imp_WdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  return StopIdleWorker(DriverGlobals, Device, WaitForD0, Tag, Line, File);
}
