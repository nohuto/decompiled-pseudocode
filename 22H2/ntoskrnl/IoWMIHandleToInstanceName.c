/*
 * XREFs of IoWMIHandleToInstanceName @ 0x14078D030
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14078D0B0 (IoWMIDeviceObjectToInstanceName.c)
 *     WmipGetFilePDO @ 0x14078D304 (WmipGetFilePDO.c)
 */

NTSTATUS __stdcall IoWMIHandleToInstanceName(PVOID DataBlockObject, HANDLE FileHandle, PUNICODE_STRING InstanceName)
{
  int FilePDO; // ebx
  UNICODE_STRING *v6; // r8
  struct _DMA_ADAPTER *v7; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  FilePDO = WmipGetFilePDO(FileHandle, 0LL, &DeviceObject);
  if ( FilePDO >= 0 )
  {
    v6 = InstanceName;
    v7 = (struct _DMA_ADAPTER *)DeviceObject;
    FilePDO = IoWMIDeviceObjectToInstanceName(DataBlockObject, DeviceObject, v6);
    if ( FilePDO >= 0 )
      FilePDO = 0;
    if ( v7 )
      HalPutDmaAdapter(v7);
  }
  return FilePDO;
}
