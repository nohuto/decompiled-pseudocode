__int64 __fastcall imp_VfWdfDeviceInitRegisterPnpStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 PnpState,
        void (__fastcall *EvtDevicePnpStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *), unsigned int))WdfVersion.Functions.pfnWdfDeviceInitRegisterPnpStateChangeCallback)(
           DriverGlobals,
           DeviceInit,
           PnpState,
           EvtDevicePnpStateChange,
           CallbackTypes);
}
