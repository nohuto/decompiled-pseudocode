_LARGE_INTEGER __fastcall imp_VfWdfCommonBufferGetAlignedLogicalAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return (_LARGE_INTEGER)((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOMMONBUFFER__ *))WdfVersion.Functions.pfnWdfCommonBufferGetAlignedLogicalAddress)(
                           DriverGlobals,
                           CommonBuffer);
}
