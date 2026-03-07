void __fastcall FxPnpStateCallback::Invoke(
        FxPnpStateCallback *this,
        _WDF_DEVICE_PNP_STATE State,
        _WDF_STATE_NOTIFICATION_TYPE Type,
        WDFDEVICE__ *Device,
        const _WDF_DEVICE_PNP_NOTIFICATION_DATA *NotificationData)
{
  unsigned __int32 v5; // edx
  void (__fastcall *v6)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *); // rax

  v5 = State & 0xFFFF7FFF;
  v6 = (void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *))*((_QWORD *)&this[-4] + 2 * v5 - 47);
  if ( v6 )
  {
    if ( (Type & *((_DWORD *)&this[-4] + 4 * v5 - 96)) != 0 )
      v6(Device, NotificationData);
  }
}
