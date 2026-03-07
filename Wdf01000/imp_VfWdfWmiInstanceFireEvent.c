__int64 __fastcall imp_VfWdfWmiInstanceFireEvent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance,
        __int64 EventDataSize,
        void *EventData)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *, __int64, void *))WdfVersion.Functions.pfnWdfWmiInstanceFireEvent)(
           DriverGlobals,
           WmiInstance,
           EventDataSize,
           EventData);
}
