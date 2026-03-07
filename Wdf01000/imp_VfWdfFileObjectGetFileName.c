_UNICODE_STRING *__fastcall imp_VfWdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetFileName(DriverGlobals, FileObject);
}
