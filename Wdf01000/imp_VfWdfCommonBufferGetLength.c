unsigned __int64 __fastcall imp_VfWdfCommonBufferGetLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetLength(DriverGlobals, CommonBuffer);
}
