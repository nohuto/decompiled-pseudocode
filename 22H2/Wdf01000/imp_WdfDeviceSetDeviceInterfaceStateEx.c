/*
 * XREFs of imp_WdfDeviceSetDeviceInterfaceStateEx @ 0x1C001BAE0
 * Callers:
 *     <none>
 * Callees:
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B960 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 */

void __fastcall imp_WdfDeviceSetDeviceInterfaceStateEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfDeviceSetDeviceInterfaceStateWorker(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    RefString,
    IsInterfaceEnabled,
    WdfFalse);
}
