__int64 __fastcall VfEvtDeviceUsageNotificationEx(
        WDFDEVICE__ *Device,
        unsigned int NotificationType,
        unsigned __int8 IsInNotificationPath)
{
  unsigned int v6; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v8)(WDFDEVICE__ *, _QWORD, __int64); // rbp
  KIRQL CurrentIrql; // bl
  __int64 v10; // r8
  unsigned __int8 critRegion; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v8 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD, __int64))*((_QWORD *)TypedContext + 18);
  if ( v8 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    LOBYTE(v10) = IsInNotificationPath;
    v6 = v8(Device, NotificationType, v10);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v8);
  }
  return v6;
}
