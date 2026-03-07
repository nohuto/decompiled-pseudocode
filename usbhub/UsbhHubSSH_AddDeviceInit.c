void __fastcall UsbhHubSSH_AddDeviceInit(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10

  Log(a1, 0x10000, 1936933220, 0LL, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v4 = FdoExt(*(_QWORD *)(a2 + 8));
  *((_QWORD *)v4 + 389) = v4 + 776;
  *((_QWORD *)v4 + 388) = v4 + 776;
  KeInitializeEvent((PRKEVENT)v4 + 139, SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)v4 + 140, SynchronizationEvent, 1u);
  Log(a1, 0x2000, 1768843604, (__int64)(v4 + 800), (__int64)UsbhHubSSH_Timer);
  *(_QWORD *)v5 = 1332899156LL;
  *(_QWORD *)(v5 + 48) = v6;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 72) = 1397966964;
  KeInitializeSemaphore((PRKSEMAPHORE)(v4 + 782), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(v4 + 790), 1, 1);
  KeInitializeEvent((PRKEVENT)v4 + 143, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)v4 + 141, NotificationEvent, 1u);
  v4[820] = 1;
  v4[781] = 1;
}
