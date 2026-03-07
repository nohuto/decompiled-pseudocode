__int64 __fastcall UsbhTimerPnpStart(PVOID DeferredContext)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 v4; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_0dc7418686fe34c9f2e1dc83900248bf_Traceguids);
  v2 = FdoExt((__int64)DeferredContext);
  Log((__int64)DeferredContext, 0x2000, 1684886356, 0LL, 0LL);
  *((_QWORD *)v2 + 469) = v2 + 936;
  *((_QWORD *)v2 + 468) = v2 + 936;
  KeInitializeSpinLock((PKSPIN_LOCK)v2 + 466);
  KeInitializeEvent((PRKEVENT)(v2 + 940), NotificationEvent, 0);
  KeInitializeDpc((PRKDPC)(v2 + 946), (PKDEFERRED_ROUTINE)UsbhDmTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(v2 + 962));
  v3 = UsbhReferenceListAdd((__int64)DeferredContext, (__int64)(v2 + 936), 1836338500);
  v4 = v3;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    KeSetEvent((PRKEVENT)(v2 + 940), 0, 0);
  }
  else
  {
    v2[640] |= 0x2000000u;
    v2[934] = 2;
  }
  Log((__int64)DeferredContext, 0x2000, 1098149234, 0LL, v4);
  return (unsigned int)v4;
}
