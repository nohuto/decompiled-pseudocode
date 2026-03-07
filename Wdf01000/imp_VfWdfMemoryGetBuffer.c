void *__fastcall imp_VfWdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  return WdfVersion.Functions.pfnWdfMemoryGetBuffer(DriverGlobals, Memory, BufferSize);
}
