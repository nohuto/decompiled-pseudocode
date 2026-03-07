void __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 v3; // r9
  int v4; // r10d
  NTSTATUS v5; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  v2 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1750554411, 0LL, 0LL);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START);
  while ( 1 )
  {
    Log((__int64)DeviceObject, 16, 1750554488, 0LL, _InterlockedCompareExchange(v2 + 1221, 2, 1));
    if ( v4 == 1 )
      break;
    if ( ((v4 - 2) & 0xFFFFFFFD) == 0 )
      return;
    UsbhDisarmHubForWakeDetect((__int64)DeviceObject);
  }
  KeWaitForSingleObject(v2 + 1224, Executive, 0, v3, (PLARGE_INTEGER)(v3 & (unsigned __int64)Timeout));
  Log((__int64)DeviceObject, 16, 1750554480, 0LL, 0LL);
  KeResetEvent((PRKEVENT)v2 + 204);
  v5 = PoRequestPowerIrp(
         DeviceObject,
         0,
         (POWER_STATE)v2[1259],
         (PREQUEST_POWER_COMPLETE)UsbhFdoWakePoComplete_Action,
         0LL,
         0LL);
  if ( v5 == 259 )
  {
    Log((__int64)DeviceObject, 16, 1749111373, 0LL, 0LL);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1463896944, v5, 0LL);
    v2[1221] = 1;
    KeSetEvent((PRKEVENT)v2 + 204, 0, 0);
  }
}
