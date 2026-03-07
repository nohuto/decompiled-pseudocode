void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  DXGGLOBAL *Global; // rax

  if ( Context )
  {
    WdLogSingleEntry1(1LL, 454LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Context == NULL", 454LL, 0LL, 0LL, 0LL, 0LL);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(IoObject);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(Global, (__int64)DeviceAttachmentBaseRef, 0LL);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
