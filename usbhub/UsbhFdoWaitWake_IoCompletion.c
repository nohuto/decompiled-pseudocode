__int64 __fastcall UsbhFdoWaitWake_IoCompletion(__int64 DeviceObject, PIRP Irp, PVOID Context)
{
  _DWORD *v5; // rbx
  unsigned int v6; // edi

  Log(DeviceObject, 16, 1717000041, 0LL, (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  v5 = FdoExt(DeviceObject);
  if ( _InterlockedExchange(v5 + 1221, 7) == 4 )
  {
    v6 = 0;
    v5[640] = (PoGetSystemWake(Irp) != 0 ? 0x4000000 : 0) | v5[640] & 0xFBFFFFFF;
  }
  else
  {
    v6 = -1073741802;
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
  return v6;
}
