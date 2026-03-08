/*
 * XREFs of imp_WdfIoTargetFormatRequestForRead @ 0x1C000E9F0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1C00503FC (FxIoTargetFormatIo.c)
 */

int __fastcall imp_WdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets,
        __int64 *DeviceOffset)
{
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           IoTarget,
           Request,
           3u,
           OutputBuffer,
           OutputBufferOffsets,
           DeviceOffset);
}
