WDFDEVICE__ *__fastcall imp_VfWdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetDevice(DriverGlobals, FileObject);
}
