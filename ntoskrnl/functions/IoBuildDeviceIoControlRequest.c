PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           (__int64)OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock);
}
